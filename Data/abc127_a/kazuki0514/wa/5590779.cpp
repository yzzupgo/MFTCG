#include <iostream>
using namespace std;
int main(void){
int A,B;
std::cin >> A >> B;
if(A<12){
if(A>5){
B = B/2;
}
else{
B = 0;
}
}
std::cout << B << std::endl;
}
