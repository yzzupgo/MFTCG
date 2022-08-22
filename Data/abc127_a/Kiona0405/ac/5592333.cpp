#include<bits/stdc++.h>
using namespace std;
int main()
{
int A, B;
cin >> A >> B;
int ans;
if (A >= 13)
ans = B;
else if (6 <= A)
ans = B/2;
else
ans = 0;
cout << ans << endl;
return 0;
}
