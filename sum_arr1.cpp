#include<iostream>
using namespace std;
int sum(int arr[],int index,int n){
    if(index==n) 
         return 0 ;
    return arr[index]+ sum(arr,index+1,n);
   
}

int main(){
    int n,arr[100];
    cout<<"enter the number :";
    cin>>n;
    cout<<"enter the array :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<sum(arr,0,n);
    return 0;
}