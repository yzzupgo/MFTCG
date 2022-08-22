#include<bits/stdc++.h>
#define endl '\n'
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define mod 1000000007
#define FASTIO ios::sync_with_stdio(0); cin.tie(0);
#define REP(i,a,b) for(int i=a;i<b;i++)
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
int main(){
FASTIO
int x,y,b;
cin>>x>>y;
REP(a,0,x){
b=x-a;
if(2*a+4*b==y){cout<<"Yes";return 0;}
}
cout<<"No";
return 0;
}
