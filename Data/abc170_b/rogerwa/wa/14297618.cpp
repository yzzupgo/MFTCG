#include<bits/stdc++.h>
using namespace std;
int main() {
int an,legs;
scanf("%d %d",&an,&legs);
if(legs%2 == 0 && an*2<=legs && an*4>=legs) printf("YES");
else printf("NO");
}
