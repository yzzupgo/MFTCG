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
int min = N;
int min_i = 1;
for(int i = 1; i <= N; ++i){
if(min >= abs(L + i - 1)){
min = abs(L + i - 1);
min_i = i;
}
}
for(int i = 1; i <= N; ++i){
if(i == min_i){
continue;
}
sum += (L + i - 1);
}
cout << sum << endl;
return 0;
}
