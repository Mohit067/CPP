#include<iostream>
using namespace std;
int stair(int n){
    if(n==1) return 1;
    if(n==2) return 2;
    return stair(n-1)+stair(n-2);
}
int main(){ //count the step from 1st  stair to last stair
    cout<<stair(5);
}