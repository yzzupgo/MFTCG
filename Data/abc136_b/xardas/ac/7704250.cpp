#include <iostream>
#include <algorithm>
int main()
{
int n;
int r=0;
std::cin>>n;
int a=1;
while(a<=n){
r+=std::min(a*10, n+1)-a;
a*=100;
}
std::cout<<r;
return 0;
}
