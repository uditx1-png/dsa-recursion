#include<iostream>
using namespace std;

int main(){
    int m,n,i,j,k,count=0;
    int arr[100][100];

    cout<<"Enter number of rows = ";
    cin>>m;

    cout<<"Enter number of columns = ";
    cin>>n;

    cout<<"Enter matrix elements:\n";

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(arr[i][j] == 1){

                int flag = 1;

                // check row
                for(k=0;k<n;k++){
                    if(k!=j && arr[i][k]==1){
                        flag = 0;
                        break;
                    }
                }

                // check column
                for(k=0;k<m;k++){
                    if(k!=i && arr[k][j]==1){
                        flag = 0;
                        break;
                    }
                }

                if(flag==1){
                    count++;
                }
            }
        }
    }
    cout<<count;
}