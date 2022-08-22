#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define endl "\n"
int main()
{
faster;
int x,y;
cin >> x >> y;
if(y/x == 2 || y/x == 4){
cout << "Yes";
}else {
bool flag = false;
for(int i = 1; i < x; i++){
if(i * 2 + (x-i) * 4 == y) {
flag = true;
break;
}
}
cout << (flag ? "Yes" : "No");
}
return 0;
}
