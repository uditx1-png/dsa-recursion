// using three arguments
#include<iostream>
using namespace std;
void print(int arr[],int index,int n){
    if(index==n) 
         return ;
    // printing array as same as entered.
    // cout<<arr[index]<<" ";
    // print(arr,index+1,n);
    // if printing array as reveresed as entered.
    print(arr,index+1,n);
    cout<<arr[index]<<" ";
}
    

int main(){
    int n,arr[100];
    cout<<"enter the number :";
    cin>>n;
    cout<<"enter the array :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    print(arr,0,n);
    return 0;
}




  
// uisng two arguments only .


// #include<iostream>
// using namespace std;
// void print(int arr[],int index){
//     if(index<0) 
//          return ;
//     // printing array as same as entered.
//     cout<<arr[index]<<" ";
//     print(arr,index-1);
//     // if printing array as reveresed as entered.
//     // print(arr,index-1);
//     // cout<<arr[index]<<" ";
// }

// int main(){
//     int n,arr[100];
//     cout<<"enter the number :";
//     cin>>n;
//     cout<<"enter the array :";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     print(arr,n-1);
//     return 0;
// }