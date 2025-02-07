#include<iostream>
using namespace std;
void tower_Of_Honoi(int n, char a, char b, char c){
    if(n == 0) return;
    tower_Of_Honoi(n-1, a, c, b);
    cout<<a<<" --> "<<c<<endl;
    tower_Of_Honoi(n-1, b, a, c);

}
int main(){
    int n;
    cout<<"Enter level Number: ";
    cin>>n;
    tower_Of_Honoi(n, 'A', 'B', 'C');
}