#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<queue>
using namespace std;
#define int long long
#define REP(i,s,e) for((i)=(s);(i)<(e);(i)++)
#define RREP(i,s,e) for((i)=((s)-1);(i)>=(e);(i)--)
#define FOR(i,n) for((i)=(0);(i)<(n);(i)++)
#define RFOR(i,n) for((i)=((n)-1);(i)>=(0);(i)--)
#define MOD 1000000007
#define NMAX 200000
signed main(){
int X,Y;
cin>>X>>Y;
for(int i=0;i<=100;i++){
for(int j=0;j<=100;j++){
int x=i+j;
int y=i*2+j*4;
if(x==X&&y==Y){
cout<<"Yes"<<endl;
return 0;
}
}
}
cout<<"No"<<endl;
return 0;
}
