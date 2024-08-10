#include<iostream>
using namespace std;

int main(){
    char ch = 'a';
    cout<<int(ch)<<endl;//97

    char ch1 = 'A';
    cout<<int(ch1)<<endl;//65

    char ch2 = '0';
    cout<<int(ch2)<<endl;//48


    //position 
    cout<<int(ch-96);
    cout<<int(ch1-64);
}