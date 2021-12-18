#include <iostream>
using namespace std;


void printCanvas(int** arr, int row, int col){
    for(int i =0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if(arr[i][j] == 1){
                cout << 'G';
            }
            else
                cout << 'B';
        }
        cout << endl;
    }
}

int countGold(int** arr, int row, int col){
    int cnt = 0;
    for(int i =0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(arr[i][j]%2 == 1)
                cnt++;
        }
    }
    return cnt;
}

int main() {
    int M, N, K;
    cin >> M >> N >> K;

    int ** arr;
    // init
    arr =  new int*[M];
    for(int l = 0; l < M; l++){
        arr[l] = new int[N];
    }

    int* row = new int[M];
    int* col = new int[N];

    for(int i = 0; i < K; i++) {
        char c;
        int num;
        cin >> c >> num;
        if(c == 'R')
            row[num-1]++;
        else
            col[num-1]++;
    }
    for(int i = 0; i < M; i++){
        for(int j = 0; j < N; j++){
            arr[i][j] += row[i];
        }
    }

    for(int j = 0; j < N; j++){
        for(int i = 0; i < M; i++){
            arr[i][j] += col[j];
        }
    }

    cout << countGold(arr, M, N);

    return 0;
}

