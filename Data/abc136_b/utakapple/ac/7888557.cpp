#include <iostream>
int main(){
int n;
std::cin >> n;
int digit_odd = 0;
if(n < 10) digit_odd = n;
else if(n < 100) digit_odd = 9;
else if(n < 1000) digit_odd = 9 + (n - 99);
else if(n < 10000) digit_odd = 9 + (999 - 99);
else if(n == 100000) digit_odd = 9 + (999 - 99) + (99999 - 9999);
else digit_odd = 9 + (999-99) + (n - 9999);
std::cout << digit_odd << std::endl;
return 0;
}
