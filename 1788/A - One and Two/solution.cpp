#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int c=0;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            if(temp==2){
                c++;
            }
            a[i]=temp;
        }
        if(c&1){
            cout<<"-1"<<"
";
        }
        else{
            c/=2;
            for(int i=0;i<n;i++){
                if(a[i]==2){
                    c--;
                }
                if(c==0){
                    cout<<i+1<<"
";
                    break;
                }
            }
 
        }
    }
    return 0; 
}