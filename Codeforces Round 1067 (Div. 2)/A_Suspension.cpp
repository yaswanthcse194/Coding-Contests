#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main(){
    int a;
    cin>>a;
    for(int i=0;i<a;i++){
        int t,y,r;
        cin>>t>>y>>r;
        y/=2;
        if((y+r)>t) cout<<t<<endl;
        else cout<<(y+r)<<endl;
    }
    return 0;
}