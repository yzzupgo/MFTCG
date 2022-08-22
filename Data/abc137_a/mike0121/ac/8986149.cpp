#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;
int main() {
int a, b,c,d,e;
cin >> a >> b;
int sum,minus,multi;
sum = a+b;
minus = a-b;
multi = a*b;
c = max(sum,minus);
d = max(c,multi);
cout << d << endl;
}
