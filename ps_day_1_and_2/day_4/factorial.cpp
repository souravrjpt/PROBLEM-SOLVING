#include <bits/stdc++.h>
using namespace std;

int fact(int num){
    if(num==0||num==1)
    return 1;
    else
    return fact(num-1)*num;
}

int main(){
    int num;
    cin>>num;
    cout<<fact(num);
    
}