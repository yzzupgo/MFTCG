#include<iostream>
#include<algorithm>
using namespace std;
int main() {
int N;
int a;
cin >> N;
a = N * 1.08;
if(206 > a) {
cout << "Yay!" << endl;
} else if(206 == a) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
}
