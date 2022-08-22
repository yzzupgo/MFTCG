#include<bits/stdc++.h>
using namespace std;
int main()
{
int n , l , sum=0 , Min=1e9 , x=0 ;
cin >> n >> l ;
for( int i = 1 ; i <= n ; i++)
{
sum += i + l - 1;
x = i + l - 1;
Min =min (Min,abs(x));
}
cout << sum-Min;
}
