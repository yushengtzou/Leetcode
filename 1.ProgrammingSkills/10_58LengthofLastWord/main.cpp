// 58. Length of Last Word
// 鄒雨笙 2023.12.30


#include <iostream>
#include <vector>
using namespace std;


int lengthOfLastWord(string s) {
    vector<int> record;
    int len = 0;
    bool flag = false;
    for (auto ch : s) {
        if (ch != ' ')
            record.push_back(1);
        else
            record.push_back(0);
    }
    // for (auto r : record)
    //     cout << r;
    // cout << endl;
    for (int i = record.size()-1; i >= 0; i--) {
        if (record[i] == 1) {
            len++;
            flag = true;
        }
        if (flag && record[i] == 0)
            break;
    }
    return len;
    
}


int main() {
    string word;
    getline(cin, word);
    cout << lengthOfLastWord(word) << endl;
    // lengthOfLastWord(word);
}


