#include <bits/stdc++.h>
using namespace std;
int main()
{
int a, b;
cin >> a >> b;
int sum = a+b;
int sub = a-b;
int mul = a*b;
if(sum>sub && sum>mul) cout << sum;
else if(sub>sum && sub>mul) cout << sub;
else if(mul>sum && mul>sub) cout << mul;
return 0;
}
