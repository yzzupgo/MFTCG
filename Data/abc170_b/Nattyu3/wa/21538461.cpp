#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
#define ll long long
#define rep(i,n) for(int i=0;i<(int)n;i++)
#define all(x) (x).begin(),(x).end()
#define dcml(x) cout<<fixed<<setprecision(x)
using namespace std;
void yes(){puts("Yes");} void no(){puts("No");}
void YES(){puts("YES");} void NO(){puts("NO");}
void chmin(int &a,int b){a>b?a=b:0;}
void chmax(int &a,int b){a<b?a=b:0;}
const int inf=INT_MAX;
const ll infl=LONG_LONG_MAX;
int main(){
int x,y;
cin>>x>>y;
if(y%2!=0) no();
else{
if(x*4>=y) yes();
else no();
}
}
