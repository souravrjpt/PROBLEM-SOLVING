#include <bits/stdc++.h>
using namespace std;

int perfect(int n){
    int sum=0;
  for(int i=1;i<=n/2;i++)
  {
    if(n%i==0)
    sum+=i;
  }
    if(n==sum)
    return 1;
    else
    return 0;
}



int main(){
    int num;
    cout<<"enter the number till which you want to find a perfect number from 0 ";
    cin>>num;

    for(int i=1;i<=num;i++){
        if(perfect(i)==1){
            cout<<i<<endl;
        }
    }
return 0;
}

