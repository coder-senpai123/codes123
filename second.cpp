#include<bits/stdc++.h>
using namespace std;
int main(){
    int a ;
    cin>>a ;
    for(int i = 0 ; i < a ; i++){
        cout<<a;
        for(int j = i ; j > 0 ; j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}