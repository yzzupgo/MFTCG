#include<iostream>
#include<cstdio>
using namespace std;
int main() {
int n;
cin >> n;
n = n * 1.08;
if(n > 206) {
cout << ":(";
} else if(n == 206) {
cout << "so-so";
} else {
cout << "Yay!";
}
return 0;
}
