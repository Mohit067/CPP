#include<iostream>
using namespace std;
int sum(int n){
    if(n==0) return 0;
    int Sum = n%10 + sum(n/10);
    return Sum;
}
int main(){
    cout<<sum(123);
}