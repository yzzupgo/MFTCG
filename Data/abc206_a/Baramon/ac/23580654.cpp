#include<iostream>
using namespace std;
int main() {
float N;
cin >> N;
int ans = 1.08 * N;
if(ans < 206) {
cout << "Yay!\n";
} else if(ans > 206) {
cout << ":(\n";
} else {
cout << "so-so\n";
}
}
