#include <bits/stdc++.h>
using namespace std;
bool bad(int a,int b){
    return a==b || 7-a==b;
}
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        
        int count=0;
        for(int i=1;i<n;i++){
            if(bad(a[i-1],a[i])){
                int chosen=-1;
                for (int j = 1; j <= 6; j++) {
                    if (bad(a[i-1], j)) continue;
                    if (i+1<n && bad(j, a[i+1])) continue;
                    chosen = j;
                    break;
                }
                
                if (chosen == -1) {
                    for (int j = 1; j <= 6; j++) {
                        if (!bad(a[i-1], j)) {
                            chosen = j;
                            break;
                        }
                    }
                }
                a[i]=chosen;
                count++;
            }
        }
        cout<<count<<"
";
        
    }
 
 
}
 