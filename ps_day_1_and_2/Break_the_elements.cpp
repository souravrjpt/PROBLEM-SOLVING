#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
      int num;
      cin>>num;
      int arr[num];
      for (int i = 0; i < num; i++)
      {
        cin>>arr[i];
      }
      int even=0,odd=0;
      for (int  i = 0; i < num; i++)
      {
        if(arr[i]&1==1)
        odd++;
        else
        even++;

      }
    //   cout<<"odd "<<odd<<" "<<"even "<<even<<endl;
      if(odd>=even){
        cout<<even;
      }
      else
      cout<<odd*2;
      cout<<endl;
}
}