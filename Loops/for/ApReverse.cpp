#include<iostream>
using namespace std;
int main(){
    // 100 97 94 91 .....

    //1st method --> mathmatical  
    int n;
    cout<<"enter value of x : ";
    cin>>n;
    for(int i=100; i>0; i-=3){
        cout<<i<<" ";
    }

    cout<<endl;

    //2nd way
    int a = 100;
    for(int i=n; i>0; i--){
        cout<<a<<" ";
        a = a - 3;
    }
}