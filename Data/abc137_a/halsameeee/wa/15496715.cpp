#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
int a,b;
cin >> a >> b;
int plus,minus,mult;
plus = a + b;
minus = a-b;
mult = a * b;
if (plus >= minus && plus >= mult) cout << plus << endl;
if (minus >= plus && minus >= mult) cout << minus << endl;
if (mult >= minus && mult >= plus) cout << mult << endl;
}
