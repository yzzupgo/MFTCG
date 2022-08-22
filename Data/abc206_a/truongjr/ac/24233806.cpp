#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007
int main() {
int x;
cin >> x;
x = x * 1.08;
if(x > 206) {
cout << ":(";
} else if(x == 206) {
cout << "so-so";
} else {
cout << "Yay!";
}
return 0;
}
