// 67. Add Binary
// 鄒雨笙 2024.1.6


#include <iostream>
#include <string>
#include <cmath>
#include <stack>
using namespace std;


string addBinary(string a, string b) {
    int carry = 0;
    string sum = "";

    while (a.length() < b.length()) a = '0' + a;
    while (b.length() < a.length()) b = '0' + b;

    for (int i = a.length() - 1; i >= 0; i--) {
        int bitA = a[i] - '0';
        int bitB = b[i] - '0';
        int total = bitA + bitB + carry;

        if (total == 2) {
            carry = 1; // set carry for next iteration
            sum = '0' + sum; // append '0' as the sum bit
        } else if (total == 3) {
            carry = 1; // set carry for next iteration
            sum = '1' + sum; // append '1' as the sum bit
        } else {
            carry = 0; // no carry
            sum = (total == 1 ? '1' : '0') + sum; // append '1' if total is 1, else '0'
        }
    }

    if (carry) {
        sum = '1' + sum; // if there's a carry left, append it
    }

    return sum;
}

int main() {
    string a, b;
    cin >> a >> b;
    cout << addBinary(a, b) << endl;
    return 0;
}


// string addBinary(string a, string b) {
//     long long decA = 0, decB = 0;
//     long long decSum;
//     stack<long long> binSum;
//     string ans = "";
//     bool flag = true;
//
//     int j = 0;
//     for (int i = a.length()-1; i >= 0; i--) {
//         decA += (a[i]-'0') * pow(2,j);
//         // cout << decA << endl;
//         j++;
//     }
//     j = 0;
//     for (int i = b.length()-1; i >= 0; i--) {
//         decB += (b[i]-'0') * pow(2,j);
//         // cout << decA << endl;
//         j++;
//     }
//     decSum = decA + decB;
//
//     if (decSum == 0) {
//         flag = false;
//         ans = "0";
//     }
//     // cout << decSum << endl;
//
//     while (decSum != 0 and flag) {
//         // cout << decSum % 2 << endl;
//         binSum.push(decSum % 2); 
//         decSum /= 2;
//     }
//
//     while (!binSum.empty()) {
//         ans += to_string(binSum.top());
//         binSum.pop();
//     }
//     // cout << ans << endl;
//
//     return ans;
// }
//     
//
// int main() {
//     string a, b;
//     cin >> a >> b;
//     // addBinary(a, b);
//     cout << addBinary(a, b) << endl;
// }
//
//
