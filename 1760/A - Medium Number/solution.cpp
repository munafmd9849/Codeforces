#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin>>n;
  while(n--){
    int a,b,c;
    cin>>a>>b>>c;
    int mid;
    if((a<b && b<c ) || (c<b && b<a )){
      mid=b;
    }
    else if((a<c && c<b) || (b<c && c<a)){
      mid=c;        
    }        
    else{            
      mid=a;        
    }        
    cout<<mid<<"\n";
  }     return 0; 
}
