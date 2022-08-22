#include<bits/stdc++.h>
using namespace std;
int main(){
int x,y;
scanf("%d %d",&x,&y);
bool sw = 0;
for(int i = 0; i <= x; i++){
if(y - (i*4) >= 0)
if((y-(i*4))%2 == 0)
sw = 1;
}
if(sw)
printf("Yes\n");
else
printf("No\n");
return 0;
}
