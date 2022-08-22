#include <bits/stdc++.h>
using namespace std;
int main()
{
int x,y;
scanf("%d%d",&x,&y);
if(y%2)printf("No");
else{
if(y<=(4*x)&&y>=(2*x))printf("Yes");
else printf("No");
}
printf("\n");
return 0;
}
