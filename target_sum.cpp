#include<iostream>
#include<vector>
using namespace std;
bool find(int arr[],int index,int n,int target){
    if(target==0){
        return 1;
    }
    if(index ==n||target<0){
        return 0;
    }
    return find(arr,index+1,n,target)||find(arr,index+1,n,target-arr[index]);
}
int main(){
    int n,arr[100],target,i;
    cout<<"enter the number of element in array = ";
    cin>>n;
    cout<<"enter the number of element in array = ";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter the target = ";
    cin>>target;
    cout<<find(arr,0,n,target);
}