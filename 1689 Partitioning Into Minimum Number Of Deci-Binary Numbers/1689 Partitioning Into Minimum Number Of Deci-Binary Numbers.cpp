#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int minPartitions(string n) {
        int maxi = 0;
        for (auto c : n)
        {
            if (maxi < c)
                maxi = c;
        }

        return maxi - '0';
    }
};

int main()
{
    Solution a;
    cout << a.minPartitions("32");
}

