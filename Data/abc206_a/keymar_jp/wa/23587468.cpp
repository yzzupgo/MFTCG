#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int, int>;
int main() {
int n;
cin >> n;
int m = n * 1.08;
cout << m;
if(m < 206) {
cout << "Yay!";
} else if(m > 206) {
cout << ":(";
} else {
cout << "so-so";
}
return 0;
}
