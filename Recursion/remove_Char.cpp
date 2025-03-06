#include<iostream>
#include<string>
using namespace std;
void removeChar(string ans, string str, int idx){
    if(idx == str.length()){
        cout<<ans;
        return;
    }
    char ch = str[idx];
    if(ch == 'h') removeChar(ans, str, idx+1);
    else removeChar(ans+ch, str, idx+1);
}
int main(){
    string str = "mohit sahu";
    removeChar("", str, 0); // str --> original string
}