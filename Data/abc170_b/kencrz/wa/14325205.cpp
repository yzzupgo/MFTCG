#include<bits/stdc++.h>
using namespace std;
int main()
{
double X, Y;
cin >> X;
cin >> Y;
double a = 2 * X - Y / 2;
double b = Y / 2 - X;
if ( a < 0 || b < 0 ) {
cout << "No" << endl;
} else {
cout << "Yes" << endl;
}
return 0;
}
