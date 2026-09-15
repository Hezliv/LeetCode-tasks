#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int trap(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int sum = 0;
        int m = 0;
        int left_max = 0;
        int right_max = 0;
        while (left < right)
        {
            if (height[left] <= height[right])
            {
                if (left_max > height[left])
                {
                    sum += left_max - height[left];
                }
                else
                    left_max = height[left];
                left++;
            }
            else
            {
                if (right_max > height[right])
                {
                    sum += right_max - height[right];
                }
                else
                    right_max = height[right];
                right--;
            }
        }
        return sum;
    }
    
};

int main()
{
    Solution a;
    vector<int> b = { 4,2,0,3,2,5 };
    cout << a.trap(b);
}
