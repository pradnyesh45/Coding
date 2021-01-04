#include<bits/stdc++.h>
using namespace std;

bool solve(int w, int h, int n){
    // if (w % 2 != 0 && h % 2 != 0){
    //     if (n == 1){
    //         return true;
    //     }
    // }
    int count = 1;
    while(w % 2 == 0){
        w = w / 2;
        count = count * 2;
    }
    while(h % 2 == 0){
        h = h / 2;
        count = count * 2;
    }
    if (count >= n){
        return true;
    }else {
        return false;
    }
}

int main(){
    int t;
    cin >> t;
    while (t--){
        int w, h, n;
        cin >> w >> h >> n;
        if(solve(w, h, n)){
            cout << "YES" << endl;
        }else
        {
            cout << "NO" << endl;
        }
        
    }
}