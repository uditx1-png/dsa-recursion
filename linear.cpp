#include<iostream>
using namespace std;
bool ls(int arr[],int x,int index){
    if(index==-1)
    return 0;
    if(arr[index]==x)
    return 1; 
    return ls(arr,x,index-1);
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
    cout<<ls(a,x,n-1)<<endl;
    return 0;
};