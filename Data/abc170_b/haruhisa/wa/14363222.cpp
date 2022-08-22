#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<set>
using namespace std;
#define rep(i,a,n) for (int i = a; i < n; i++)
typedef long long ll;
bool find(vector<int> p,int u){
rep(i,0,p.size()){
if(p[i]==u) return true;
}
return false;
}
int main(){
int x,y;
cin>>x>>y;
int a,b;
b=x-a;
rep(i,0,x+1){
if(2*b+4*a==y){
cout<<"Yes"<<endl;
return 0;
}
}
cout<<"No"<<endl;
}
