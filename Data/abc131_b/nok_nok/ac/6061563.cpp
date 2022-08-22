#include<bits/stdc++.h>
using namespace std ;
#define ll long long int
#define pb push_back
#define mp make_pair
#define pii pair <int , int >
#define pll pair < ll , ll >
int main(){
ios_base::sync_with_stdio(false) ;
cin.tie(NULL) ;
int n , l ;
cin >> n >> l ;
int tot = n*l + (n*(n-1))/2 ;
int mn = 100000000, ans ;
for(int i = 1 ; i <= n ; i++){
if(mn > abs(l + i - 1)){
mn = abs(l + i - 1) ;
ans = l + i - 1 ;
}
}
cout << tot - ans ;
}
