#include <iostream>
int main(void){
int n, m;
std::cin >> n >> m;
if((n<2*m) && (m<4*n) && (m%2==0) && (n>0) && (m>1)) std::cout << "Yes";
else std::cout << "No";
}
