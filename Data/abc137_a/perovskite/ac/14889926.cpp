#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;
const ll mod=1000000007;
const int MAX_N = 1000;
double nCk(int n, int k) {
double res=1.0;
for(int i=0; i<n; i++){
res*=0.5;}
for(int i=0; i<k; i++){
res*=(double)(n-i);
res/=(double)(k-i);
}
return res;}
int main() {
ll h,w,k;
cin>>h>>w;
ll c=-500;
c =max(h+w,c);
c = max(h-w,c);
c = max(h*w , c);
cout << c << endl;
}
