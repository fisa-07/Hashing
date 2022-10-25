#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<int> removeDublicate(int *a,int size){
    vector<int> ans;
    unordered_map<int,bool> mp;
    for(int i=0;i<size;i++){
        if(mp.count(a[i])==1){
            continue;
        }
        mp[a[i]]=true;
        ans.push_back(a[i]);
    }
    return ans;
}
int main(){
    int a[]={1,2,2,5,6,8,4,7,5,5,6,0};
    vector<int> output=removeDublicate(a,12);
    for(auto it:output){
        cout<<it<<" ";
    }
    return 0;
}