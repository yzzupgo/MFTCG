#include<iostream>
#include<vector>
#include<algorithm>
int main(){
int A,B;
std::vector<int> num(3);
std::cin >> A >> B;
num.push_back(A+B);
num.push_back(A-B);
num.push_back(A*B);
int cal = *std::max_element(num.begin(), num.end());
std::cout << cal << std::endl;
return 0;
}
