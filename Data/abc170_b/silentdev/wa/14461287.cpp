#include <bits/stdc++.h>
using namespace std;
int main(){
int X,Y,x,y;
cin >> X >> Y;
y = Y-2*X;
x = X - 2*y;
if ((Y-2*X)%2==0 && x*y >0 )
cout << "Yes" << endl;
else
cout << "No";
return 0;
}
