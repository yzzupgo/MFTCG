#include<iostream>
using namespace std;
int main(void) {
int N;
cin >> N;
int count = 0;
bool flag=true;
if ((N / 9) >= 1) {
count += 9;
}
else {
count += (N % 10);
flag = false;
}
if ((N / 100) < 1) {
flag = false;
}
if (flag) {
if ((N / 999) >= 1) {
count += 900;
}
else {
count += (N % 100 + 1);
flag = false;
}
}
if ((N / 10000) < 1) {
flag = false;
}
if (flag) {
if ((N / 99999) >= 1) {
count += 90000;
}
else {
count += (N % 10000 + 1);
}
}
cout << count << endl;
return 0;
}
