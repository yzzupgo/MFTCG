#include <iostream>
int main(){
int X = 0, Y = 0;
std::cin >> X >> Y;
if(Y <= X*4 && Y >= X*2 && Y%2 == 0)std::cout << "Yes";
else std::cout << "No";
return 0;
}
