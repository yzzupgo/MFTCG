#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 2e5 + 5;
int main(){
int a,b;
cin>>a>>b;
if(a>=13){
cout<<b<<endl;
}else if(a>5){
cout<<b/2<<endl;
}else{
cout<<0<<endl;
}
return 0;
}
