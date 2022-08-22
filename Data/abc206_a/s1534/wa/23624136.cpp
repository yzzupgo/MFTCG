#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
#define ALL(x) (x).begin(), (x).end()
int main() {
double n;
cin >> n;
double ans;
if(floor(1.08 * n) < 206) {
cout << "yay!";
} else if(floor(1.08 * n) == 206) {
cout << "so-so";
} else {
cout << ":(";
}
}
