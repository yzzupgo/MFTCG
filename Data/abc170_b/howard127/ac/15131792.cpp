#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include<map>
#include<set>
using namespace std;
typedef long long ll;
#define INF 1000000000000
#define MOD 10000007
#define pb push_back
void YesNo(bool b) { b ? cout << "Yes" << endl : cout << "No" << endl; return; }
void YESNO(bool b) { b ? cout << "YES" << endl : cout << "NO" << endl; return; }
void yesno(bool b) { b ? cout << "yes" << endl : cout << "no" << endl; return; }
int main() {
int t, a = 0;
int x = 0;
cin >> t >> a;
if (a % 2 == 1 || a > 4 * t || a < 2 * t)
{
cout << "No" << endl;
}
else
{
cout << "Yes" << endl;
}
}
