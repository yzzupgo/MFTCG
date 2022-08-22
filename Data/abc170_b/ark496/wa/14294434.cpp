#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <math.h>
#include <list>
#include <string>
#include <map>
#include <vector>
#include <stack>
#include <queue>
#include <iomanip>
using namespace std;
#define REPD(i,a,b) for (int i = (a); i < (b); ++i)
#define REP(i,n) REPD(i, 0, n)
#define DIV0 1000000007
typedef long long ll;
#define fin(ans) cout << (ans) << '\n'
int main()
{
int X,Y;
cin >> X >> Y;
if(Y > 4*X){fin("No"); return 0;}
if(Y < 2*X){fin("No"); return 0;}
REP(i,X){
REP(j,X-i){
if(i*4+j*2 == Y){
fin("Yes");
return 0;
}
}
}
fin("No");
return 0;
}
