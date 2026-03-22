 #include<iostream>
 using namespace std;
void cas(string &str,int index,int n){
    if(index==n)
    return ;
    if(str[index]>='a'&&str[index]<='z')
        str[index]=str[index]-32;
    return cas(str,index+1,n);
 }
 int main(){
    string str="apple";
    cas(str,0,5);
    cout<<str;
 }