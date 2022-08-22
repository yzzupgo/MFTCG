#include <bits/stdc++.h>
using namespace std;
int main(){
int X,Y,x,y;
cin >> X >> Y;
y = (Y-2*X)/2;
x = X - y;
if (y%2==0 && Y>=2*X && Y<=4*X)
cout << "Yes" << endl;
else
cout << "No" << endl;
return 0;
}
