#include <iostream>
using namespace std;
int min(int a,int b){
return a > b ? b : a;
}
int main(){
int N,L;
cin >> N >> L;
int sum = 0;
int minimum = abs(L);
bool flg = true;
if(0 > L && N <= abs(L)) flg = false;
for(int i = 0; i < N; ++i){
int num = L + i;
minimum = min(minimum,abs(num));
sum += num;
}
if(flg) cout << sum - minimum << endl;
else cout << sum + minimum << endl;
return 0;
}
