#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vl vector<long long>
#define all(v) begin(v),end(v)
#define vs vector<string>
#define ll long long
#define all(v) begin(v),end(v)
#define vs vector<string>
#define qi queue<int>
#define pqi priority_queue<int>
#define sti stack<int>
#define si set<int>
#define pii pair<long,long>
#define mpi map<int,int>
#define mps map<string,int>
#define mpc map<char,int>
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define pi pair<int,int>
#define vpi vector<pair<ll,ll> >
#define np next_permutation
#define mod 1000000007
#define INF 1e9
#define kom -10000000
#define fst ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL)
const int mxn = 1e7 + 5;
ll cc_size;
int mark[mxn];
set<int> primes;
void sieve() {
for(int i = 4; i < mxn; i += 2) {
mark[i] = 1;
}
for(int i = 3; i * i < mxn; i += 2) {
if(mark[i] == 0) {
for(int j = i * i; j < mxn; j += (i * 2)) {
mark[j] = 1;
}
}
}
}
bool is_prime(int x) {
if(x == 1) {
return false;
}
for(int i = 2; i * i <= x; i++) {
if(x % i == 0) {
return false;
}
}
return true;
}
bool cmp1(pii x, pii y) {
if(x.ff != y.ff) {
return x.ff < y.ff;
}
return x.ss > y.ss;
}
int main() {
fst;
double n;
cin >> n;
n *= 1.08;
n = (int)n;
if(n == 206) {
cout << "so-so" << '\n';
} else if(n < 206) {
cout << "Yay!" << '\n';
} else {
cout << ":(" << '\n';
}
return 0;
}
