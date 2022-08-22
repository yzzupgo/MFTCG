#include<iostream>
int main(){
int x,y;
std::cin >> x >> y;
int t2 = y-2*x;
if(t2>=0 && t2%2==0 && t2<=(2*x)){
std::cout << "Yes\n";
}else{
std::cout << "No\n";
}
return 0;
}
