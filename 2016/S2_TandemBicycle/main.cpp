#include <iostream>
using namespace std;

void ascendSort(int* arr, int size){
    for(int i = 0; i < size-1; i++){
        for(int j = i; j < size; j++){
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void descendSort(int* arr, int size){
    for(int i = 0; i < size-1; i++){
        for(int j = i; j< size; j++){
            if(arr[j] > arr[i]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}

int main() {
    int question, N;
    cin >> question >> N;
    int* Darr = new int[N];
    int* Parr = new int[N];
    for(int i = 0; i < N; i++){
        cin >> Darr[i];
    }
    for(int i = 0; i < N; i++){
        cin >> Parr[i];
    }

    ascendSort(Darr, N);
    if(question == 1){
        ascendSort(Parr, N);
        int speed = 0;
        for(int i = 0; i < N; i++){
            speed += max(Darr[i], Parr[i]);
        }
        cout << speed;
    }
    else {
        descendSort(Parr, N);
        int speed = 0;
        for(int i = 0; i< N; i++){
            speed+= max(Darr[i], Parr[i]);
        }
        cout << speed;
    }

    return 0;
}
