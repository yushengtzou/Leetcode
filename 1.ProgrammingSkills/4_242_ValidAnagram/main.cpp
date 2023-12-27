// 242. Valid Anagram
// 鄒雨笙 2023.12.23



#include <iostream>
#include <map>
using namespace std;


bool isAnagram(string s, string t) {
    map<char, int> mapS;
    map<char, int> mapT;

    // Count frequency of each character in s and t
    for (auto ch : s) {
        mapS[ch]++;
    }
    for (auto ch : t) {
        mapT[ch]++;
    }

    if (mapT.size() != mapS.size())
        return false;

    for (auto it = mapT.begin(); it != mapT.end(); it++) {
        if (mapS[it->first] != it->second) {
            return false;
        }
    }

    return true;
}


int main() {
    string s;
    string t;
    cin >> s >> t;
    cout << isAnagram(s, t) << endl;
}


