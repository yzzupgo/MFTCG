#include <iostream>
#include <string>
#include <cstdlib>
#include <algorithm>
#include <vector>
using namespace std;
int main(void){
int N, L;
cin >> N >> L;
int flavor[N + 1];
for(int i = 1; i <= N; i++){
flavor[i] = L + i - 1;
}
int smallest = 1000000;
int smallestIndex = 0;
for(int i = 1; i <= N; i++){
if(abs(flavor[i]) < abs(smallest)){
smallest = abs(flavor[i]);
smallestIndex = i;
}
}
int ans = 0;
for(int i = 1; i <= N; i++){
if(i == smallestIndex){
continue;
} else {
ans += flavor[i];
}
}
cout << ans << endl;
}
