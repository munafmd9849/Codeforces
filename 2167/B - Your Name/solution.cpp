#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s,t;
        cin>>s>>t;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        cout<<(s==t?"Yes
":"No
");
    }
 
}