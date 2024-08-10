#include<iostream>
using namespace std;
int main(){

    int a,b,c;
    cout<<"enter 1st number : ";
    cin>>a;
    cout<<"enter 2nd number : ";
    cin>>b;
    cout<<"enter 3rd number : ";
    cin>>c;
    
    if(a>b){
        if(a>c){
            cout<<a<<" is greatest";
        }
        else {  // (c > a) && (a > b) --> then c is greatest
            cout<<c<<" is greatest"; 
        }
    }
    else { // b > a
        if(b>c){
            cout<<b<<" is greatest";
        }
        else { // c>b && b>a --> then c is greatest
            cout<<c<<" is greatest";
        }
    }

}