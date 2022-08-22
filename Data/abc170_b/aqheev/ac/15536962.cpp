#include "bits/stdc++.h"
using namespace std;
typedef long long int ll;
int main(){
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int x, y;
cin >> x >> y;
if (y & 1){
cout << "No\n";
} else {
y /= 2;
if (2*x >= y && x <= y) cout << "Yes\n";
else cout << "No\n";
}
}
