#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
bool comp (ll a , ll b){
    int ma = a% 10;
    int mb = b% 10;
    if (ma > mb )return true ;
    return false ;
}

int main(){
   vector < ll > v (5);
   vector < ll > a ;
   vector < ll > b;


   for ( ll i =0 ; i < 5 ; i++){
       cin >> v[i];

       if (v[i] % 10 == 0){
            a.push_back(v[i]);
       }

       else {
            b.push_back(v[i]);
       }
   }

   sort (b.begin() , b.end(), comp );

   ll res =0;

   for ( ll i =0 ; i <(ll)a.size() ; i++ ){
        res+= a[i];
   }


    if (b.size() != 0){
        for (ll i = 0; i < (ll)b.size()-1 ; i++){
            while (b[i]%10 != 0){
                b[i]++;
            }
        }
    }

   if (! b.empty()){
        for(ll i=0 ; i<(ll)v.size() ;i++){
            res+= b[i];
        }
   }
   cout << res << endl;

    return 0;
}
