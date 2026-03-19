#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int numberOfSubmatrices(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> gr(n + 1, vector<int>(m + 1, 0));
        vector<vector<int>> count(n + 1, vector<int>(m + 1, 0));
        int diff = 0;
        int c = 0;
        int res = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                diff = (grid[i][j] == 'X') ? 1 : (grid[i][j] == 'Y' ? -1 : 0);

                gr[i + 1][j + 1] = gr[i][j + 1] + diff + gr[i + 1][j] - gr[i][j];

                c = grid[i][j] == 'X' ? 1 : 0;
               count[i + 1][j + 1] = count[i][j + 1] + c + count[i + 1][j] - count[i][j];

               if (gr[i + 1][j + 1] == 0 && count[i + 1][j + 1] > 0) res++;
            }
            
        }
        return res;
        
    }
};
int main()
{
    Solution a;
    vector<vector<char>> ar = {
        {'X', 'Y', '.'},
        {'X', '.', '.'},
        {'.', 'Y', '.'}
    };
    cout << a.numberOfSubmatrices(ar);
}