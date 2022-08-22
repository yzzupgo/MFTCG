#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pf Push_front
int main() {
ll int n;
cin >> n;
ll int a = floor(1.08 * n);
if(a < 206) {
cout << "Yay!";
} else if(a == 206) {
cout << "so-so";
} else {
cout << ":(";
}
return 0;
}
