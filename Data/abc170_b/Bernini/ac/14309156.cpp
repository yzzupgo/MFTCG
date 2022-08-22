#include <bits/stdc++.h>
using namespace std;
int main()
{
int x, y;
cin >> x >> y;
for (int i = 0; i <= x ; i++)
{
if((x-i)*2+i*4==y){
printf("Yes\n");
return 0;
}
}
printf("No\n");
}
