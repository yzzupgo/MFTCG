#include<bits/stdc++.h>
using namespace std;
int main() {
int N;
cin >> N;
float a = (float)N * (float)1.08;
if(floor(a) < N) {
cout << "Yay!" << endl;
} else if(floor(a) == N) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
}
