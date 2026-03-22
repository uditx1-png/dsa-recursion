 #include<iostream>
 using namespace std;
 bool chepali(string str,int start,int end){
    if(start>=end)
    return 1;
    // if not match
    if(str[start]!=str[end])
    return 0;
    // if matched
    else{
     return chepali(str,start+1,end-1);
 }
}
 int main(){
    string str="namon";
    cout<<chepali(str,0,4)<<endl;
 }