// 1502. Can Make Arithmetic Progression From Sequence
// 鄒雨笙 2023.12.26


#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;


bool canMakeArithmeticProgression(vector<int>& arr) {
    // sort(arr)
}


int main() {
    int num;
    vector<int> arr;
    while (cin >> num) {
        arr.push_back(num);
        // for (auto num : nums)
        //     cout << num << endl;
    }
    // moveZeroes(nums);
    for (auto num : arr)
        cout << num << " ";
    cout << endl;
    return 0;
}
