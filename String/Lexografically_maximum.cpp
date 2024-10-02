#include<bits/stdc++.h>
using namespace std;
int main(){
    string str = "i am a mohit sahu zi";

    string word = ""; 
    string maxWord = "";

    for(int i=0; i<str.size(); i++){
        if(str[i] == ' '){
            maxWord = max(maxWord , word);
            word = "";
        }
        else {
            word += str[i];
        }
    }

    maxWord = max(maxWord , word);//handling last word of string 
    cout<<maxWord;
    
}