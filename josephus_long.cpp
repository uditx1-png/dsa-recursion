#include<iostream>
#include<vector>
using namespace std;
int winner(vector<bool>&person,int n,int index,int person_left,int k){
    if(person_left==1){
        for(int i=0;i<n;i++){
            if(person[i]==0){
                return i;
            }
        }
        return -1;
    }
    // find  the person kill
    int kill=k-1;

    while(kill--){
        index=(index+1)%n;
        while(person[index]==1){
            index=(index+1)%n;     // skip the killed person
        }
    }
    person[index]= 1;
    // next alive person
    while(person[index]==1){
            index=(index+1)%n;     
        }
        return winner(person,n,index,person_left-1,k);
}
int main(){
    int n,k;
    cout<<"enter the number of element in array = ";
    cin>>n;
    cout<<"enter the step to cover = ";
    cin>>k;
    vector<bool>person(n,0);
    int ans= winner(person,n,0,n,k)+1;
    cout<<ans<<endl;
    return 0;
}