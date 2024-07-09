#include <iostream>
using namespace std;

int main() {
    int dx[4] = {1, 0, -1, 0};
    int dy[4] = {0, -1, 0, 1}; // E S W N
    string direction;
    int xAxis = 0;
    int yAxis = 0;
    cin >> direction;
    int index = 3;
    for(int i=0;i<direction.length();i++){
        if(direction[i] == 'L'){
            index = ((index - 1) + 4) % 4;
        }
        else if(direction[i] == 'R'){
            index = (index + 1) % 4;
        }
        else{
            xAxis += dx[index];
            yAxis += dy[index];
        }
    }
    cout << xAxis << ' ' << yAxis;
    return 0;
}
