#include <iostream>
int main()
{
int A, B;
std::cin >> A >> B;
int ret = B;
if(A <= 5) {
ret = 0;
} else if(A <= 12) {
ret = B/2;
}
std::cout << ret << std::endl;
return 0;
}
