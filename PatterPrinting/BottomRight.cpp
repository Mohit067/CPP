#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of row : ";
    cin>>n;
    
    for(int i=1; i<=n; i++){
        for(int j=1; j <= n-i; j++){ //spaces
            cout<<" ";
        }
        for(int k=1; k<=i; k++){ // stars
            cout<<"*";
        }
        cout<<endl;
    }
}