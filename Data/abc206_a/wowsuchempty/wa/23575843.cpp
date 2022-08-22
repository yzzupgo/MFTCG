#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define nl cout<<endl
#define pii pair<ll,ll>
#define vi vector<ll>
#define vii vector<pii>
#define mi map<ll,ll>
#define all(a) (a).begin(),(a).end()
#define pb push_back
#define ff first
#define ss second
#define hell 1000000007
#define test4(x,y,z,a) cout<<"x is "<<x<<"		y is "<<y<<"		z is "<<z<<"		a is "<<a<<endl;
#define test3(x,y,z) cout<<"x is "<<x<<"		y is "<<y<<"		z is "<<z<<endl;
#define test2(x,y) cout<<"x is "<<x<<"		y is "<<y<<endl;
#define test1(x) cout<<"x is "<<x<<endl;
#define N 300009
int main() {
int tc;
cin >> tc;
if(floor(1.08 * tc) < 206) {
cout << "Yay!";
} else if(floor(1.08 * tc) == 206) {
cout << "so-so";
} else {
cout << ": (";
}
return 0;
}
