#include <bits/stdc++.h>
using namespace std;
int main()
{
long long x,y;
cin >> x >> y;
if (x*4 >= y && x*2 <= y && y%2==0) {
cout << "Yes";
} else {
cout << "No";
}
return 0;
}
