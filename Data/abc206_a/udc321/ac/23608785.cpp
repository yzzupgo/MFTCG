#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<iomanip>
#include<queue>
#include<map>
#include<set>
#include<fstream>
#include<cstring>
#include<sstream>
#include<stack>
#define ll long long
#define fr(e,r,v) for(ll e=r;e<v;e++)
#define bc(e,r,v) for(ll e=r;e>v;e--)
#define all(n) (n.begin(),n.end())
#define tr(ctn,it) for(typeof(ctn.begin()) it=ctn.begin(); it!=ctn.end();it++)
#define ft first
#define sd second
#define pb push_back
#define lb lower_bound
#define mpr make_pair
#define db double
#define ed '\n'
using namespace std;
ll mod = 1000000007;
ll mod1 = 998244353;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main() {
ll n;
cin >> n;
double i = 1.08 * n;
ll j = floor(i);
if(j < 206) {
cout << "Yay!" << endl;
} else if(j == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
}
