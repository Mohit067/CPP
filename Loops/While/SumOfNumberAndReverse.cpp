#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int a = n;
    int sum = 0;
    int reverse = 0;
    while(n>0){
        
        reverse *= 10;
        int lastDigit = n%10;
        reverse += lastDigit;
        n /= 10;

        sum += lastDigit;

    }
    cout<<sum<<""<<sum<<"["<<a<<"+"<<reverse<<"]";
}