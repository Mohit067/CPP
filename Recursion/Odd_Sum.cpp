#include<iostream>
using namespace std;
int sum(int x, int n){
    int Sum = 0;
    if(x >= n) return 1;
    if(n%2 != 0){
        return n +   sum(x,n-1);
    }
    else{
       return sum(x,n-1);
    }
    return Sum;
}
int main(){
    cout<<sum(1,10);
}