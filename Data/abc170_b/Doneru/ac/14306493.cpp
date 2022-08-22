#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<long long> vll;
typedef vector<vector<long long>> vvll;
typedef pair<int,int> pii;
typedef pair<long long, int> pli;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
ll mod = 1000000007;
ll gcd(ll a, ll b){
if (a%b == 0)return(b);
else return(gcd(b, a%b));
}
int main(){
cin.tie(0);
ios::sync_with_stdio(false);
int x,y;
cin >> x >> y;
if(y % 2 == 1){
cout << "No" << endl;
}else{
if(x*4 >= y && x*2 <= y){
cout << "Yes" << endl;
}else{
cout << "No" << endl;
}
}
}
