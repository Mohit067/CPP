#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(4);
    v.push_back(5);

    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }

    vector<int> r;
    for(int i=v.size()-1; i>=0; i--){
        int x;
        x = v[i];
        r.push_back(x);
    }
    cout<<endl;
    
    for(int i=0; i<r.size(); i++){
        cout<<r[i]<<" ";
    }

}