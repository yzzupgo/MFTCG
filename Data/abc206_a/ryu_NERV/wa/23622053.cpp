#include<iostream>
using namespace std;
int main() {
int n;
int s = (108 / 100);
cin >> n;
if(n * s < 206) {
cout << "Yay!" << endl;
} else if(n * s == 206) {
cout << "so - so" << endl;
} else if(n * s > 206) {
cout << ":(";
}
return 0;
}
