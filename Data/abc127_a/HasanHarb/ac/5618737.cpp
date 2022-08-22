#include <bits/stdc++.h>
#define forn(i,n) for (int i = 0; i < n; i++)
#define ford(i,n) for (int i = n - 1; i > -1; i--)
#define forl(i,l,r) for (int i = l; i <= r; i++)
#define vc vector
#define f first
#define s second
#define pb(i) push_back(i)
#define mx(ar,n) (*max_element(ar, ar + n))
#define mn(ar,n) (*min_element(ar, ar + n))
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
const long double pi = acos(-1);
int main()
{
int a , b ;
cin >> a >> b ;
if(a > 12){
cout << b <<endl ;
}
else if(a <= 12 and a >= 6){
cout << b/2 << endl ;
}
else{
cout << 0 << endl ;
}
return 0 ;
}
