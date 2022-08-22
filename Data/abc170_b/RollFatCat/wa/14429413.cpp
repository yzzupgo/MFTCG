#include<bits/stdc++.h>
using namespace std;
const int MaxX=1e2;
const int MaxY=1e2;
int main(){
int X, Y, a, b;
scanf("%d %d\n",&X,&Y);
a=Y-(X<<1);
b=X-a;
puts((a>=0 and b>=0)?"Yes":"No");
}
