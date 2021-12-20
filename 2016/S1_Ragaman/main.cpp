#include <iostream>
#include <string>
using namespace std;

int removeAsterisk(string& str){
    int cnt = 0;
    for(int i = str.length()-1; i >= 0; i--){
        if(str[i] == '*'){
            cnt++;
            if(i == 0)
                str = str.substr(1,str.length()-1);
            else if(i == str.length()-1)
                str = str.substr(0,str.length()-1);
            else
                str = str.substr(0, i) + str.substr(i+1, str.length()-i-1);

        }
    }
    return cnt;
}

int main() {
    string input;
    string anagram;
    cin >> input >> anagram;
    bool result = true;
    int i = 0;
    int cnt = removeAsterisk(anagram);
    if(input.length()-cnt == anagram.length()){
        while(input.length() > 0 && i < anagram.length()){
            int index = input.find(anagram[i]);
            if(index == string::npos){
                result = false;
                break;
            }
            if(index == 0){
                input = input.substr(1,input.length()-1);
            }
            else if(index == input.length()-1){
                input = input.substr(0,input.length()-1);
            }
            else {
                input = input.substr(0, index) + input.substr(index+1, input.length()-index-1);
            }
            i++;
        }


    }

   if(result)
       cout << 'A';
   else
       cout << 'N';


}
