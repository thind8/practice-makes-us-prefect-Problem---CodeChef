#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int proble_weeks[4];
    int problem=0;
    for(int i=0;i<4;i++){
        cin>>proble_weeks[i];
    }
    for(int i=0;i<4;i++){
        if(proble_weeks[i]>=10){
            problem++;

        }
    }
    cout<<problem<<"\n";
    return 0;
}