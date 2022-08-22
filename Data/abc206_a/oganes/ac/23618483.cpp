#include<iostream>
using namespace std;
int main() {
int n;
cin >> n;
if((int)(n * 1.08) < 206) {
cout << "Yay!";
} else if((int)(n * 1.08) > 206) {
cout << ":(";
} else {
cout << "so-so";
}
return 0;
}
