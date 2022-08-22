#include<bits/stdc++.h>
#define int long long
#define pii pair<int,int>
#define F first
#define S second
using namespace std;
string s, s2;
main() {
int x;
cin >> x;
x *= 1.08;
if(x > 206) {
cout << ":(";
} else if(x == 206) {
cout << "so-so";
} else {
cout << "Yay!";
}
}
