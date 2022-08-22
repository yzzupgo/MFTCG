#include <iostream>
#include <set>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
using namespace std;
int main(void){
int n,l,i,su=0;
vector<int> taste;
cin >> n >> l;
taste.resize(n);
for(i=0;i<n;i++) {
taste[i] = l+i;
su += l+i;
}
if(taste[0] <= 0 && 0 <= taste[n-1]) cout << su << endl;
else {
int L = abs(taste[0]);
int R = abs(taste[n-1]);
if(L < R) cout << su-taste[0] << endl;
else cout << su-taste[n-1] << endl;
}
}
