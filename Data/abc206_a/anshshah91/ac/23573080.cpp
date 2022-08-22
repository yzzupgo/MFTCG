#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
ll n;
cin >> n;
if(floor(1.08 * n) < 206) {
cout << "Yay!";
} else if(floor(1.08 * n) > 206) {
cout << ":(";
} else {
cout << "so-so";
}
return 0;
}
