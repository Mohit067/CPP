#include<iostream>
using namespace std;
int fact(int n){  
    int f = 1;  
    for(int i=2; i<=n; i++){
        f = f*i;
    }
    return f;
}

int permutation(int n, int r){
    int npr = 1;
    npr = fact(n) / (fact(n-r));
    return npr;
}

int main(){
    int n;
    cout<<"enter value of n : ";
    cin>>n;
    int r;
    cout<<"enter value of r : ";
    cin>>r;

    cout<<permutation(n,r);
}