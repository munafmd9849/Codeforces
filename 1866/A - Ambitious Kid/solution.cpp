#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int n;
	cin>>n;
	int tem;
	cin>>tem;
	int mini=abs(0-tem);
	for(int i=0;i<n-1;i++){
	    cin>>tem;
	    mini=min(mini,abs(0-tem));
	}
	cout<<mini<<"
";
    return 0;
}