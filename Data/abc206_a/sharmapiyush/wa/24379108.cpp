#include<iostream>
using namespace std;
int main() {
int n;
cin >> n;
float m = n * 1.08;
if(m > 206) {
cout << ":(" << endl;
} else if(m < 206) {
cout << "Yay!" << endl;
} else {
cout << "so-so" << endl;
}
}
