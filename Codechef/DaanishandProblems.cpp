#include<bits/stdc++.h>
using namespace std;

int solve(int* A, int K){
    for (int i = 10; i > 0; i--){
        if (A[i - 1] <= K){
            K = K - A[i - 1];
        }
        else{
            return i;
        }
    }
    return 0;
}

int main(){
    int T;
    cin >> T;
    while(T--){
        int A[10];
        for (int i = 0; i < 10; i++){
            cin >> A[i];
        }
        int K;
        cin >> K;
        cout << solve(A, K) << endl;
    }
    return 0;
}