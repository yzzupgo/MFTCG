#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include <stdio.h>
using namespace std;
int main() {
int x;
cin >> x;
int a = x * 1.08;
if(a > 206) {
cout << ":(" << endl;
} else if(a < 206) {
cout << "Yay!" << endl;
} else {
cout << "so-so" << endl;
}
}
