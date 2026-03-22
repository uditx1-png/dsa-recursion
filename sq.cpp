#include<iostream>
using namespace std;
int sq(int n){
    if(n<0)
    return 0 ;
    return n*n+sq(n-1);
}
int main(){
    int n;
    cout<<"enter the number :";
    cin>>n;
    cout<<sq(n)<<endl;
}1