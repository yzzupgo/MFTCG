#include<bits/stdc++.h>
#include<stdlib.h>
#include<iostream>
#include<string>
#include<math.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
typedef long double ld;
#define test int t; cin>>t; while(t--)
#define cube(x) (x*x*x)
#define sqr(x) (x*x)
#define sc1(x) scanf("%lld",&x);
#define sc2(x,y) scanf("%lld %lld", &x, &y)
#define scf1(x) scanf("%lf",&x)
#define scf2(x,y) scanf("%lf %lf", &x, &y)
#define srev reverse(s.begin(),s.end())
#define sortstr sort(s.begin(), s.end());
#define gtl(x) getline(cin, (x))
#define PI acos(-1)
#define MIN 9999999
#define Faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
Faster;
int x, y ;
cin >> x >> y ;
if(y % 2 == 0 || 2*x <= y || (y <= 4*x))
cout << "Yes" << endl;
else
cout << "No" << endl;
return 0;
}
