#include <iostream>
#include <stdio.h>
using namespace std;
int main(void) {
int N = 0;
cin >> N;
int num = 0;
if ((1 <= N) && (N < 10)) {
num = N;
}
else if ((10 <= N) && (N < 100)) {
num = 9;
}
else if ((100 <= N) && (N < 1000)) {
num = 9 + N - 99;
}
else if ((1000 <= N) && (N < 10000)) {
num = 909;
}
else if ((10000 <= N) && (N < 100000)) {
num = 909 + N - 9999;
}
else if (N == 100000) {
num = 90909;
}
else {
num = 0;
}
cout << num << endl;
return 0;
}
