#include<iostream>
using namespace std;

bool isInIndex(int xSize, int ySize, int x, int y){
    return (x >= 0 && x < xSize && y >= 0 && y < ySize);
}
int main(){
    int dx[4] = {0, 1, 0, -1}; // U R D L
    int dy[4] = {1, 0, -1, 0};
    int xAxis = 0;
    int yAxis = 0;
    int row, col;
    cin >> row >> col;

    int arr[100][100] = {0, };
    arr[0][0] = 1;
    int index = 0;
    for(int i=2;i<=row*col;i++){
        int nx = xAxis + dx[index];
        int ny = yAxis + dy[index];
        if(!isInIndex(row, col, nx, ny) || arr[nx][ny] != 0)
            index = (index + 1) % 4;

        // 그 다음 위치로 이동한 다음 배열에 올바른 값을 채워넣습니다.
        xAxis += dx[index]; 
        yAxis += dy[index];
        arr[xAxis][yAxis] = i;
    }
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
    return 0;
}
