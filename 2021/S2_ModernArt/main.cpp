#include <iostream>
using namespace std;

void magicBrush(int** arr, int row, int col, char c, int num){
    if(c == 'R'){
        for(int i = 0; i < col; i++){
            if(arr[num][i] == 0)
                arr[num][i] = 1;
            else
                arr[num][i] = 0;
        }
    }
    else if(c == 'C') {
        for(int j = 0; j < row; j++){
            if(arr[j][num] == 0)
                arr[j][num] = 1;
            else
                arr[j][num] = 0;
        }
    }
}
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
            if(arr[i][j] )
                cnt++;
        }
    }
    return cnt;
}

int main() {
    int M, N, K;
    cin >> M >> N >> K;
//    cout << M << endl;
//    cout << N << endl;
//    cout << K << endl;

    int ** arr;
    // init
    arr =  new int*[M];
    for(int l = 0; l < M; l++){
        arr[l] = new int[N];
    }

    for(int j = 0 ; j < M; j++){
        for(int k = 0; k < N; k++){
            arr[j][k] = 0;
        }
    }

    for(int i = 0; i < K; i++) {
        char c;
        int num;
        cin >> c >> num;
        magicBrush(arr, M, N, c, num-1);
//        cout << c << " " << num << endl;
//        printCanvas(arr, M, N);
//        cout << endl;
    }

    cout << countGold(arr, M, N);

    return 0;
}

