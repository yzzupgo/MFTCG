#define rep(i,n) for (int i = 0; i < (int)(n); i++)
#define srep(i,s,n) for (int i = (s); i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;
using pii = pair<int, int>;
using vi = vector<int>;
using vvi = vector<vi>;
int main() {
int n, l;
cin >> n >> l;
vector<int> aji(n);
int totalplan = 0;
rep(i, n){
aji[i] = i + l;
totalplan += aji[i];
}
int ans = INT_MAX, ansa = 0;
rep(i, n){
int current = 0;
rep(j, i){
current += aji[j];
}
srep(j, i + 1, n){
current += aji[j];
}
int pre = abs(current - totalplan);
cout << pre << " " << current << endl;
if(pre <= ans){
ans = pre;
ansa = current;
}
}
cout << ansa << endl;
}
