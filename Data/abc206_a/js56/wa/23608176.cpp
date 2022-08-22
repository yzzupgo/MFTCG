#include<iostream>
using namespace std;
int main() {
int n;
int u = (1.08 * n);
if(u < 206) {
cout << "Yay";
} else if(u == 206) {
cout << "so-so";
} else {
cout << ":(";
}
return 0;
}
