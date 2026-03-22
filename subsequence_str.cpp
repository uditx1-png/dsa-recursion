#include<iostream>
#include<vector>
using namespace std;
void subset(string str,int index,vector<string>&ans,string &temp){
    if(index==str.size()){
        ans.push_back(temp);
        return;
    }
    subset(str,index+1,ans,temp);
    temp.push_back(str[index]);
    subset(str,index+1,ans,temp);
    temp.pop_back();
}
int main(){
    string str="abc";
    int i;
    vector<string>ans;
    string temp="";
    
    subset(str,0,ans,temp);
    for(i=0;i<ans.size();i++){
            cout<<"{"<<ans[i]<<""<<"}";
        }
        cout<<endl;
    
}
