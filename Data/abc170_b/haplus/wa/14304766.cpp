#include<bits/stdc++.h>
#define rep(i,n) for (int i=0; i<(n); i++)
#define ll long long
using namespace std;
int main(){
int x,y;
int c = 2;
int t = 4;
cin >> x>>y;
rep(i,c){
rep(j,t){
int total = i*c+j*t;
if(total==y){
cout<<"Yes"<<endl;
return 0;
}
}
}
cout<<"No"<<endl;
return 0;
}
