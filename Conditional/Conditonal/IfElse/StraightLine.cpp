#include<iostream>
using namespace std;
int main(){

    float x1,y1;
    cout<<"Enter x1 and y1 : ";
    cin>>x1>>y1;

    float x2,y2;
    cout<<"Enter x2 and y2 : ";
    cin>>x2>>y2;

    float x3,y3;
    cout<<"Enter x3 and y3 : ";
    cin>>x3>>y3;

    if(((x2-x1)/(y2-y1)) == ((x3-x2)/(y3-y2))){
        cout<<"this is straight line";
    }
    else {
        cout<<"this is not  a straight line";
    }

}