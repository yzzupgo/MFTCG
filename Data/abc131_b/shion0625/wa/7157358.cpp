#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<n; i++)
int main(void) {
int n,l;
cin >> n >> l;
vector<int> ap(n);
rep(i,n) {
ap.at(i) = l + i;
}
int i,ans;
ans =abs(ap.at(0));
for( i=1; i<n; i++) {
if( abs(ap.at(i) - 0) < ans ){
ans = abs(ap.at(i)-0);
}
}
int sum =0;
rep(i,n) {
sum += ap.at(i);
}
cout << sum - ans << endl;
return 0;
}
