#include<bits/stdc++.h>
using namespace std;
int main(){
long long a,b;
cin>>a>>b;
if(a+b>a-b&&a+b>a*b){
cout<<a+b<<endl;
}else if(a-b>a+b&&a-b>a*b){
cout<<a-b<<endl;
}else if(a*b>a-b&&a*b>a+b){
cout<<a*b<<endl;
}else if(a+b ==a-b== a*b){
cout<<a+b<<endl;
}
}
