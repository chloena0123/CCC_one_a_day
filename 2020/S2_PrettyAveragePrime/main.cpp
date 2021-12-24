#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int main() {
    cin.tie(NULL);
    int T;
    cin >> T;

//    int** arr= new int*[T];
//
//    for(int i = 0; i < T; i++){
//        arr[i] = new int[2];
//    }

    for(int i = 0; i < T; i++){
        int n;
        cin >> n;
        for(int j = 2; j <= n; j++){
            if(isPrime(j) && isPrime(2*n - j)){
                cout << j << " " << 2*n -j << "\n";
//                arr[i][0] = j;
//                arr[i][1] = 2*n-j;
                break;
            }
        }
    }

//    for(int i = 0; i < T; i++){
//       cout << arr[i][0] << " " << arr[i][1] << endl;
//    }
}
