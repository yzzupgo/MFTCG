#define _USE_MATH_DEFINES
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include<math.h>
#include<iomanip>
#include<stdio.h>
#include <stdlib.h>
#include<stdio.h>
#include <queue>
#include<map>
#include <sstream>
#include<set>
#include<stack>
#include<time.h>
typedef long long int ll;
using namespace std;
int main()
{
int a, b;
cin >> a >> b;
for (int i = 0; i <= a; i++) {
if (i * 2 + (a - i) * 4 == b)cout << "Yes" << endl;
return 0;
}
cout << "No" << endl;
return 0;
}
