#include <bits/stdc++.h>
#define pb push_back
#define ll long long
using namespace std;
int main() {
int n;
cin >> n;
double d = 1.08 * n;
if(d > 206) {
cout << ":(";
} else {
if(d == 206) {
cout << "so-so";
} else {
cout << "Yay!";
}
}
return 0;
}
