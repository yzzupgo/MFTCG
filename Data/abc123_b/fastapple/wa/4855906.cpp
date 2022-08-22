#include <bits/stdc++.h>

using namespace std;

int main() {

    int a, b, c, d, e;
    int sa, sb, sc, sd, se, mins;
    cin >> a >> b >> c >> d >> e;

    sa = a % 10;
    mins = sa;
    sb = b % 10;
    if(mins == 0){
        mins = sb;
    }else if( sb == 0){
        
    }else{
        mins = (sb < mins ? sb : mins);
    }
    
    sc = c % 10;
    if(mins == 0){
        mins = sc;
    }else if( sc == 0){
        
    }else{
        mins = (sc < mins ? sc : mins);
    }

    sd = d % 10;
    if(mins == 0){
        mins = sd;
    }else if( sd == 0){
        
    }else{
        mins = (sd < mins ? sd : mins);
    }

    se = e % 10;
    if(mins == 0){
        mins = se;
    }else if( se == 0){
        
    }else{
        mins = (se < mins ? se : mins);
    }

    a /= 10; 
    a *= 10;
    if(sa != 0) a += 10;
    b /= 10;
    b *= 10;
    if(sb != 0) b += 10;
    c /= 10;
    c *= 10;
    if(sc != 0) c += 10;
    d /= 10;
    d *= 10;
    if(sd != 0) d += 10;
    e /= 10;
    e *= 10;
    if(se != 0) e += 10;
    cout << a << " " << b << " " << c << " " << d << " " << e <<  " " << mins << endl;

    cout << (a + b + c + d + e) - (10 - mins) << endl;

    return 0;
}
