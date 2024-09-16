#include<iostream>
#include<vector>
using namespace std;
void change(vector<int>& v){
    v.at(3) = 400;
}
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
    cout<<endl;
    change(v);
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
}