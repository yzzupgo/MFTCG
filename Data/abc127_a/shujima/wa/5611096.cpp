#include <iostream>
#include <stdlib.h>
#include <vector>
#include <algorithm>
using namespace std;
template<class T> inline bool chmin(T& a, T b);
template<class T> inline bool chmax(T& a, T b);
long a, b, c, d, i, j, k, n;
int main(){
cin >> a>>b;
if ( a <= 12)b/=2;
if ( b <= 5)b=0;
cout << b << endl;
return 0;
}
template<class T> inline bool chmin(T& a, T b)
{
if (a > b)
{
a = b;
return true;
}
return false;
}
template<class T> inline bool chmax(T& a, T b)
{
if (a < b)
{
a = b;
return true;
}
return false;
}
