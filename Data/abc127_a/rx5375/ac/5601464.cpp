#include<bits/stdc++.h>
using namespace std;
int main(){
int A, B, ans;
cin >> A >> B;
if (A < 6) ans = 0;
else if (A >= 13) ans = B;
else if ((A < 12) || (A >= 6)) ans = B/2;
cout << ans << endl;
return 0;
}
