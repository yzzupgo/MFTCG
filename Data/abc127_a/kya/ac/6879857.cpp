#include <bits/stdc++.h>
using namespace std;
int main(){
int A, B;
cin >> A >> B;
int ans;
if(A > 12) ans = B;
else if(A > 5) ans = B / 2;
else ans = 0;
cout << ans << endl;
}
