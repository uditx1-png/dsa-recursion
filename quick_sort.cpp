#include<iostream>
using namespace std;
int partition(int arr[],int start,int end){
    int pivot = arr[end];
    int pos = start;
    for(int i=start;i<end;i++){
        if(arr[i] <= pivot){
            swap(arr[i],arr[pos]);
            pos++;
        }
    }
    swap(arr[pos],arr[end]);
    return pos;
}
void quick(int arr[],int start,int end){
    if(start>=end)
        return;
    int pivot = partition(arr,start,end);
    quick(arr,start,pivot-1);
    quick(arr,pivot+1,end);
}
int main(){
    int n,arr[100];
    cout<<"enter number of elements = ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    quick(arr,0,n-1);
    cout<<"sorted array:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}