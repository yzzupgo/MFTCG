#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<cctype>
using namespace std;
template <class T>
void read(T &x) {
x = 0;
char c = getchar();
bool f = false;
while(!isdigit(c)) {
f = c == '-', c = getchar();
}
while(isdigit(c)) {
x = x * 10 + c - '0', c = getchar();
}
x = f ? (-x) : x;
}
int x;
int main() {
read(x);
if((double)x * 1.08 < 206) {
cout << "Yay!";
} else if((double)x * 1.08 == 206) {
cout << "so-so";
} else {
cout << ":(";
}
}
