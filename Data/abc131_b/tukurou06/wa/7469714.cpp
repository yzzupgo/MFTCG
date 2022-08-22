#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <cmath>
#include <random>
using namespace std;
int main()
{
int N,L;
cin >> N >> L;
int sum = 0;
for (int ni = 0; ni < N; ni++){
sum += L + ni;
}
if (L >= 0){
sum -= L;
}else if( L <= - N){
sum += N + L;
}
printf("%d",sum);
return 0;
}
