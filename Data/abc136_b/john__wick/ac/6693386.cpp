#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> pii;
typedef long long ll;
#define pb push_back
#define fastIO ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define endl '\n'
#define deb(x) cout << #x << " "<< x << endl;
#define fo(i,n) for(int i=0; i<n; i++)
#define Fo(i,k,n) for(int i=k; i<n; i++)
struct greaterr
{
template<class T>
bool operator()(T const &a, T const &b) const { return a > b; }
};
vector<bool> sieve(1000007,true);
void help(){
sieve[0] = false;
sieve[1] = false;
for(int i=2;i*i<=1000000;++i){
if(sieve[i]){
for(int j=i*i;j<=1000000;j+=i)
sieve[j] = false;
}
}
}
int main() {
fastIO
int n;
cin>>n;
if(n<=9)
cout<<n;
else if(n>9&&n<=99)
cout<<"9";
else if(n>=100&&n<=999)
cout<<(9+n-100+1);
else if(n>999&&n<9999)
cout<<(9+999-100+1);
else if(n>=10000&&n<=99999)
cout<<(9+999-100+1+n-10000+1);
else
cout<<(9+999-100+1+99999-10000+1);
return 0 ;
}
