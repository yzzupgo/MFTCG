#include<iostream>
#include<string>
int main(void) {
int a;
std::cin >> a;
int count = 0;
if (a<10) {
count = a;
}
if (a<100&&a>=10) {
count = 9;
}
if (a >= 100&&a<1000) {
count = 9 + (a - 99);
}
if (a >= 1000 && a < 10000) {
count = 909;
}
if (a >= 10000 && a < 100000) {
count = 909 + (a - 9999);
}
if (a == 100000) {
count = 90909;
}
std::cout << count;
return 0;
}
