#include <iostream>
#include <string>
using namespace std;
int main(){
int n, l, count = 0;
cin >> n >> l;
if (l >= 0){
for (int i = 1; i <= n; i++){
count += l + i - 1;
}
} else {
for (int i = 1; i <= n; i++){
if(i == n && l + i - 1 < 0) break;
count += l + i - 1;
}
}
cout << count << endl;
return 0;
}
