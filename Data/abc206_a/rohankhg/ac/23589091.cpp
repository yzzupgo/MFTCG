#include<bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
int n;
cin >> n;
double r;
r = 1.08 * n;
if(r < 206) {
cout << "Yay!";
} else if(r == 206.28) {
cout << "so-so";
} else if(r > 206) {
cout << ":(";
}
}
