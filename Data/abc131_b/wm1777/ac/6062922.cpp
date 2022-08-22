#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
typedef long long ll;
using namespace std;
int main () {
int N, L;
cin >> N>>L;
int ans = 0;
for (int i=0;i<N;i++) {
ans+=L+i;
}
if (L >=0) ans -= L;
else if (L < 0 && L+N <=0) ans -= N+L-1;
cout <<ans;
}
