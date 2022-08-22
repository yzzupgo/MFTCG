#include <iostream>
#include <string>
#include <algorithm>
int main(){
int a;
int b;
std::cin >> a >> b;
int r;
if (a <= 5){
r = 0;
}else if (a <= 12){
r = b /2;
}else{
r = b;
}
std::cout << r << std::endl;
}
