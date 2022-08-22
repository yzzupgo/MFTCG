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
std::cout << *std::max_element(num.begin(), num.end());
return 0;
}
