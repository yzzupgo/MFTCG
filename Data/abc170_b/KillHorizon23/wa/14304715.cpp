#include<bits/stdc++.h>
#define console
using namespace std;
#ifndef console
ifstream fin("data.in");
ofstream fout("data.out");
#else
#define fin cin
#define fout cout
#endif
#define usain_bolt() (ios_base::sync_with_stdio(false), \
fin.tie(NULL), fout.tie(NULL))
typedef long long ll;
int main()
{
usain_bolt();
ll x, y;
fin >> x >> y;
if (y % 2 != 0) fout << "No";
else if (x * 4 < y) fout << "No";
else fout << "Yes";
#ifndef console
fin.close(), fout.close();
#endif
return 0;
}
