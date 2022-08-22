#include <bits/stdc++.h>
using namespace std;
int x,y;
signed main(){
cin>>x>>y;
if (y%2==0 && y<=x*4 && y>0)
printf("Yes\n");
else
printf("No\n");
return 0;
}
