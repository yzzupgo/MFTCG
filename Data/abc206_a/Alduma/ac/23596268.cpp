#include <iostream>
using namespace std;
int main(int argc, char *argv[]) {
float N, C = 206;
cin >> N;
if((N * 1.08) < C) {
cout << "Yay!";
} else if(((N * 1.08) > C) and ((N * 1.08) < 207)) {
cout << "so-so";
} else {
cout << ":(";
}
return 0;
}
