class Solution {
public:
    int uniquePaths(int m, int n) {
        int tmp[m][n];
        for (int i = 0;i < m;i++) {
            tmp[i][0] = 1;
        }
        for (int i = 0; i < n;i++) {
            tmp[0][i] = 1;
        }
        for (int i = 1;i < m;i++) {
            for (int j = 1;j < n;j++) {
                tmp[i][j] = tmp[i - 1][j] + tmp[i][j - 1];
            }
        }
        return tmp[m - 1][n - 1];
    }
};