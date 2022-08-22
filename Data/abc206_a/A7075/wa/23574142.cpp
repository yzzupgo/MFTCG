#include <bits/stdc++.h>
using namespace std;
#define rep(i,l,r) for(int i=(l);i<(r);i++)
typedef long long ll;
int main() {
int n;
cin >> n;
int r = ceil(n * 1.08);
if(r < 206) {
cout << "Yay!" << endl;
} else if(r == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
}
