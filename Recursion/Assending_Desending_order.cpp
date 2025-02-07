#include<iostream>
using namespace std;
void Assending(int n){
    if(n==0) return;//base case
    Assending(n-1);//recursive call
    cout<< n <<" "; //printing
}
void Desending(int n){
    if(n==0) return;//base case
    cout<< n <<" ";//printing
    Desending(n-1);//recursive call
}

void AsDs(int x, int n){
    if(x >= n){
        cout<<n<<" ";
        return;
    }
    cout<<x<<" ";
    AsDs(x+1, n);
    cout<<x<<" ";
}
int main(){
    Assending(5);
    Desending(4);
    cout<<endl;
    AsDs(1,5);
}