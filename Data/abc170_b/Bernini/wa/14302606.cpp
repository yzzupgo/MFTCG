#include <bits/stdc++.h>
using namespace std;
int main()
{
int x, y;
cin >> x >> y;
if(y/x < 2 || y/x > 4 || y%2==1){
printf("NO\n");
}
else
{
printf("YES\n");
}
}
