#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a nUmber : ";
    cin>>n;
    int reverse = 0;
    while(n>0){
        reverse *= 10;
        int lastDigit = n%10;
        reverse += lastDigit;
        n = n/10;
    }
    cout<<reverse;
}