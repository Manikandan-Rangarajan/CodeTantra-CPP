#include<bits/stdc++.h>
using namespace std;

void reverse(int nums[],int st,int end){
    while(st<end){
        int temp = nums[st];
        nums[st] = nums[end];
        nums[end] = temp;
        st++;end--;
    }
}

int main(){
    int n;
    cout<<"Enter the array size"<<endl;
    cin>>n;
    int nums[n];
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    cout<<"enter the postions for rotation"<<endl;
    int k;
    cin>>k;
    int len = sizeof(nums)/sizeof(nums[0]);
    reverse(nums,0,len-1);
    reverse(nums,0,k-1);
    reverse(nums,k,len-1);
    cout<<"Rotated Array"<<endl;
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}