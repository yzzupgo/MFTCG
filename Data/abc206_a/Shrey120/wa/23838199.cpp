#include<iostream>
using namespace std;
int main() {
int n, t;
cin >> n;
t = n * 1.08;
if(t < 206) {
cout << "yay";
} else if(t > 206) {
cout << ":(";
} else {
cout << "so-so";
}
return 0;
}
