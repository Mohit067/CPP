#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(40);
    v.push_back(50);
    cout<<v.at(3)<<endl;//40
    v.at(3) = 7;
    cout<<v.at(3);//4

    cout<<endl;
    sort(v.begin(), v.end());
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
}