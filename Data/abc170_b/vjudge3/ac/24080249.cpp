#include<stdio.h>
int main()
{
int x,y;
scanf("%d%d",&x,&y);
puts(y%2==0&&y>=x*2&&y<=x*4?"Yes":"No");
}
