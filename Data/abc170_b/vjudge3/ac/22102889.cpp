#include <bits/stdc++.h>
using namespace std;
int main() {
int x,y;cin>>x>>y;
double a=(y-2*x)/2;
if((y-2*x)%2==0 && a>=0 && a<=x && 4*a<=y && x>=0 &&y>=0){
printf("Yes");
}
else printf("No");
}
