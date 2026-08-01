#include <bits/stdc++.h>
using namespace std;
void countFrequency(int arr[],int n){
    map< int ,int > m;
    for(int i=0;i<n;i++){
        m[arr[i]]++;
    }
    for(auto it: m){
        cout<<it.first<<"->"<<it.second<<endl;
    }
};
int main(){
    int arr[10]={1,2,2,4,8,6,5,8,9,9};
    int n=sizeof(arr) / sizeof(arr[0]);
    countFrequency(arr,n);
}