#include<iostream>
#include<vector>
using namespace std;
int winner(int n,int k){
    if(n==1){
        return 0;
    }
    return ( winner(n-1,k)+k)%n;
}
int main(){
    int n,k;
    cout<<"enter the number of element in array = ";
    cin>>n;
    cout<<"enter the step to cover = ";
    cin>>k;
    vector<bool>person(n,0);
    int ans= winner(n,k)+1;
    cout<<ans<<endl;
    return 0;
}