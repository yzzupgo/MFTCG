#include<bits/stdc++.h>
using namespace std;
#define long long int
int main() {
int n;
cin >> n;
vector<int>v(n, 0);
for(int i = 0; i < n; ++i) {
cin >> v[i];
}
sort(v.begin(), v.end());
vector<int>vr;
vector<int>vn;
int rep = 1;
int temp = v[0];
for(int j = 1; j <= n; ++j) {
if(v[j] == temp) {
rep += 1;
} else {
vn.push_back(temp);
vr.push_back(rep);
rep = 1;
temp = v[j];
}
}
int count = 0 ;
int l = vn.size() - 1;
int r, o;
o = 0;
for(int k = 0; k < l; ++k) {
o += vr[k];
r = v.size() - o;
count += (r * vr[k]);
}
cout << count;
return 0;
}
