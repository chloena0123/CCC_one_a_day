#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string str) {
    int i = 0;
    while (str.length() > 1) {
        if (str[i] != str[str.length() - 1]) {
            return false;
        }
        str = str.substr(i + 1, str.length() - 2);
    }
    return true;
}


int main() {
    string str;
    cin >> str;
    int max{0};

    for(int i = 0; i < str.length()-1; i++){
        for(int j = 1; j <= str.length(); j++){
            string copy = str.substr(i, j);
            if(isPalindrome(copy) && copy.length() > max){
                max = copy.length();
            }
        }
    }
    cout << max << endl;

}


