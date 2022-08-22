#include <bits/stdc++.h>
using namespace std;
int main()
{
int odds[] = {9, 90, 900, 9000, 90000};
int start[] = {1, 10, 100, 1000, 10000};
int n, d = 0, n2;
cin >> n;
n2 = n;
while(n > 0){
n /= 10;
d++;
}
int ans = 0;
if(d % 2 == 0){
d -= 2;
while(d >= 0){
ans += odds[d];
d -= 2;
}
}
else{
ans += (n2 - start[d-1]);
d -= 3;
while(d >= 0){
ans += odds[d];
d -= 2;
}
}
cout << ans << "\n";
}
