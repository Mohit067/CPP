#include<iostream>
using  namespace std;
int main(){
    char ch;
    cout<<"enter any alphabet : ";
    cin>>ch;
    int x = int(ch);
    
    if((x>=65 && x<=90) || (x>=97 && x<=122)){
        cout<<ch<<" this is alphabet"<<" and the value of "<<ch<<" is "<<(int)ch;
    }
    else {
        cout<<ch<<" this is not alphabet"<<" and the value of "<<ch<<" is "<<(int)ch;
    }
}