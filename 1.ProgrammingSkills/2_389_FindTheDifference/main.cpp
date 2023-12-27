// 389. Find the Difference
// 鄒雨笙 2023.12.21



#include <iostream>
#include <map>
using namespace std;

char findTheDifference(string s, string t) {
    map<char, int> mapS;
    map<char, int> mapT;

    // Count frequency of each character in s and t
    for (auto ch : s) {
        mapS[ch]++;
    }
    for (auto ch : t) {
        mapT[ch]++;
    }

    // Find the character with a different count
    for (auto it = mapT.begin(); it != mapT.end(); it++) {
        if (mapS[it->first] != it->second) {
            return it->first;
        }
    }

    return ' '; // Return a placeholder if no difference is found
}

int main() {
    string s, t;
    cin >> s >> t;
    cout << findTheDifference(s, t) << endl;
    return 0;
}


