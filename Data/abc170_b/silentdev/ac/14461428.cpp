#include <bits/stdc++.h>
using namespace std;
int main(){
int X,Y;
cin >> X >> Y;
if (Y%2==0 && Y>=2*X && Y<=4*X)
cout << "Yes" << endl;
else
cout << "No" << endl;
return 0;
}
