#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
#define ll long long int
int main(){
ll x,y;
cin>>x>>y;
if(y>=2*x && y<=4*x&&y%2==0){
cout<<"Yes";
}
else{
cout<<"No";
}
}
