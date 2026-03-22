// print n to 1 number.f
#include<iostream>
using namespace std;
void print(int n){
    if(n<1)
    return;
    cout<<n<<" ";
    print(n-1);
}
int main(){
    int n;
    cout<<"enter the number :";
    cin>>n;
    print(n);
}