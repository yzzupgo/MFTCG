#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 2e5 + 5;
int main(){
int n,m;
cin>>n>>m;
if(((m/4)+(m%4)/2)>n||m%2){
cout<<"No"<<endl;
}else if(n*2>m){
cout<<"No"<<endl;
}else{
cout<<"Yes"<<endl;
}
return 0;
}
