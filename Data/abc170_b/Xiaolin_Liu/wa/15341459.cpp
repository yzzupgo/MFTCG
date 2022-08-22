#include<iostream>
int main(){
int X,Y;
std::cin >> X >>Y;
if((Y-2*X >=0)&&((Y-2*X)%2==0)) std::cout << "Yes";
else std::cout <<"No";
}
