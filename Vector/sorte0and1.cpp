#include<iostream>
#include<vector>
using namespace std;
vector<int> sort01(vector<int>& v){
    int noo = 0;
    int noz = 0;
    vector<int> s;
    for(int i=0; i<v.size(); i++){
        if(v[i] == 0) noz++;
        else noo++;
    }
    while(noz){
        s.push_back(0);
        noz--;
    }
    while(noo){
        s.push_back(1);
        noo--;
    }
    return s;
}
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);

    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    vector<int> sorted = sort01(v);
    for(int i=0; i<sorted.size(); i++){
        cout<<sorted[i]<<" ";
    }
}