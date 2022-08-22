#include <iostream>
using namespace std;
int main(void){
    // Your code here!
    int N=5;
    int m[5];
    int i;
    int min =10;
    int ans =0;
    for(i=0;i<N;i++)
    {
        cin >>m[i];
        if(m[i] % 10 > 0)
        {
            if(m[i]%10 <min)
            {
                min = m[i]% 10;
            }
            
            
        }
        if(m[i]%10 != 0)
        {
        m[i] = m[i] + 10-m[i]%10;
        }
        ans += m[i] ;
    }
    if(min==10)
    {
        min =10;
    }
    cout << ans  -10+min << endl;
    return 0;
    
}