#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int num;
        cin>>num;
        if(num<=25)
        cout<<1;
        else if(num%25==0)
        cout<<num/25;
        else 
        cout<<num/25+1;
        cout<<endl;
    }
}