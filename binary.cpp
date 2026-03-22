#include<iostream>
using namespace std;
bool bs(int arr[],int start,int end,int x){
    if(start>end)
    return 0;
    int mid=start+(end-start)/2;
    if(arr[mid]==x)
    return 1; 
    else if(arr[mid]>x)
    return bs(arr,0,mid-1,x);
    else
    return bs(arr,mid+1,end,x);
}
int main(){
    int a[10],n,i,x;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"Enter the array :";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"enter the number want to be searched:  ";
    cin>>x;
    cout<<bs(a,x,n-1,x)<<endl;
    return 0;
};