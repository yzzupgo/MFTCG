#include<iostream>
#include<math.h>
using namespace std;
int apple(const int& N, const int& L){
int re = L;
for(int i = 1; i <= N; i++){
if(fabs(L + i - 1) < fabs(re)) re = (L + i - 1);
}
return re;
}
int main(){
int N, L;
int sum = 0;
cin >> N >> L;
for(int i = 1; i <= N; i++) sum += (L + i - 1);
int eat = apple(N, L);
cout << sum - eat;
}
