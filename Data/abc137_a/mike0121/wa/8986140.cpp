#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;
int main() {
int a, b,c,d;
cin >> a >> b;
int sum,minus,multi;
sum = a+b;
minus = a-b;
multi = a*b;
c = max(sum,minus);
d = max(sum,multi);
cout << d << endl;
}
