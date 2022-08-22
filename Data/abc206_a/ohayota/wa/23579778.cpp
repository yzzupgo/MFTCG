#include<bits/stdc++.h>
using namespace std;
int main(void) {
double n;
cin >> n;
n = n * 1.08;
if(n < 206.0) {
cout << "Yay!";
return 0;
}
if(n == 206.0) {
cout << ":(";
}
cout << "so-so";
}
