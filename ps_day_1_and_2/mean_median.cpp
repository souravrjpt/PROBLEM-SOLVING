#include <bits/stdc++.h>
using namespace std;

float mean(int arr[]){
    float sum=0;
    float ans;
    for(int i=0;i<5;i++)
    sum+=arr[i];
   return ans=sum/5;
}

int median(int arr[]){
    int point=5/2;
    return arr[point];
}

int main(){
    int arr[5]={3,4,5,7,8};
  float res= mean(arr);
    cout<<res<<endl;
    int res1=median(arr);
    cout<<res1;
}