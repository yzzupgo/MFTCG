#include <iostream>
int main(){
int n, l;
std::cin >> n >> l;
long ans;
if(l <= 0 && l+n-1 >= 0)
ans = n*(l-1) + 1/2*n*(n+1);
else if(l <= 0)
ans = n*(l-1) + 1/2*n*(n+1) - (l+n-1);
else
ans = n*(l-1) + 1/2*n*(n+1) - l;
std::cout << ans << std::endl;
return 0;
}
