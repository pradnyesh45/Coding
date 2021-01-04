#include<bits/stdc++.h>
using namespace std;

bool solve(int* candies, int n){
    int sum = 0;
    int c1 = 0;
    for (int i = 0; i < n; i++){
        sum += candies[i];
        if (candies[i] == 1){
            c1++;
        }
    }
    if (sum % 2){
        return false;
    }
    if ((sum/2) % 2 == 0){
        return true;
    }
    if (c1 > 0){
        return true;
    }else {
        return false;
    }
}

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int candies[n + 1];
        for (int i = 0; i < n; i++){
            cin >> candies[i];
        }
        if (solve(candies, n)){
            cout << "YES" << endl;
        }else {
            cout << "NO" << endl;
        }
    }
}