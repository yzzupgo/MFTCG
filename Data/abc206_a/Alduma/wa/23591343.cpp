#include <iostream>
using namespace std;
int main(int argc, char *argv[]) {
float N;
cin >> N;
if((N * 1.08) < 206) {
cout << "Yay!";
} else {
cout << ":(";
}
return 0;
}
