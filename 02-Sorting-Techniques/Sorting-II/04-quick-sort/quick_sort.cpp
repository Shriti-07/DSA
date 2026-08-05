#include<bits/stdc++.h>
using namespace std;
int divide(vector<int> &arr,int low,int high){
    int pivot=arr[low];
    int i=low;
    int j=high;
    while(i<j){
        while(arr[i]<=pivot && i<=high-1){
            i++;
        }
        while(arr[j]>pivot && j>=low+1){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[low],arr[j]);
    return j;
    
}
void quickSort(vector<int> &arr,int low,int high){
    if(low<high){
        int pivot=divide(arr,low,high);
        quickSort(arr,low,pivot-1);
        quickSort(arr,pivot+1,high);
    }
}

int main() {
    vector<int> arr={1,2,2,8,5,21,67,9,33};
    int n=arr.size();
    quickSort(arr,0,n-1);
    for(auto i: arr){
        cout<<i<<" ";
    }
    return 0;
}