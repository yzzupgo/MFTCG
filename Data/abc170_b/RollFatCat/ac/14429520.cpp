#include<bits/stdc++.h>
using namespace std;
const int MaxX=1e2;
const int MaxY=1e2;
int main(){
int X, Y, a, b;
scanf("%d %d\n",&X,&Y);
b=Y-(X<<1);
a=X-(b>>1);
puts(((b&1)==0 and a>=0 and b>=0)?"Yes":"No");
}
