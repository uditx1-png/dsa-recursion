#include<iostream>
#include<vector>
using namespace std;
void permut(vector<int>&arr,vector<vector<int>>&ans,int index){
    if(index==arr.size()){
        ans.push_back(arr);
        return;
    }

    vector<bool>use(21,0);
    for(int i=index;i<arr.size();i++){
        if(use[arr[i]+10]==0){
            swap(arr[i],arr[index]);
            permut(arr,ans,index+1);
            swap(arr[i],arr[index]);
            use[arr[i]+10]=1;
        }
    }
}
int main(){
    int n,i;
    vector<vector<int>>ans;
    cout<<"enter the number of element in array = ";
    cin>>n;
    vector<int>arr(n);
    cout<<"enter the number of element in array = ";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    permut(arr,ans,0);
    for(i=0;i<ans.size();i++){
        cout<<"{ ";
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<"}";
        cout<<endl;
    }
}
