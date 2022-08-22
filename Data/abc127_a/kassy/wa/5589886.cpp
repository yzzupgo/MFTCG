#include <stdio.h>
#include <iostream>
int main(int argc, char** argv)
{
int A,B;
std::cin >> A;
std::cin >> B;
int C = A>12 ? B : A>6 ? B/2 : 0;
std::cout << C;
return 0;
}
