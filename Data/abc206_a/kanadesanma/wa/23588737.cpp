#include<iostream>
using namespace std;
int main() {
int n;
cin >> n;
double ans = n * 1.08;
int gati = ans;
if(gati < 205) {
cout << "Yay!" << endl;
} else if(gati == 205) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
return 0;
}
