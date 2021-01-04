#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int* arr = new int[n];
        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }
        int currenta = 0, currentb = 0, suma = 0, sumb = 0;
        int i = 0, j = n - 1;
        currenta = arr[0];
        int moves = 0;
        while (i < j){
            bool flag = false;
            currentb = 0;
            while (currentb <= currenta){
                flag = true;
                currentb += arr[j];
                j--;
            }
            if (flag){
                moves++;
            }
            sumb += currentb;
            flag = false;
            if (i < j){
                flag = true;
                currenta = 0;
                while (currenta <= currentb){
                    currenta += arr[i];
                    i++;
                }
            }
            suma += currenta;
            if (flag){
                moves++;
            }
        }
        cout << moves << " " << suma << " " << sumb << endl;
    }
    return 0;
}