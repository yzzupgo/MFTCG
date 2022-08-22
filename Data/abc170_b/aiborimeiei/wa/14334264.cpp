#include <cstdio>
#include <cmath>
#include <limits>
#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
#include <cstring>
#include <set>
#include <map>
#include <queue>
#include <stack>
#define rep(i,s,g) for (i = s; i < g; i++)
using namespace std;
using ll = long long;
const int inf = 1000000000;
int main(){
int X, Y;
cin >> X >> Y;
for (int i = 0; i < X; i++)
{
int leg = Y;
if (4 * i <= Y)
{
leg -= 4 * i;
}else
{
break;
}
if (2*(X-i) == leg)
{
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
}
