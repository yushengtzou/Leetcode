// 66. Plus One
// 鄒雨笙 2023.12.28


#include <iostream>
#include <vector>
#include <string>
using namespace std;


vector<int> plusOne(vector<int>& digits) {
    string num = "";
    string ans;
    int numINT;
    for (auto digit : digits) {
        num += to_string(digit);
    }
    numINT = stoi(num);
    numINT += 1;
    ans = to_string(numINT);
    digits.clear();
    for (auto digit : ans)
        digits.push_back(digit);

}


int main() {
    int num;
    string ans = "";
    vector<int> digits;
    while (cin >> num) {
        digits.push_back(num);
    }
    // vector<int> plusOne(digits);
    vector<int> plusOne(digits);

    for (auto digit : digits)
        cout << digit << " ";
    cout << endl;
    return 0;
}
