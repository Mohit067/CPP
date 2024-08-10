#include<iostream>
using namespace std;
int main(){
    int cp , sp;
    cout<<"Enter cost Price : ";
    cin>>cp;
    cout<<"Enter selling Price : ";
    cin>>sp;
    if(sp > cp){
        cout<<"you are in profit and the  profit is "<<(sp-cp);

    }
    else if (sp == cp){
        cout<<"No loss and No profit ";
    }
    else {
        cout<<"you are in loss and the loss is "<<(cp-sp);
    }
}