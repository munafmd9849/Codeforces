#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        bool flag=false;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==67){
                flag=true;
            }
        }
        cout<<(flag?"Yes":"NO")<<"
";
    }
 
 
}