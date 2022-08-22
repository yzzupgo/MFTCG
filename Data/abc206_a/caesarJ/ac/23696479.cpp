#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<climits>
#include<algorithm>
#include<cmath>
#define MOD 1000000007
#define ld long double
#define ll long long int
#define ui unsigned int
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
int n;
cin >> n;
int res = floor(n * 1.08);
if(res < 206) {
cout << "Yay!";
} else if(res == 206) {
cout << "so-so";
} else {
cout << ":(";
}
return 0;
}
