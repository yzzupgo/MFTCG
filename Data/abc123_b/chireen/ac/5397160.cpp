#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <algorithm>
#include <array>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>

using namespace std;

int main() {
    int s[6],ans=0,m=10000;
    for(int i=0;i<5;i++){
        cin>>s[i];
        if(s[i]%10==0){
            ans=ans+s[i];
        }
        else {
            m=min(m,s[i]%10);
            ans=ans+10+(s[i]-s[i]%10);
            }
    }
    if(m==10000)m=10;
    ans=ans-10+m;
    cout<<ans<<endl;
    return 0;
}