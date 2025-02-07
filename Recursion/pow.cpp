#include<iostream>
using namespace std;

int pow(int x, int n){ // x^n //tc = O(log n)
    if(n==0) return 1;
    if(n==1) return x;
    int ans = pow(x, n/2);
    if(n%2==0){//if power is even
        return ans*ans;
    }
    else{//if power is odd
        return ans*ans*x;
    }
}
int main(){
    cout<<pow(2,10);
}