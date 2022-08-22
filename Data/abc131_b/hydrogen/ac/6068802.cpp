#include "bits/stdc++.h"
using namespace std;
int main(){
int N, L, eat, ans, sum = 0;
cin >> N >> L;
for (int i = 0; i < N; i++){
sum += L + i;
}
if (L>0){
eat = L;
}else if (L+N-1<0){
eat = L + N - 1;
}else{
eat = 0;
}
cout << sum - eat << endl;
return 0;
}
