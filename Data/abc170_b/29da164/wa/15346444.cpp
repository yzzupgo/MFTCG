#include <iostream>
int main(void){
int n, m;
std::cin >> n >> m;
if((n<2*m) && (m<4*n)) std::cout << "Yes";
else std::cout << "No";
}
