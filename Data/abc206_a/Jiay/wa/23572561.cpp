#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
int n;
int main() {
cin >> n;
int k = floor(n * 1.08);
if(k > 206) {
cout << ":(" << endl;
}
if(k == 206) {
cout << "so-so" << endl;
} else {
cout << "Yay!" << endl;
}
return 0;
}
