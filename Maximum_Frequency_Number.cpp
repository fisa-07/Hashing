#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

int maxFrequency(int *a,int size){
    int maxele,maxfreq=0;
    unordered_map<int,int> fmp;
    for(int i=0;i<size;i++){
        fmp[a[i]]++;
        if(fmp[a[i]]>maxfreq){
            maxfreq=fmp[a[i]];
            maxele=a[i];
        }
    }
    return maxele;
}
int main(){
    int a[]={1,2,2,5,5,2,4,7,5,5,6,0};
    int output=maxFrequency(a,12);
    cout<<output;
    return 0;
}