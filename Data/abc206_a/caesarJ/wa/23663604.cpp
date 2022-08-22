#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<climits>
#include <algorithm>
#include<cmath>
#define MOD 1000000007
#define ld long double
#define ll long long int
#define ui unsigned int
using namespace std;
int main() {
int n;
cin >> n;
int res = n * 1.08;
cout << res << endl;
if(res < 206) {
cout << "Yay!" << endl;
} else if(res == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
return 0;
}
