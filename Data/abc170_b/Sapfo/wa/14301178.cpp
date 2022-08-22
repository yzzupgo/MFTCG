#include<iostream>
int main(){
int x,y;
std::cin >> x >> y;
if(y>=2*x && (y-2*x)<=2*x){
std::cout << "Yes\n";
}else{
std::cout << "No\n";
}
return 0;
}
