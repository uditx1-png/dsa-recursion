#include<iostream>
#include<vector>
using namespace std;
void merge(int arr[],int start,int end,int mid){
    vector<int>temp(end-start+1);
    int left=start,right=mid+1, index=0;
    while(left<=mid&&right<=end){
        if(arr[left]>=arr[right]){
            temp[index]=arr[left];
            left++;
            index++;
        }
        else{
            temp[index]=arr[right];
            right++;
            index++;
        }
    }
    while(left<=mid){
        temp[index]=arr[left];
        index++;
        left++;
    }
     while(right<=end){
        temp[index]=arr[right];
        index++;
        right++;
    }
    for(int i=0;i<temp.size();i++){

        arr[start+i]=temp[i];
    }
}
void divide(int arr[],int start,int end){
    if(start>=end){
        return;
    }
    int mid=start+(end-start)/2;
    divide(arr,start,mid);
    divide(arr,mid+1,end);
    merge(arr,start,end,mid);
}
int main(){
    int n,arr[100],i;
    cout<<"enter the number of element in array = ";
    cin>>n;
    cout<<"enter the array = ";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    divide(arr,0,n-1);
    cout<<"sorted array"<<endl;
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}