#include<iostream>
#include<climits>
int main() {
int n, l;
std::cin >> n >> l;
int ta = (l - 1)* n + n*(n + 1) / 2;
if (l >= 0)ta -= l;
else {
if (n + l >= 0) {}
else ta -= n + l-1;
}
std::cout <<ta << std::endl;
}
