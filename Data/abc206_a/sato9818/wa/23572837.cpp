#include <bits/stdc++.h>
#define rep(i,n) for (int i=0;i<(n);i++)
#define rep1(i,n) for (int i=1;i<(n);i++)
using namespace std;
using ll = long long;
using P = pair<int, ll>;
int main() {
int n;
cin >> n;
int price = floor(1.08 * n);
if(price < 206) {
cout << "Yay!" << endl;
} else if(price > 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
return 0;
}
