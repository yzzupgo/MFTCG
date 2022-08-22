#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const int dx[] = { -1 , -1 , -1 , 0 , 0 , 0 , 1 , 1 , 1 };
const int dy[] = { -1 , 0 , 1 , -1 , 0 , 1 , -1 , 0 , 1 };
#define N 8010000
#define TC int t;cin>>t;for(int T=1;T<=t;T++)
#define mod 1000000007
#define PI acos(-1)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
void AIA() { ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); }
int main()
{
AIA();
ll a , b;
cin>>a>>b;
int n = a ,m = a*4;
if(m == b){
cout<<"Yes";
return 0;
}
while(n--){
m-=4;
m+=2;
if(m==b){
cout<<"Yes";
return 0;
}
}
cout<<"No";
return 0;
}
