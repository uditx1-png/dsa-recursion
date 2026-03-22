// print 1 to n number .

#include<iostream>
using namespace std;
void print(int n){
    if(n<1)
    return;
    print(n-1);
    cout<<n<<" ";
}
int main(){
    int n;
    cout<<"enter the number :";
    cin>>n;
    print(n);
}