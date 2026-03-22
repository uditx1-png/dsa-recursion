#include<iostream>
using namespace std;
void toh(int n,int sour,int help,int dest,int &count){
    if(n==1){
        cout<<"move disk "<<n<<" from "<<sour<<" to "<<dest<<endl;
        count++;
        return;
    }
    toh(n-1,sour,dest,help,count);
    cout<<"move disk "<< n <<" from "<<sour<<" to "<<dest<<endl;
    count++;
    toh(n-1,help,sour,dest,count);
}
int main(){
    int n,count=0;
    cout<<"enter the number of disk = ";
    cin>>n;
    toh(n,1,2,3,count);
    cout<<"Total Moves = "<<count<<endl ;
}