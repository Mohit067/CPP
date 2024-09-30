#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<sstream>
using namespace std;
int main(){
    string str = "mohit is a web devloper";
    stringstream ss(str);
    string temp;
    while(ss>>temp){
        cout<<temp<<endl;
    }
}