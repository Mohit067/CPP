// 3,12,48,.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a NUmber : ";
    cin>>n;
    int a = 3;
    for(int i=0; i<n; i++){
        cout<<a<<" ";
        a = a*4;
    }
}