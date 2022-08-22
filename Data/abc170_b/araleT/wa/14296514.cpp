#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n) FOR(i,0,n)
int main()
{
int X, Y; cin >> X >> Y;
int z = Y - X*2;
if( z%2 == 0 && z/2 <= X )
cout << "Yes" << endl;
else
cout << "No" << endl;
}
