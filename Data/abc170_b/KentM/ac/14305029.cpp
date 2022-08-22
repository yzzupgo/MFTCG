#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b;
cin>>a>>b;
if(a*2>b||b>a*4){
cout<<"No"<<endl;
return 0;
}
if(b%2==0){
cout<<"Yes"<<endl;
}
else{
cout<<"No"<<endl;
}
}
