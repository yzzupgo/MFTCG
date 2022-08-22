#include <bits/stdc++.h>
using namespace std;
int main(){
int n,l; cin >> n >> l;
if(l>0) cout << l*n + (1+n)*n/2 - n -l;
else if(n+l-1<0) cout << l*n + (1+n)*n/2 - n - (l + n - 1);
else cout << l*n + (1+n)*n/2 - n;
}
