#include <bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
using namespace std;
int main() {
fast();
ll n;
cin >> n;
ll ans = n * 1.08;
if(ans < 206) {
cout << "Yay!";
} else if(ans == 206) {
cout << "so-so";
} else {
cout << ":(";
}
}
