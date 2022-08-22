#include<bits/stdc++.h>
using namespace std;
int main() {
int N;
cin >> N;
double value = (double)N * 1.08;
if(value - 206.0 < 1.0 && value > 206.0) {
cout << "so-so" << endl;
return 0;
}
if(value < 206.0) {
cout << "Yay!" << endl;
} else {
cout << ":(" << endl;
}
}
