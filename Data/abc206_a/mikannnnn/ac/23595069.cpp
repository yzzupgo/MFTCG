#include <bits/stdc++.h>
using namespace std;
int main() {
int N;
cin >> N;
if(N < 20600 / 108 + 1) {
cout << "Yay!" ;
} else if(N == 20600 / 108 + 1) {
cout << "so-so" ;
} else if(N > 20600 / 108 + 1) {
cout << ":(";
}
}
