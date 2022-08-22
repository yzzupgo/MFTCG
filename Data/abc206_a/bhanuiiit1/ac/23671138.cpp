#include<bits/stdc++.h>
using namespace std;
int main() {
int a;
cin >> a;
a = a * 1.08;
a = floor(a);
string str = a < 206 ? "Yay!" : a == 206 ? "so-so" : ":(";
cout << str << "\n";
return 0;
}
