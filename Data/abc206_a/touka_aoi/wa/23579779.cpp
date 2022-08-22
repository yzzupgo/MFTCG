#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
int main() {
int n;
cin >> n;
int x = n * 1.08;
if(x < 206) {
cout << "Yey!";
} else if(x == 206) {
cout << "so-so";
} else {
cout << ":(";
}
cout << endl;
}
