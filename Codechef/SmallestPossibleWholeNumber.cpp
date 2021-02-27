#include<bits/stdc++.h>
using namespace std;

int solve(long N, long K){
    if (K == 0){
        return N;
    }
    long dividing = N / K;
    return (N - (dividing * K));
}

int main(){
    int T;
    cin >> T;
    while(T--){
        long N, K;
        cin >> N >> K;
        cout << solve(N, K) << endl;
    }
    return 0;
}