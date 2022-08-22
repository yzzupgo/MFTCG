#include<iostream>
#include<vector>
#include<numeric>
#include<cstdlib>
#include<cmath>
#include<algorithm>
#include<iterator>
using namespace std;
#define rep(i,n) for(int i = 0; i < n; i++)
int main(){
int n, l;
cin >> n >> l;
vector<int> a(n);
rep(i, n) a.at(i) = l + i;
if(l >= 0) a.erase(a.begin());
if(l < 0){
if(n < abs(l)) a.pop_back();
}
long long ans = accumulate(a.begin(), a.end(), 0);
cout << ans << endl;
}
