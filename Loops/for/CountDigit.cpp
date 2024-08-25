#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a Number : ";
    cin>>n;

    int count = 0;
    for(int i=0; i<=n; i++){
        n = n/10;
        count++;
    }
    cout<<count;
}