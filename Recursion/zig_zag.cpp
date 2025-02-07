#include<iostream>
using namespace std;
void zigzag(int n){
    if(n==0) return;
    cout<<n;//kam
    zigzag(n-1);//call
    cout<<n<<endl;//kamm
    zigzag(n-1);//call
    cout<<n<<endl;//kam
}
int main(){
    zigzag(2);
}