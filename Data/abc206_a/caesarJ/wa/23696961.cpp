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
ll n;
cin >> n;
int i = 1, money = 0;
while(1) {
money += i;
if(money >= n) {
cout << i;
break;
}
i++;
}
return 0;
}
