// 283. Move Zeroes
// 鄒雨笙 2023.12.25


#include <iostream>
#include <vector>
#include <string>
using namespace std;


void moveZeroes(vector<int>& nums) {
    int cnt = 0;
    vector<int> pos;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == 0) {
            pos.push_back(i);
        }
    }
    for (auto p : pos) {
        nums.erase(nums.begin() + p - cnt);
        cnt++;
    }
    while (cnt--)
        nums.push_back(0);
}


int main() {
    int num;
    vector<int> nums;
    while (cin >> num) {
        nums.push_back(num);
        // for (auto num : nums)
        //     cout << num << endl;
    }
    moveZeroes(nums);
    for (auto num : nums)
        cout << num << endl;
    return 0;
}
