#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"Enter your string : ";
    cin>>str;
    int n = str.length();
    int count = 0;
    for(int i=0; i<n; i++){
        if(n == 1){
            break;
        }
        if(n == 2){
            count = 1;
            break;
        }
        else if(i == 0){  // for first index
            if(str[i] != str[i+1]){
                count++;
            }
        }
        else if(i == n-1){ // for last index
            if(str[i] != str[i-1]){
                count++;
            }
        }
        else if(str[i] != str[i+1] && str[i] != str[i-1]){
            count++;
        }
    } 
    cout<<count;
}