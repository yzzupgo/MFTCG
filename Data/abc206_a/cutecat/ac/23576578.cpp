#include <iostream>
#include <string>
#include<math.h>
#include<vector>
#include<algorithm>
#include<map>
#include<queue>
using ll = long long;
using namespace std;
int main(void) {
float N;
cin >> N;
int n = int(N * 1.08);
if(n == 206) {
cout << "so-so" << endl;
} else if(n > 206) {
cout << ":(" << endl;
} else {
cout << "Yay!" << endl;
}
return 0;
}
