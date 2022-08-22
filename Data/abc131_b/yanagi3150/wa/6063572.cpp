#include <iostream>
#include <string>
#include <vector>
int main(void){
int n, l;
std::cin >> n >> l;
int sum = 0;
for(int i=1; i<=n; i++){
sum += l+i-1;
}
if(l<-n) sum -= l+n-1;
else if(l<0) sum -= 0;
else sum -= l;
std::cout << sum << std::endl;
return 0;
}
