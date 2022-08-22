#include<bits/stdc++.h>
#define ll long long
#define MOD 1000000007
#define speed ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;
int main(){
speed;
ll X,Y;
cin>>X>>Y;
ll a=2*X-Y/2;
ll b=(Y-2*X)/2;
if(a>=0&&b>=0&&Y%2==0) cout<<"Yes";
else cout<<"No";
}
