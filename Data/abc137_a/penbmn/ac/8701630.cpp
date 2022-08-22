#include <bits/stdc++.h>
using namespace std;
int main(){
int A,B;
cin >> A >> B;
int ans=-1e9;
ans = max(ans,A*B);
ans = max(ans,A-B);
ans = max(ans,A+B);
cout << ans << endl;
}
