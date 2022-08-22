#include <bits/stdc++.h>
using namespace std;
int main(){
int X,Y,x,y;
cin >> X >> Y;
y = (Y-2*X)/2;
x = X - y;
if (y%2==0 && x>=0 && y>=0 && x+y>0)
cout << "Yes" << endl;
else
cout << "No" << endl;
return 0;
}
