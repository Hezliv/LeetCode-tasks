#include <iostream>
using namespace std;

class Solution {
public:
    int minimumDeletions(string s) {
        int del = 0;
        int b_count = 0;
        
        int n = s.size();
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == 'b')
            {
                b_count++;
                
            }
            else
            {
                if (b_count > 0)
                {
                    del = min(del + 1, b_count);
                }
            }
        }
        return del;
    }
};

int main()
{
    Solution a;
    cout << a.minimumDeletions("aababbab");
}
