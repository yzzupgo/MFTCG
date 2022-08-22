#include<bits/stdc++.h>
using namespace std;
int main(void){
int N, L;
cin >> N >> L;
int sum = 0;
for (int i = 0; i < N ; i++){
sum += L + i;
}
if (L*(N+L-1)<=0){
cout << sum << endl;
}else if(L<0){
cout << sum - (L+N-1) << endl;
}else{
cout << sum - L << endl;
}
return 0;
}
