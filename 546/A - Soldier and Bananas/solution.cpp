#include <iostream>
using namespace std;
 
int main(){
    int k,m,w;
    cin>>k>>m>>w;
    int total=k*w*(w+1)/2;
    if(total>m) 
    cout<<total-m;
    else
    cout<<0;
}