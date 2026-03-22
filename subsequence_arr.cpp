#include<iostream>
#include<vector>
using namespace std;
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
    vector<vector<int>>ans;
    vector<int>temp;
    cout<<"enter the number of element in array = ";
    cin>>n;
    cout<<"enter the number in array = ";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    subseq(arr,0,n,ans,temp);
    for(i=0;i<ans.size();i++){
        for(j=0;j<ans[i].size();j++){
            cout<<"{"<<ans[i][j]<<" "<<"}";
        }
        cout<<endl;
    }
}
