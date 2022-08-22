#include<bits/stdc++.h>
using namespace std;
string helper(int n) {
long long m = abs(1.08 * n);
if(m > 206) {
return ":(";
} else if(m == 206) {
return "so-so";
} else {
return "Yay!";
}
}
int main() {
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
long long n = 0;
cin >> n;
cout << helper(n) << endl;
return 0;
}
