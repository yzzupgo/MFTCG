#include <bits/stdc++.h>
using namespace std;
int main()
{
int N;
cin>>N;
int NT = N;
int pom = 1;
long long suma=0;
bool czy=true;
while(N/=10)
{
pom*=10;
if(czy)
{
suma+=pom-pom/10;
}
czy=!czy;
}
if(czy)suma+=NT%pom+1+(NT/pom)*pom;
cout<<suma;
}
