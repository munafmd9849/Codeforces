#include <bits/stdc++.h>
using namespace std;
 
 
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n+1];
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        
        
        //start 
        
        vector<bool> visited(n+1,false);
        bool flag=true;
        
        for(int i=1;i<=n;i++){
            if(visited[i]) continue;
            
            vector<int> index;
            int x=i;
            while(x<=n && !visited[x]){
                visited[x]=true;
                index.push_back(x);
                x*=2;
            }
            
            vector<int> vals;
            for(int idx:index){
                vals.push_back(a[idx]);
            }
            sort(index.begin(),index.end());
            sort(vals.begin(),vals.end());
            
            if(vals!=index){
                flag=false;
            }
        }
        cout<<(flag?"Yes":"NO")<<"
";
        
    }
 
 
}