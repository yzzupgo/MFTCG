#include <bits/stdc++.h>
using namespace std;
#define REP(i,n) for(int i=0;i<(int)(n);i++)
int main(){
int x,y;
cin>>x>>y;
cout<<((y<=4*x)&&(((y-2*x)%2==0))?"Yes":"No")<<endl;
}
