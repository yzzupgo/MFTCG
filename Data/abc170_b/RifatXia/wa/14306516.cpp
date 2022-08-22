#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(void)
{
int x,y;
cin >> x >> y;
if(y > (4*x) || y < (2*x))
cout << "No\n";
else
cout << "Yes\n";
return 0;
}
