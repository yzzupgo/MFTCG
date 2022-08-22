#include<bits/stdc++.h>
#define rep(i,n) for (int i=0; i<(n); i++)
#define ll long long
using namespace std;
int main(){
int x,y;
int c = 2;
int t = 4;
int ans =0;
cin >> x>>y;
rep(i,c){
rep(j,t){
int total = i*c+j*t;
if(total==y) ans++;
}
}
if(ans>=1){
cout<<"Yes"<<endl;
}else{
cout<<"No"<<endl;
}
return 0;
}
