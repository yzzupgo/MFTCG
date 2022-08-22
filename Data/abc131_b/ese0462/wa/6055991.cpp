#include <bits/stdc++.h>
using namespace std;
int main(){
int n, l, i, a = 999999;
cin >> n >> l;
for(i=0; i<n; i++){
a = min(a, abs(l+1));
}
cout << n*(n+1)/2 - n*(n-1)/2 - a;
return 0;
}
