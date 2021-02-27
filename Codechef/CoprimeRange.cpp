#include<bits/stdc++.h>
using namespace std;

long long solve(long long L, long long R){
    long long low = 2, high = pow(10, 8);
    while (low < high){
        bool isPrime = true;
        for (long long i = 2; i <= low / 2; ++i) {
            if (low % i == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime){
            bool flag = true;
            for (long long j = L; j <= R; j++){
                if (__gcd(low, j) != 1){
                    flag = false;
                }
            }
            if (flag == true){
                return low;
            }
        }
        ++low;
    }
    return 0;
}

int main(){
    long long T;
    cin >> T;
    while(T--){
        long long L, R;
        cin >> L >> R;
        cout << solve(L, R) << endl;
    }
    return 0;
}