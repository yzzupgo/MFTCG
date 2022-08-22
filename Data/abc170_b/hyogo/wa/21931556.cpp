#include <bits/stdc++.h>
using namespace std;
int main()
{
long long x, y;
cin >> x >> y;
for (int a = 0; a < x;a++){
for (int b = 0; b < x;b++){
if(a+b==x&&4*a+2*b==y){
cout << "Yes";
return 0;
}
}
}
cout << "No";
return 0;
}
