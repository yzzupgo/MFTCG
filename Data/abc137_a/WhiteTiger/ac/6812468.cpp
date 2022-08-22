#include <iostream>
int main(){
int A,B;
int Add,Substract,Multiply;
std::cin >> A >> B;
Add = A + B;
Substract = A - B;
Multiply = A * B;
if(Add >= Substract && Add >= Multiply){
std::cout << Add << std::endl;
}else if(Substract >= Add && Substract >= Multiply){
std::cout << Substract << std::endl;
}else if(Multiply >= Add && Multiply >= Substract){
std::cout << Multiply << std::endl;
}
return 0;
}
