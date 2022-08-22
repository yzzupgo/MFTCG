#include<iostream>
#include<math.h>
using namespace std;
int apple(const int& N, const int& L){
if(L >= 0) return (L);
if(fabs(L) <= N) return (0);
return (L + N - 1);
}
int main(){
int N, L;
int sum = 0;
cin >> N >> L;
for(int i = 1; i <= N; i++) sum += (L + i - 1);
int eat = apple(N, L);
cout << sum - eat;
}
