#include<bits/stdc++.h>
using namespace std;
int main(void) {
long num;
cin >> num;
long ans = 0;
for(long i=1; i<=num; i++) {
if (to_string(i).length() % 2 == 0) {
continue;
}
else {
ans++;
}
}
cout << ans << endl;
return 0;
}
