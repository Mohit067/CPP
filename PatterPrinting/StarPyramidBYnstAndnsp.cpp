#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of row : ";\
    cin>>n;

    int nsp = n-1;
    int nst = 1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=nsp; j++){
            cout<<" ";
        }
        nsp--;
        for(int k=1; k<=nst; k++){ // for odd number of stars
            cout<<"*";
        }
        nst+=2;
        cout<<endl;
    }
}