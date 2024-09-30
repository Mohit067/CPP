#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<sstream>
using namespace std;
int main(){
    string str;
    cout<<"Enter your string : ";
    getline(cin , str);//taking input
    stringstream ss(str);
    vector<string> v;
    string temp;
    while(ss>>temp){
        v.push_back(temp);
    }
    cout<<endl;
    sort(v.begin(),v.end());
    int maxCount = 1;
    int count = 1;

    for(int i=1; i<v.size(); i++){
        if(v[i] == v[i-1]){
            count++;
        }
        else count = 1; // every time if condition not true make you count 1
        maxCount = max(maxCount,count);
    }

    count = 1;
    for(int i=1; i<v.size(); i++){
        if(v[i] == v[i-1]){
            count++;
        }
        else count = 1;
        if(count == maxCount){
            cout<<maxCount<<" "<<v[i]<<endl;
        }
    }

}