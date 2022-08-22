#include<bits/stdc++.h>
#define REP(i,n) for(int i=0;i<n;i++)
#define RREP(i,n) for(int i=n;i>=0;i--)
#define FOR(i,m,n) for(int i=m;i<n;i++)
#define ALL(v) v.begin(), v.end()
#define RALL(v) v.rbegin(), v.rend()
using namespace std;
typedef long long ll;
int main(void){
int x,y;
cin >> x >> y;
bool f=false;
for(int i=0;i<=x;i++){
for(int j=0;i+j==x;j++){
if(i*2+j*4==y)
f=true;
}
}
if(f)
printf("Yes\n");
else
{
printf("No\n");
}
return 0;
}
