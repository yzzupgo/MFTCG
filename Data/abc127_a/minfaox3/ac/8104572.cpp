#include<bits/stdc++.h>
void solve(int a,int b){
if(a<=5)printf("0");
else if(a<13)printf("%d",b/2);
else printf("%d",b);
}
int main(){
std::cin.tie(nullptr);
std::ios::sync_with_stdio(false);
int a=0,b=0;
std::cin>>a>>b;
solve(a,b);
return 0;
}
