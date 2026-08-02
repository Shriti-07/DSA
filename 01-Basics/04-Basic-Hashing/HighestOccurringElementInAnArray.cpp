#include <bits/stdc++.h>
using namespace std;
void HighestOccuringElement(vector<int> &vec){
    unordered_map<int,int> un;
    for(auto it:vec){
        un[it]++;
    }
    int highestElement=vec[0];
    int max=0;
    for(auto it:un){
        if(it.second>max){
            max=it.second;
            highestElement=it.first;
        }
    }
    cout<<"highest element is: "<<highestElement;
}
int main(){
    vector<int> vec={1,2,2,2,4,6,2,8,8,8,8,8};
    HighestOccuringElement(vec);
}