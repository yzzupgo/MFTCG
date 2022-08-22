#include <bits/stdc++.h>
using namespace std;
int main(){
int a,b;
cin>>a>>b;
if(b%2!=0){
cout<<"NO"<<endl;
return 0;
}else{
if(a*4<b||a*2>b){
cout<<"NO"<<endl;
return 0;
}
cout<<"YES"<<endl;
}
}
