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
double medlegs = (1.0 * y) / x;
if (medlegs >= 2 && medlegs <= 3) fout << "Yes";
else fout << "No";
#ifndef console
fin.close(), fout.close();
#endif
return 0;
}
