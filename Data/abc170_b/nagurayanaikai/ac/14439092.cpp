#include <bits/stdc++.h>
using namespace std;
int main() {
double X,Y;
cin >> X >> Y;
double a=(Y-2*X)/2, b=X-a;
if (ceil(a)==floor(a)&&
ceil(b)==floor(b)&&
a <= X &&
b <= X&&
a>=0&&
b>=0){
cout << "Yes" << endl;
}
else{
cout << "No" << endl;
}
}
