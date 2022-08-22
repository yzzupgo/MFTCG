#include"bits/stdc++.h"
using namespace std;
int main(){
int n, l, i, sum=0, mini, mini_sum, eat_sum;
cin >> n >> l;
for(i=1; i<=n; i++){
sum += l + i - 1;
}
mini = n;
for(i=1; i<=n; i++){
eat_sum = sum - (l+i-1);
if(mini > abs(sum-eat_sum))
{
mini = abs(sum-eat_sum);
mini_sum = eat_sum;
}
}
cout << mini_sum << endl;
return 0;
}
