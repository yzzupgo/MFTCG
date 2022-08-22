#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<cmath>
#include <climits>
using namespace std;
int main()
{
int N, L;
cin >> N >> L;
int sum = 0;
if(L <= 0 && N > abs(L)){
for(int i = 1; i <= N; ++i){
sum += L + i - 1;
}
}else if(L <= 0 && N <= abs(L)){
for(int i = 1; i <= N; ++i){
sum += L + i - 1;
}
sum -= (L + N - 1);
}else if(L > 0){
for(int i = i; i <= N; ++i){
sum += L + i - 1;
}
sum -= (L + 1);
}
cout << sum << endl;
return 0;
}
