#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
int main() {
ll n;
cin >> n;
const int a = 206;
cout << n * 1.08 << endl;
if(floor(n * 1.08) > a) {
cout << ":(" << endl;
} else if(floor(n * 1.08) < a) {
cout << "Yay!" << endl;
} else if(floor(n * 1.08) == a) {
cout << "so-so" << endl;
}
}
