#include <bits/stdc++.h>
using namespace std;

int fact(int n){
    if(n==0||n==1)
        return n;
    else 
    return fact(n-1)*n;

    
}

int main(){
 int num,sum=0,temp;
 cout<<"enter the number (x): ";
 cin>>num;
 for(int i=temp=0;i<=num;i++){
    if(i%2!=0)
 sum+=pow(-1,i)*temp/fact(i);
 }
 cout<<sum;

}