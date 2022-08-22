#include<bits/stdc++.h>
using namespace std;
int main() {
double n;
cin >> n;
int ans = n * 1.08;
cout << (ans < 206 ? "Yay!" : (ans == 206 ? "so-so" : ":("));
}
