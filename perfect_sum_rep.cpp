#include<iostream>
#include<vector>
using namespace std;
int  perfect(int arr[],int index,int n,int sum){
    if(sum==0){
        return 1;
    }
    if(index==n||sum<n){
        return 0;
    }
    return perfect(arr,index+1,n,sum)+perfect(arr,index,n,sum-arr[index]);
}
int main(){
    int n,arr[100],sum,i;
    cout<<"enter the number of element in array = ";
    cin>>n;
    cout<<"enter the number of element in array = ";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter the sum = ";
    cin>>sum;
    cout<<perfect(arr,0,n,sum)<<endl;
}