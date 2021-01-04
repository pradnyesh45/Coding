#include <bits/stdc++.h>
using namespace std;

int solve(int** grid, int R, int C){
    int** output = new int*[R - 1];
    for (int i = 0; i < R; i++){
        output[i] = new int[C - 1];
    }
    output[R - 1][C - 1] = (grid[R - 1][C - 1] > 0) ? 1 : abs(grid[R - 1][C - 1]) + 1;
    for (int i = R - 2; i >=0; i--){
        output[i][C - 1] = max(output[i + 1][C - 1] - grid[i][C- 1], 1);
    }
    for (int j = C - 2; j >= 0; j--){
        output[R - 1][j] = max(output[R - 1][j + 1] - grid[R - 1][j], 1);
    }
    for (int i = R - 2; i >= 0; i--){
        for (int j = C - 2; j >= 0; j--){
            int minCostPath = min(output[i + 1][j], output[i][j + 1]);
            output[i][j] = max(minCostPath - grid[i][j], 1);
        }
    }
    int ans = output[0][0];
    delete [] output;
    return ans;
}

int main()
{
    int T;
    cin >> T;
    while(T--){
        int R, C;
        cin >> R >> C;
        int** grid = new int*[R - 1];
        for (int i = 0; i < R; i++){
            grid[i] = new int[C - 1];
            for (int j = 0; j < C; j++){
                cin >> grid[i][j];
            }
        }
        cout << solve(grid, R, C) << endl;
        delete [] grid;
    }
    return 0;
}
