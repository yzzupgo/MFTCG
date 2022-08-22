#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
ll n;
cin >> n;
if((ll)(n * 1.08) + 1 < 206) {
cout << "Yay!";
} else if((ll)(n * 1.08) + 1 > 206) {
cout << ":(";
} else {
cout << "so-so";
}
}
