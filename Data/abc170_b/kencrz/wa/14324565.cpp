#include<bits/stdc++.h>
using namespace std;
int main()
{
int X, Y;
cin >> X;
cin >> Y;
int a = 2 * X - Y / 2;
int b = Y / 2 - X;
if ( a < 0 || b < 0 ) {
cout << "No" << endl;
} else {
cout << "Yes" << endl;
}
return 0;
}
