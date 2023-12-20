// 1768. Merge Strings Alternately
// 鄒雨笙 2023.12.20



#include <iostream>
using namespace std;

string mergeAlternately(string word1, string word2) {
    int word1Size = word1.length();
    int word2Size = word2.length();
    string mergedWord;

    int i = 0, j = 0;
    while (i < word1Size || j < word2Size) {
        if (i < word1Size) {
            mergedWord += word1[i];
            i++;
        }
        if (j < word2Size) {
            mergedWord += word2[j];
            j++;
        }
    }

    return mergedWord;
}

int main() {
    string word1;
    string word2;
    cin >> word1 >> word2;
    cout << mergeAlternately(word1, word2) << endl;
}


