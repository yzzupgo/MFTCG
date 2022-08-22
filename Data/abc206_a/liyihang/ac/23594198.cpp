#include<bits/stdc++.h>
using namespace std;
int main() {
int n, m;
cin >> n;
m = 1.08 * n;
if(m > 206) {
cout << ":(";
} else if(m / 1 == 206) {
cout << "so-so";
} else {
cout << "Yay!";
}
}
