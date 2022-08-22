#include <iostream>
using namespace std;
int main() {
int n;
cin >> n;
float resd = n * 1.08;
int res = resd;
if(res > 206) {
cout << ":(";
} else if(res < 206) {
cout << "Ray!";
} else {
cout << "so-so";
}
return 0;
}
