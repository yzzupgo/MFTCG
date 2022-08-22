#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int (i) = 0; (i) < (n); ++(i))
#define rrep(i,n) for(int (i) = (n) - 1; (i) >= 0; --(i))
#define nfor(i,a,b) for(int (i) = (a); (i) < (b); ++(i))
#define rfor(i,a,b) for(int (i) = (b); (i) >= (a); --(i))
#define mod (1000000007)
#define YES cout << "YES" << endl;
#define Yes cout << "Yes" << endl;
#define NO cout << "NO" << endl;
#define No cout << "No" << endl;
int asc(const void *a, const void *b) {
return *(int *)a - *(int *)b;
}
int desc(const void *a, const void *b) {
return *(int *)b - *(int *)a;
}
int main()
{
int a,b;
cin >> a >> b;
if (a >= 13) {
cout << b << endl;
}else if(a >= 6){
cout << b/2 << endl;
}else{
cout << 0 << endl;
}
return 0;
}
