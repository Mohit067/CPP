#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a Number : ";
    cin>>n;

    bool flag = true;
    for(int i=2; i<n; i++){
        if(n%i == 0){
            flag = false;
            break;
        }
    }
    if(n==1) cout<<n<<" is neither prime not composit";
    else if(flag == true) cout<<n<<" is prime";
    else cout<<n<<" is Not a prime ";

}