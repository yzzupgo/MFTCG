#include <iostream>
#include <string>
#include <math.h>
#include <string.h>
#include <stdio.h>
#include <vector>
#include <stdlib.h>
#include <algorithm>
#include <list>
#include <iterator>
using namespace std;
int main()
{
int a, b;
cin >> a >> b;
int max = a + b;
if (max < a - b)
{
max = a - b;
}
else if (max < a*b)
{
max = a * b;
}
cout << max << endl;
return 0;
}
