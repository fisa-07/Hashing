#include<iostream>
#include<unordered_map>
using namespace std;

int subset(int *a,int n){
    int ml=0;
    int l;
    int i=-1;
    int sum=0;
    unordered_map<int,int> mp;
    mp[sum]=i;
    while(i<n-1){
        i++;
        sum+=a[i];
        if(mp.count(sum)){
            l=i-mp[sum];
            if(ml<l){
                ml=l;
            }
        }
        else{
            mp[sum]=i;
        }
    }
    return ml;
}

int main(){
    int a[]={2,1,-2,2,3};
    cout<<subset(a,5);
    return 0;
}