// // min element.
// #include<iostream>
// using namespace std;
// int minele(int arr[],int index,int n){
//     if(index==n-1) 
//          return arr[index] ;
//     return min(arr[index], minele(arr,index+1,n));
   
// }

// int main(){
//     int n,arr[100];
//     cout<<"enter the number :";
//     cin>>n;
//     cout<<"enter the array :";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<minele(arr,0,n);
//     return 0;
// }



// // max element find. 
// #include<iostream>
// using namespace std;
// int maxele(int arr[],int index,int n){
//     if(index==n-1) 
//          return arr[index] ;
//     return max(arr[index], maxele(arr,index+1,n));
   
// }

// int main(){
//     int n,arr[100];
//     cout<<"enter the number :";
//     cin>>n;
//     cout<<"enter the array :";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<maxele(arr,0,n);
//     return 0;
// }