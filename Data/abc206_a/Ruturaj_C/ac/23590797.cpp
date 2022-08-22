#include<bits/stdc++.h>
using namespace std;
int main() {
int N;
cin >> N;
double p = N * 1.08;
if(p < 206.00) {
cout << "Yay!" << endl;
} else if(p == 206.28) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
return 0;
}
