#include <bits/stdc++.h>
using namespace std;
#define REP(i,n) for(int i=0;i<(int)(n);i++)
int main(){
int x,y;
cin>>x>>y;
REP(i,101){
REP(j,101){
if ((i+j!=0)&&(2*i+4*j==y)&&(i+j==x)){
cout<<"Yes";
return 0;
}
}
}
cout<<"No"<<endl;
}
