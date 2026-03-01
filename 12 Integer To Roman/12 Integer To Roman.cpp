#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    string intToRoman(int num) {
        vector<string> roman = { "M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I" };
        vector<int> integer = { 1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1 };

        string res = "";

        for (int i = 0; i < integer.size(); i++)
        {
            while (num >= integer[i])
            {
                num -= integer[i];
                res += roman[i];
            }
        }

        return res;
    }
};
int main()
{
    Solution a;
    cout << a.intToRoman(3749) << "\n";
}