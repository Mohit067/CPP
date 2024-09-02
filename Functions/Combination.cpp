#include<iostream>
using namespace std;
int fact(int n){  
    int f = 1;  
    for(int i=2; i<=n; i++){
        f = f*i;
    }
    return f;
}

int combination(int n, int r){
    int ncr = 1;
    ncr = fact(n) / (fact(r)*fact(n-r));
    return ncr;
}

int main(){
    int n;
    cout<<"enter value of n : ";
    cin>>n;
    int r;
    cout<<"enter value of r : ";
    cin>>r;

    cout<<combination(n,r);
}