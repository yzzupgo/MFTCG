#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
int main() {
int n;
cin >> n;
n = n * 1.08;
if(206 == n) {
cout << "so-so";
} else if(206 < n) {
cout << ":(";
} else {
cout << "Yay!";
}
cout << endl;
}
