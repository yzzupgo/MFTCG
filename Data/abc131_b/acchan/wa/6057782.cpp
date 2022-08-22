#include <bits/stdc++.h>
using namespace std;
int main(){
int N, L;
cin >> N >> L;
int sum = (2*L + N - 1)*N / 2;
if(L < 0 && L + N - 1 > 0){
cout << sum << endl;
}else if(L > 0){
cout << sum - L << endl;
}else{
cout << sum - (L+N-1) << endl;
}
return 0;
}
