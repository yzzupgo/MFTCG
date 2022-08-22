#include <bits/stdc++.h>
using namespace std;
int main()
{
long long x, y;
cin >>x>>y;
bool f = 0;
for (int i = 1; i <= x; ++i) {
if (i * 2 + (x - i) * 4 == y) {
f = 1;
}
}
if (f) {
cout <<"Yes"<<endl;
}
else {
cout <<"No"<<endl;
}
}
