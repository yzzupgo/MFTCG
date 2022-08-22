#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include <iomanip>
using namespace std;
int main() {
int a;
cin >> a;
int ans = a * 1.08;
if(ans < 206) {
cout << "Yay!" << endl;
} else if(ans == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
}
