#include <bits/stdc++.h>
using namespace std;
int main() {
int h,f,turu,kame;
cin >> h >> f;
kame=(f/2)-h;
turu=h-kame;
if ((h == kame + turu) && (f == 2 * turu + 4 * kame)) {
cout << "Yes";
}else
{
cout << "No";
}
}
