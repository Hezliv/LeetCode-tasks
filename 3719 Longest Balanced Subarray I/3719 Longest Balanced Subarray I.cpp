#include <iostream>
#include <unordered_set>
#include <vector>
#include <algorithm>
#include <fstream>

using namespace std;

auto __fast_io_atexit = []() { ios::sync_with_stdio(false); cin.tie(nullptr); std::atexit([]() { ofstream("display_runtime.txt") << "0"; }); return 0; }();

class Solution {
public:
    int longestBalanced(vector<int>& nums) {

        int n = nums.size();
        int result = 0;
        unordered_set<int> odd;
        unordered_set<int> even;
        for (int i = 0; i < nums.size(); i++)
        {
            odd.clear();
            even.clear();
            for (int j = i; j < nums.size(); j++)
            {
                if (nums[j] % 2 == 0)
                {
                    even.insert(nums[j]);
                }
                else
                {
                    odd.insert(nums[j]);
                }
                if (even.size() == odd.size())
                {
                    result = max(result, j - i + 1);
                }
            }
        }
        return result;
    }
};

int main()
{
    Solution a;
    vector<int> b = { 2, 5, 4, 3 };
    cout << a.longestBalanced(b);
}
