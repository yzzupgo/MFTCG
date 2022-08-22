#include <bits/stdc++.h>
#include <cmath>
using ll = long long;
const ll INF = 1LL << 60;
using namespace std;
int main() {
int n;
cin >> n;
int x = n * 1.08;
if(x < 206) {
cout << "Yay!" << endl;
} else if(x == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
return 0;
}
