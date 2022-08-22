#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
int main()
{
int n, l;
cin >> n >> l;
int eat;
int ans = 0;
for( int i = l; i < l + n; i++ )
{
ans += i;
}
if( l > 0 ) eat = l;
else if( l + n-1 < 0 ) eat = l + n - 1;
else eat = 0;
cout << ans - eat << endl;
}
