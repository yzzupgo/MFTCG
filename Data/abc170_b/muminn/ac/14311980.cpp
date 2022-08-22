#include <bits/stdc++.h>
using namespace std;
int main(){
int x,y; cin>>x>>y;
for(int i=0;i<=50;i++){
if(4*x==y+2*i) { cout<<"Yes"<<endl; return 0;}
}
cout<<"No"<<endl;
}
