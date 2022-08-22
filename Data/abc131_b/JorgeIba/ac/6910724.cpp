#include <bits/stdc++.h>
using namespace std;
int main()
{
int n, l, sumaTotal=0, sumaParcial=100000;
cin>>n>>l;
int array[n+1];
for (int i=1; i<=n; i++)
{
array[i]=l+i-1;
sumaTotal+=array[i];
sumaParcial=min( abs(array[i]) , abs(sumaParcial));
}
if ((sumaTotal<0)and(sumaParcial>0))
{
cout<<sumaTotal+sumaParcial;
}
else
{
cout<<sumaTotal-sumaParcial;
}
return 0;
}
