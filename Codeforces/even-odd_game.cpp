#include<bits/stdc++.h>
using namespace std;

void solve(int* values, int n){
    int normal[n + 1];
    for (int i = 0; i < n; i++){
        normal[i] = values[i];
    }
    sort(values, values + n);
    int alice = 0;
    int bob = 0;
    for (int i = 0; i < n; i++){
        if (values[i] % 2 == 0 && i % 2 == 0){
            alice +=  values[i];
        }
        if (values[i] % 2 != 0 && i % 2 != 0){
            bob += values[i];
        }
    }
    if (alice > bob){
        cout << "Alice" << endl;
    }else if (bob > alice){
        cout << "Bob" << endl;
    }else {
        cout << "Tie" << endl;
    }
}

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int values[n + 1];
        for (int i = 0; i < n; i++){
            cin >> values[i];
        }
        solve(values, n);
    }
    return 0;
}