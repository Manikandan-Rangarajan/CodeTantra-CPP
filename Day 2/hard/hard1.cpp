#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {5,4,3,2,1};
    int len = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<len-1;i++){
        for(int j=i+1;j<len;j++){
            if(arr[i]>arr[j]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    for(int i=0;i<len;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}