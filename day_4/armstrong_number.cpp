#include <bits/stdc++.h>
using namespace std;

int armstrong(int num)
{
    int rem,sum=0,digit=0;
    int temp=num;
    while(num!=0){
      
        digit++;
          num/=10;
    }
    while(num!=0){
        rem=num%10;
        sum+=pow(rem,digit);
        num/=10;
    }
    if(temp==sum)
    cout<<sum;
}

int main(){
    int start,end;
    cout<<"enter the range: "<<endl<<"starting number: ";
    cin>>start;
    cout<<"enter the end number: ";
    cin>>end;
    for(int i=start;i<=end;i++)
    armstrong(i);
}