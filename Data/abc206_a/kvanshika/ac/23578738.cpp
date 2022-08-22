#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
ll n;
cin >> n;
ll x = floor(n * 1.08);
if(x < 206) {
cout << "Yay!" << endl;
} else if(x == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
return 0;
}
