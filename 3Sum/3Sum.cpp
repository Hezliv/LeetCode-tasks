#include <iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;
class Solution {
public:
    /* // Sort + HashMap O(n^2) time O(n) space
    vector<vector<int>> threeSum(vector<int>& nums) {
        unordered_map<int, int> map(nums.size());
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++)
        {
            map[nums[i]] = i;
        }
        int target = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (j > i + 1 && nums[j] == nums[j - 1]) continue;
                target = -(nums[i] + nums[j]);

                if (map.find(target) != map.end() && map[target] > j)
                {
                    res.push_back({ nums[i], nums[j], target });
                }
            }
        }
        return res;
    }*/
    vector<vector<int>> threeSum(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;
        int first = 0;
        sort(nums.begin(), nums.end());

    }
};
int main()
{
    std::cout << "Hello World!\n";
}
