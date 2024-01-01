// 896. Monotonic Array
// 鄒雨笙 2023.12.27


#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;


bool isMonotonic(vector<int>& nums) {
    int monotonicUp = 1;
    int monotonicDown = 2;
    int len, sum = 0;
    vector<int> record;
    bool result;

    for (int i = 0; i < nums.size()-1; i++) {
        if (nums[i+1] > nums[i]) {
            record.push_back(monotonicUp);
        }
        else if (nums[i+1] < nums[i]) {
            record.push_back(monotonicDown);
        }
    }

    len = record.size();

    for (auto r : record)
        sum += r;

    if (sum == len or sum == len*2)
        result = true;
    else
        result = false;

    return result;
}


int main() {
    int num;
    vector<int> nums;
    while (cin >> num) {
        nums.push_back(num);
    }
    cout << isMonotonic(nums) << endl;
    // for (auto num : nums)
    //     cout << num << " ";
    // cout << endl;
    return 0;
}
