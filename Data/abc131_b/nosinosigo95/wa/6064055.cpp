#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
int N, L;
cin >> N >> L;
vector<int> apple(N);
int sum = 0;
for(int i = 0; i < N; i++)
{
apple[i] = L + i;
sum += apple[i];
}
int min_diff = 0;
int ans = sum - apple[0] ;
for(int i = 0; i < N; i++)
{
int diff = abs(apple[i]);
if(min_diff > diff)
{
ans = sum - apple[i];
}
}
cout << ans << endl;
cout << sum << endl;
return 0;
}
