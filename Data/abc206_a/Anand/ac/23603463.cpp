#include<iostream>
using namespace std;
int main() {
float n;
cin >> n;
int x = (n * 1.08);
if(x == 206) {
cout << "so-so" << endl;
} else if(x < 206) {
cout << "Yay!" << endl;
} else {
cout << ":(" << endl;
}
}
