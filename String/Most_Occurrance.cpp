#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
int main(){
    string s = "mohit";
    vector<int> arr(26,0);
    for(int i=0; i<s.length(); i++){
        char ch = s[i];
        int ascii = (int)ch;
        arr[ascii - 97]++; // character ko increase kr rhe hai
    }
    int max = 0;
    for(int i=0; i<26; i++){
        if(arr[i] > max) max = arr[i];
    }

    for(int i=0; i<26; i++){
        if(arr[i] == max){
            int ascii = i+97; // conver index into character value
            char ch = (char)ascii; // conver value into character
            cout<<ch<<" "<<max<<endl;
        }
    }
}