#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a Number : ";
    cin>>n;

    for(int i=2; i<n; i++){
        if(n%i==0){
            cout<<"composite";
            break;
        }
        else {
            cout<<"not a composite";
            break;
        }
    }

}