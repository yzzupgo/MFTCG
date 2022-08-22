#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
int n,t=0;
scanf("%d",&n);
int x=n;
while(x) {
t++;
x/=10;
}
if(t==1) printf("%d\n",n);
else if(t==2) printf("%d\n",9);
else if(t==3) printf("%d\n",10+(n/100%10)*100+n%100);
else if(t==4) printf("%d\n",1009);
else if(t==5) printf("%d\n",1010+(n/10000%10)*10000+n%10000);
else printf("%d\n",90909);
return 0;
}
