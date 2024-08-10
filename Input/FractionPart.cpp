#include<iostream>
using namespace std;

int main(){

    float x; 
    cout<<"Enter a number : ";
    cin>>x;//6.4
    int y = (int)x;//6
    x = x-y;// 6 - (6.4) = 0.4
    cout<<x;//0.4

}