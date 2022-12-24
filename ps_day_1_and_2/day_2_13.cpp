#include <bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin>>num;
    int len=num*2-1;
    int arr[len][len],s=0,e=len-1;
    while(num!=0){
        for(int i=s;i<=e;i++)
        {
            for(int j=s;j<=e;j++){
                if(i==s||i==e||j==s||j==e){
                   arr[i][j]=num;
                }
            }
        }
        s++;e--;num--;
    }
    for(int i=0;i<=len-1;i++)
        {
            for(int j=0;j<=len-1;j++){
                cout<<arr[i][j];
            }
            cout<<endl;}
}


   

