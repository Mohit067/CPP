#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a Number : ";
    cin>>n;
    if(n>99 && n<1000){
        cout<<n;
    }
    else {
        cout<<"not a three digit number";
    }
}