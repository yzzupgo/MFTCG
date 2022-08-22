#include <bits/stdc++.h>
using namespace std;
int main()
{
int a,b;
cin >> a >>b;
int cond = b-((b/2)*2);
if (b>=2*a && b<=4*a && b>=0 && a>=0 && cond==0)
cout << "Yes" << endl;
else
cout << "No" << endl;
return 0;
}
