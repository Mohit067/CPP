#include<iostream>
#include<vector>
using namespace std;
void subsequence(int arr[], vector<int> ans, int idx, int n, int k){
    if(idx == n){
        if(ans.size() == k){
            for(int i=0; i<ans.size(); i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
        return;
    }
    if(ans.size() + (n-idx) < k) return;
    subsequence(arr, ans, idx+1, n, k);
    ans.push_back(arr[idx]);
    subsequence(arr, ans, idx+1, n, k);

}
int main(){
    int arr[] = {1,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> ans;
    int k = 3;
    int idx = 0;
    subsequence(arr, ans, idx, n, k);
}
/**
 * 
 * for arr[] = {1,2,3,4}
    2 3 4 
    1 3 4 
    1 2 4 
    1 2 3 
 */