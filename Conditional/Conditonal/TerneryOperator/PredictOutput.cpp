#include<iostream>
using namespace std;
int main(){
    int x;
    x = 5 > 8 ? 10 : 1 != 2 < 5 ? 20 : 30  ;
    cout<<"The value of x is : "<<x;
}

// 30
/**
 * 1 != 2 < 5 ? 20 : 30
 * 2 < 5  -->  true
 * 1 != (1)true  --> false then 30 is coming from here
 * 
 * now 
 * 5 > 8 ? 10 : 30
 * 5 > 8 --> this is false so our answe is 30;
 */