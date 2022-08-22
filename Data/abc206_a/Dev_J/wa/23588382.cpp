#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
ll n;
cin >> n;
if(floor(1.08 * n) == 206) {
cout << "so-so";
} else if(floor(1.08 * n) > 206) {
cout << ":(";
} else {
cout << "yay!";
}
}
