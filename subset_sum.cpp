#include<iostream>
#include<vector>
using namespace std;
void print(int arr[],int index,int n,int sum,vector<int>&anss){
    if(index==n){
        anss.push_back(sum);
        return ;
    }
    print(arr,index+1,n,sum,anss);
    print(arr,index+1,n,sum+ arr[index],anss);
}
void subseq(int arr[],int index,int n,vector<vector<int>>&ans,vector<int>&temp){
    if(index==n){
        ans.push_back(temp);
        return;
    }
    subseq(arr,index+1,n,ans,temp);
    temp.push_back(arr[index]);
    subseq(arr,index+1,n,ans,temp);
    temp.pop_back();
}
int main(){
    int n,arr[100],i,j;
    vector<int>anss;
    vector<vector<int>>ans;
    vector<int>temp;
    cout<<"enter the number of element in array = ";
    cin>>n;
    cout<<"enter the number of element in array = ";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    print(arr,0,n,0,anss);
    subseq(arr,0,n,ans,temp);
    for(i=0;i<anss.size();i++){
        cout<<anss[i]<<" ---  ";
        cout<<"{ ";
        for(j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<"}";
        cout<<endl;
    }
}