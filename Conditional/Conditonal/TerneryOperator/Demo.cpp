#include<iostream>
using namespace std;
int main(){
    //ternary operator --> condition ? true : flase;
    int marks;
    cout<<"Enter the marks : ";
    cin>>marks;
    (marks >= 33) ? cout<<"Pass" : cout<<"Fail";
}