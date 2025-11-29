#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main(){
    int a;
    cin>>a;
    vector<int> arr;
    for(int i=0;i<a;i++){
        int b;
        cin>>b;
        for(int j=0;j<b;j++){
            int c;
            cin>>c;
            arr.push_back(c);
        }
    }
    sort(arr.begin(),arr.end());    
    int o=0;
    int e=0;
    int count=0;
    for(int i=0;i<arr.size()-1;i++){
        if(arr[i]==arr[i+1]){
            count++;
        }
        else if(arr[1]!=arr[i+1]){
            if(count%2==0){
                e+=2;
            }
            else{
                o++;
            }
            count=0;
        }
        cout<<o+e<<endl;
    }
    return 0;
}