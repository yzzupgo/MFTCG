#include <iostream>
#include <stack>
#include <math.h>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#define rep(i,n) for(int i=0; i < n; i++)
using ll = long long;
using namespace std;
#define pi 3.14159265358979
int main()
{
int x, total;
cin >> x >> total;
rep(kame, x)
{
int tmp = total;
int turu = x - kame;
if (turu != 0) tmp -= turu * 2;
if (kame != 0) tmp -= kame *4;
if (tmp == 0)
{
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
return 0;
}
