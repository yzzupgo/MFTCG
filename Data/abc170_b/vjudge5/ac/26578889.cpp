#include<bits/stdc++.h>
using namespace std;
void fastIO(){ ios_base::sync_with_stdio(false); cin.tie(NULL); }
void swap(int &x, int &y) {int temp = x; x = y; y = temp;}
int min3(int a, int b, int c) {return (min(a, min(b,c)));}
int max3(int a, int b, int c) {return (max(a, max(b,c)));}
long long int mod(long long int a){unsigned int x=1000000007; if(a<0) return mod(x+a); return a%x;}
long long int gcd(long long int a, long long int b){if(a==b) return a; if(a>b) return gcd(a-b, b); return gcd(a, b-a);}
bool checkPrime(long long int a){ for(int i=2; i<=sqrt(a); i++){ if(a%i==0) return false;}return true;}
bool checkSq(long long int a){ long long int temp=sqrt(a); if(a==temp*temp) return true; return false;}
int modularExp(long long x, unsigned int y){
unsigned int p=1000000007;int res=1;x=x%p;
if (x==0) return 0;
while(y>0){ if(y&1) res=(res*x)%p; y/=2; x=(x*x)%p;}
return res;}
bool checkPower2(int x){ if(x&(x-1ll)) return false; return true; }
bool sortVecbySecondAs(const pair<int,int>a, const pair<int,int>b){ return a.second<b.second; }
bool sortVecbySecondDes(const pair<int,int>a, const pair<int,int>b){ return a.second>b.second; }
#define INF 1e18
#define pb push_back
#define pf push_front
#define ppb pop_back
#define ppf pop_front
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rep(i,a,b) for(int i=(a);i<=(b);++i)
#define pnl printf("\n")
typedef long long ll;
int main(){
fastIO();
int x,y, t ,c;
cin>>x>>y;
t = (y-2*x)/2; c =x-t;
if(2*c+4*t == y && t+c==x && t>=0 && c>=0) cout<<"Yes"<<endl;
else cout<<"No"<<endl;
return 0;
}
