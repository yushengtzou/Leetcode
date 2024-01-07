// 1232. Check If It Is a Straight Line
// 鄒雨笙 2024.1.6


#include <iostream>
#include <vector>
using namespace std;


bool checkStraightLine(vector<vector<int>>& coordinates) {
    int deltaX = coordinates[1][0] - coordinates[0][0];
    int deltaY = coordinates[1][1] - coordinates[0][1];

    for (int i = 2; i < coordinates.size(); i++) {
        int x = coordinates[i][0] - coordinates[0][0];
        int y = coordinates[i][1] - coordinates[0][1];

        // Check if the cross product is zero for collinearity
        if (x * deltaY != y * deltaX) {
            return false;
        }
    }
    return true;
}


int main() {
    vector<vector<int>> coordinates;
    coordinates = {{1,2},{2,3},{3,4},{4,5},{5,6},{6,7}};
    cout << checkStraightLine(coordinates) << endl;
}


