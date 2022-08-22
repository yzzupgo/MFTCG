#include <bits/stdc++.h>
using namespace std;
int main()
{
int x,y;
cin >> x >> y;
if (x*4 >= y) {
if ((y%4== 0) || ((y%4)%2 == 0)) {
cout << "Yes";
} else {
cout << "No";
}
} else {
cout << "No";
}
return 0;
}
