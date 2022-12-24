#include<bits/stdc++.h>
using namespace std;

  int prime(int num){
   
    // return arr[e-s];
    
      int flag;
        // for(int i=s;i<=e;i++){
           flag=0;
          for (int i = 2; i<num;i++)
          {
           if(num%i==0)
          {
          flag++;
          break;
          }
          else
          flag;
          }
          if(flag==0)
        // cout<<num<<endl;
        return (num); 
        // }
        
     
  }


  int main(){
    int start,end;
    cout<<"enter the range for finding prime numbers: "<<endl;
    cout<<"enter the starting number: ";
    cin>>start;
    cout<<"enter the last number: ";
    cin>>end;

     
  for(int i=start;i<=end;i++)
  {
    
    cout<<prime(i)<<endl;
   
   }
  
    
    
    
    
    }