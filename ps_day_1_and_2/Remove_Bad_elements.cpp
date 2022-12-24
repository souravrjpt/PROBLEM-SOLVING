#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int num;
        cin>>num;
        int arr[num];
        for(int i=0;i<num;i++)
        cin>>arr[i];


       int max=arr[0];
       for(int i=0;i<num;i++)
       {
        if(arr[i]>max)
        max=arr[i];
       }
       int arr2[max]={0};
    for(int i=0;i<num;i++){
        arr2[arr[i]-1]++;
    }
    int max2=arr2[0];
    for(int i=0;i<max;i++){
        if(arr2[i]>max2)
        max2=arr2[i];
    }
  
    cout<<num-max2<<endl;
    }
}