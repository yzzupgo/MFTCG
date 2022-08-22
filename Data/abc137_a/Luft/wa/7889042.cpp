#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int (i) = 0; (i) < (n); ++(i))
#define rrep(i,n) for(int (i) = (n) - 1; (i) >= 0; --(i))
#define nfor(i,a,b) for(int (i) = (a); (i) < (b); ++(i))
#define rfor(i,a,b) for(int (i) = (b); (i) >= (a); --(i))
int main()
{
int a,b;
cin >> a >> b;
if (a < 0 && b >= 0){
cout << a + b << endl;
}else if (a >= 0 && b < 0){
cout << a - b << endl;
}else{
cout << a * b << endl;
}
return 0;
}
