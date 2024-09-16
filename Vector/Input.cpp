#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    cout<<"enter element : ";
    for(int i=0; i<5; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    cout<<endl;
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
}