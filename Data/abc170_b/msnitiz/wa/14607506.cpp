#include <bits/stdc++.h>
using namespace std;
int main()
{int x, y;
cin >> x >> y;
if((4*x-y)%2 == 0 && (2*x-y)%2 == 0 && y <= 4*x){
cout << "Yes";}
else cout << "No";
return 0;
}
