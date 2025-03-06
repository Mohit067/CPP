#include<iostream>
using namespace std;
void gcd(int a, int b){
    if(a==0){
        cout<<b;
        return;
    }
    int r = a%b;
    gcd(r, a);

}
int main(){
    int a = 12;
    int b = 60;
    gcd(a, b);
}