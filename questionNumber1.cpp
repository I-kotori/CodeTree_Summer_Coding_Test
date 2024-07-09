#include <iostream>
#include <string>
using namespace std;

int main() {
    int dx[4] = {1,0,-1,0}; // E S W N
    int dy[4] = {0,-1,0,1};
    int xAxis = 0;
    int yAxis = 0;
    string direction;
    int distance;
    
    int iter;
    cin >> iter;
    int nx, ny;
    for(int i=0;i<iter;i++){
        cin >> direction;
        cin >> distance;
        int index;
        if(direction == "E"){
            index = 0;
        }
        else if(direction == "S"){
            index = 1;
        }
        else if(direction == "W"){
            index = 2;
        }
        else {
            index = 3;
        }
        xAxis += dx[index] * distance;
        yAxis += dy[index] * distance;
    }
    cout << xAxis << ' ' << yAxis;
    return 0;
}
