#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define dd double
#define pb push_back
#define mp make_pair
#define f first
#define s second
int main()
{
int animal,leg,i;
cin>>animal>>leg;
for(i=1;i<=animal;i++)
{
int val=animal-i;
int rem=leg-(i*2);
if(val*4==rem)
{
printf("YES\n");
return 0;
}
}
printf("NO\n");
}
