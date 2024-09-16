#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>& v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
}
void reverse(int i, int j, vector<int>& v){
    while(i<=j){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
}
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(4);
    v.push_back(5);
    int n = v.size();
    int k = 14;
    if(k>n) k = k%n;
    display(v);
    cout<<endl;
    // reverse(n-k, k+v.size(), v);
    reverse(0, n-k-1, v);
    reverse(n-k, n-1, v);
    reverse(0, n-1, v);
    display(v);
}