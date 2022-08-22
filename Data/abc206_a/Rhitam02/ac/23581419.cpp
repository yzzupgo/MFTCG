#include<bits/stdc++.h>
using namespace std;
int main() {
int N;
cin >> N;
float a = (float)N * (float)1.08;
if(floor(a) < 206) {
cout << "Yay!" << endl;
} else if(floor(a) == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
}
