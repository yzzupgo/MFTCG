#include <bits/stdc++.h>
#include <time.h>
#include <assert.h>
using namespace std;
#define For(i,x,n) for(long long i=x;i<n;i++)
#define rFor(i,x,n) for(long long i=x;i>=n;i--)
#define itFor(it,st) for(auto it=st.begin() ; it!=st.end() ; it++)
#define MOD 1000000007
#define PI 3.141592653589793
#define INF 999999999999999999
#define N 1000005
#define ll long long
#define ld long double
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define sp " "
#define cont continue
#define brk break
#define deb1(x) cout<<#x<<": "<<x<<endl
#define deb2(x,y) cout<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define deb3(x,y,z) cout<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
#define deb4(a,b,c,d) cout<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
#define deb5(a,b,c,d,e) cout<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
#define deb6(a,b,c,d,e,f) cout<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl
using namespace std;
int main()
{
cin.tie(0);
cout.tie(0);
ios::sync_with_stdio(0);
cout<<fixed;
cout<<setprecision(3);
srand(time(NULL));
ll tt;
tt=1;
while(tt--){
ll x,y;
For(i,0,x+1){
ll c1 = i*2;
ll c2 = (x-i)*4;
if((c1+c2)==y){
cout<<"YES";
return 0;
}
}
cout<<"NO";
}
return 0;
}
