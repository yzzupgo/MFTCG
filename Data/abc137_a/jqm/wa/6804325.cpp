#include <cstdio>
#include <algorithm>
#include <iostream>
#include <cstring>
#include <cmath>
#include <map>
#include <set>
#include <stack>
#include <queue>
#define INF 0x3f3f3f3f
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
int main()
{
int a, b;
cout<<max(a+b, max(a-b, a*b))<<endl;
return 0;
}
