#include <iostream>
using namespace std;
int main(void){
int N,A;
cin >> N >> A;
int L = A;
int R = N + A - 1;
int ate;
if(L >= 0){
ate = L;
}else if(R <= 0){
ate = R;
}else{
ate = 0;
}
cout << (L + R) * N / 2 << endl;
}
