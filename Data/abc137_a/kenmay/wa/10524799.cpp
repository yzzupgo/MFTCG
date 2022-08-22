#include <bits/stdc++.h>
using namespace std;
#define REP(i,n) for(int i=0; i<(n); i++)
#define REP2(i,x,n) for(int i=x; i<(n); i++)
int main()
{
int a,b;
cin >> a>>b;
int maxval = 0;
maxval = max(maxval, a+b);
maxval = max(maxval, a-b);
maxval = max(maxval, a*b);
cout << maxval << endl;
return 0;
}
