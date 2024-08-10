#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter first point : ";
    cin>>x;
    cout<<"Enter second point : ";
    cin>>y;
    
    if(x==0 && y==0){
        cout<<"points are lies at origin";
    }
    else if(x > 0 && y == 0){
        cout<<"point are lies on x-axis";
    }
    else if(y > 0 && x ==0) {
        cout<<"point are lies on y-axis";
    }
    else if(x > 0 && y > 0){
        cout<<"Points are   lies between x-axis and y-axis";
    }
    else {
        cout<<"Points are not  lies on x-axis and y-axis";
    }
}