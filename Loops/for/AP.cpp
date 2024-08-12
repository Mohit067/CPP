#include<iostream>
using namespace std;
int main(){
    // 1 3 5 7 .....

    //1st method --> mathmatical  
    int n;
    cout<<"enter value of x : ";
    cin>>n;
    for(int i=1; i<=(2*n - 1); i+=2){
        cout<<i<<" ";
    }

    cout<<endl;

    //2nd way
    int a = 1;
    for(int i=1; i<=n; i++){
        cout<<a<<" ";
        a += 2;
    }
}