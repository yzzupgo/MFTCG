#include <iostream>
#include <string>
int main(){
int x, y;
std::cin >> x >> y;
std::string YorN = "No";
for(int i = 0; i <= x; i++){
if(2 * i + 4 * (x - i) == y){
YorN = "Yes";
}
}
std::cout << YorN << std::endl;
}
