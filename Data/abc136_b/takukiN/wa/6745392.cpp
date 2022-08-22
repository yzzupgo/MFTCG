#include <iostream>
using namespace std;
int main(void) {
int N;
cin >> N;
int cnt = 0;
for(int i = 1; i < N; i++) {
if( i < 10 ) {
cnt++;
}
else if( i > 99 && i < 1000) {
cnt++;
}
else if( i > 9999 && i < 100000) {
cnt++;
}
}
cout << cnt << endl;
return 0;
}
