#include <iostream>
using namespace std;
int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
int N, L;
cin >> N >> L;
int tot = (L+(L+N-1))*N / 2;
int max = L + N - 1;
int min = L;
if((min <= 0) && (0 <= max))
cout << tot << endl;
else if(min > 0)
cout << (tot - min) << endl;
else if(max < 0)
cout << (tot - max) << endl;
return 0;
}
