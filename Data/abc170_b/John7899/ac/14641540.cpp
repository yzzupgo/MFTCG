#include <bits/stdc++.h>
using namespace std;
int main(void)
{
int X, Y;
cin >> X >> Y;
int A = 4 * X - Y;
int B = Y - 2 * X;
if(A < 0 || B < 0 || (Y % 2 == 1)){
cout << "No" << endl;
}
else{
cout << "Yes" << endl;
}
return 0;
}
