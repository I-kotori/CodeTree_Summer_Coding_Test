#include <iostream>
using namespace std;

bool isInIndex(int size, int x, int y){
    return(x >= 0 && x < size && y >= 0 && y < size );
}

int main() {
    int dx[4] = {1, 0, -1, 0};
    int dy[4] = {0, -1, 0, 1}; // E S W N
    int cnt = 0;
    int size;
    cin >> size;
    int arr[size][size];
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            cin >> arr[i][j];
        }
    }
    for(int k=0;k<size;k++){
        for(int j=0;j<size;j++){
            int count = 0;
            for(int i=0;i<4;i++){
                int nx = k + dx[i];
                int ny = j + dy[i];
                if(isInIndex(size, nx, ny) && arr[nx][ny] == 1){
                    count++;
                }
            }
            if(count >= 3){
                cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}
