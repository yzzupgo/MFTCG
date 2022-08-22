#include <iostream>
#include <vector>
#include <list>
#include <math.h>
#include <algorithm>
#include <functional>
#include <string>
#include <iomanip>
#include <queue>
#include <map>
int main()
{
int A, B;
std::cin >> A >> B;
if (A+B > A-B && A+B > A*B) {
std::cout << A+B <<std::endl;
}else if(A-B > A+B && A-B > A*B){
std::cout << A-B <<std::endl;
}else if(A*B > A+B && A*B > A+B){
std::cout << A*B <<std::endl;
}
}
