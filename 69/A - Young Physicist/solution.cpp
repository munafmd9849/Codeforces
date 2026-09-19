#include <iostream>
using namespace std;
 
int main() {
    int t,x,y,z,sx=0,sy=0,sz=0;
    cin>>t;
    while(t--){
        cin>>x>>y>>z;
        sx+=x;
        sy+=y;
        sz+=z;
    }
    if(sx==0 && sy==0 && sz==0) cout<<"YES";
    else cout<<"NO";
    return 0;
}