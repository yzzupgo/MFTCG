#include<bits/stdc++.h>
using namespace std;

int main(void){

    int A,B,C,D,E;
    vector<int> a(5);
    for (int i = 0; i < 5; ++i) {
        cin>>a[i];
    }

    int min=10, min_index=0;
    for (int i = 0; i < 5; ++i) {
        if(min >= a[i]%10 && (a[i]%10 != 0)){
            min = a[i] % 10;
            min_index = i;
        }
    }
    int ans=0;
    for (int i = 0; i < 5; ++i) {
        if(i != min_index){
            if((10-a[i]%10) == 10) ans+= a[i];
            else ans += a[i]+(10-a[i]%10);
        }
        else ans += a[i];
    }
    cout<<ans<<endl;

    return 0;
}