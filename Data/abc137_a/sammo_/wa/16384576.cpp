#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
int a, b, c;
cin >> a;
cout << max(a*b,max(a+b,a-b)) << endl;
return 0;
}
