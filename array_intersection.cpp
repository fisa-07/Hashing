#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<int> array_intersection(int *a,int *b,int n,int m){
    vector<int> ans;
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
        mp[a[i]]++;
    }
    for(int i=0;i<m;i++){
        mp[b[i]]--;
        if(mp[b[i]]>=0){
            ans.push_back(b[i]);
        }
    }
    return ans;  
}
int main(){
    int a[] = {2,6,8,5,4,3};
    int b[] = {2,3,4,7};
    vector<int> output = array_intersection(a,b,6,4);
    for(auto it:output){
        cout<<it<<" ";
    }
    return 0;
}