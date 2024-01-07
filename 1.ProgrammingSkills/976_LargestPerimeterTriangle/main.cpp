// 976. Largest Perimeter Triangle
// 鄒雨笙 2024.1.7


#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;


int largestPerimeter(vector<int>& nums) {
    int a, b, c;
    int perimeter = 0;
    bool isTriangle = false;
    sort(nums.begin(), nums.end());
    for (int i = nums.size()-3; i >= 0; i--) {
        a = nums[i];
        b = nums[i+1];
        c = nums[i+2];
        if (a + b <= c)
            continue;
        else {
            isTriangle = true;
            perimeter = a + b + c;
            break;
        }
    }
    
    return perimeter;
}


int main() {
    int num;
    vector<int> nums;
    while (cin >> num) {
        nums.push_back(num);
    }
    // for (auto num : nums)
    //     cout << num << " ";
    // cout << endl;
    // largestPerimeter(nums);
    // for (auto num : nums)
    //     cout << num << " ";
    // cout << endl;
    cout << largestPerimeter(nums) << endl;
    return 0;
}
