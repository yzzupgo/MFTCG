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
sumaParcial=min( (array[i]) , (sumaParcial));
}
cout<<sumaTotal<<" "<<sumaParcial;
return 0;
}
