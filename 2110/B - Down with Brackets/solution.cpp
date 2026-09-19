#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int cb=0;
        int ans=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                cb++;
            }
            else{
                cb--;
            }
            if(cb==0){
                ans++;
            }
            
        }
        if(ans>1){
            cout<<"YES"<<"
";
        }
        else{
            cout<<"NO"<<"
";
        }
    }
    return 0;
 
}
 
 
 
 