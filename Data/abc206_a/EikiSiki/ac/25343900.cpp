#include<bits/stdc++.h>
int main() {
int N;
std::cin >> N;
N = (108 * N) / 100;
if(N < 206) {
std::cout << "Yay!" << std::endl;
} else if(N == 206) {
std::cout << "so-so" << std::endl;
} else {
std::cout << ":(" << std::endl;
}
}
