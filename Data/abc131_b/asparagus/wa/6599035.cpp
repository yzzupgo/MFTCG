#include <string>
#include <iostream>
using namespace std;
int main(){
int N, L, sum = 0;
cin >> N;
cin >> L;
if(L >= 0){
sum = (L + L+N-1) * N / 2 - L;
}else if(L < 0 && L == N){
sum = (L + L+N-1) * N / 2;
}else{
sum = (L + L+N-1) * N / 2 - (L+N-1);
}
cout << sum;
}
