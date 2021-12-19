#include <iostream>
using namespace std;
long long calculateTime(int* pos, int* speed, int* hear, int n, int c){
    long long time{0};

    for(int i = 0; i < n; i++){
        // student within hearing range
        if(c-hear[i] <= pos[i] && pos[i] <= c+hear[i] ){
            time += 0;
        }
        else if(pos[i] > c){
            time += abs(abs(c+hear[i]) - pos[i]) * speed[i];
        }
        else if(pos[i] < c){
            time += abs(abs(c-hear[i]) - pos[i]) * speed[i];
        }
    }

    return time;
}

int main() {
    int N;
    cin >> N;

    int* pos = new int[N];
    int* speed = new int[N];
    int* hear = new int[N];

    int max_C = 0;
    for(int i = 0; i < N; i++){
        cin >> pos[i] >> speed[i] >> hear[i];
        if(pos[i] > max_C){
            max_C = pos[i];
        }
    }

    long long min = calculateTime(pos, speed, hear, N, 0);
    for(int i = 1; i < max_C; i++){
        long long t = calculateTime(pos, speed, hear, N, i);
        if(t < min){
            min = t;
        }
    }

    cout << min;
    return 0;
}
