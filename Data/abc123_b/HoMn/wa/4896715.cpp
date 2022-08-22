#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<map>
#include<set>
#include<queue>
#include<stack>
#include<limits>
#include<iomanip>
#include<cmath>
#include<climits>

using namespace std;

typedef long long ll;
typedef pair<int,int> P;

const int mod=1e9+7;

int main(){
    vector<int> a(5);
    int ans=0,Min=INT_MAX;
    for(int i=0;i<5;i++){
        cin >> a[i];
        if(a[i]%10==0){
            ans+=a[i];
        }else{
            ans+=a[i]-a[i]%10+10;
            Min=min(Min,a[i]%10);
        }
    }
    cout << ans+Min-10 << endl;
    return 0;
}
