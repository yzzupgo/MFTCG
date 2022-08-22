#include <iostream>
using namespace std;
int main(void){
int N, L, sum, ret=0;
std::cin >> N >> L;
sum = (2*L + N-1) * N / 2;
if(L < 0){
if(N-1 < -L)
ret = sum - (L+N-1);
else
ret = sum;
}else{
ret = sum - L;
}
std::cout << ret << std::endl;
return 0;
}
