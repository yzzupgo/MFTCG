#include<iostream>
using namespace std;
int main() {
long long int n, max;
cin >> n;
max = n * 1.8;
if(max < 206) {
cout << "Yay!" << endl;
} else if(max == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
return 0;
}
