#include <bits/stdc++.h>
using namespace std;

int fact(int n){
    if(n==0||n==1)
        return n;
    else 
    return fact(n-2)*(n-1)*n;

    
}

int main(){
 int num,sum=0;
 cout<<"enter the number: ";
 cin>>num;
 for(int i=0;i<=num;i++){
  sum+=fact(i);
 }
 cout<<sum;

}