#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<bool> vb;
typedef vector<string> vs;
typedef vector<ll> vl;
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define in insert
#define FOR(i,a,b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define speed ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int INF = 1e9 + 5;
int main(){
int n;
cin >> n;
if(n>9 && n<100){
cout << 9;
}
else if(n>0 && n<10){
cout << n;
}
else if(n>99 && n<1000){
cout << (n-99+9);
}
else if(n>9999 && n<=100000){
cout << (n-9091);
}
}
