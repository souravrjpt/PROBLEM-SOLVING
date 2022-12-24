#include<bits/stdc++.h>
using namespace std;

int th(int n,char A,char B,char C){
    if(n==0)
    return 1;
    th(n-1,A,C,B);
    cout<<n<<" is moving from "<<<<" to "<<<<endl;
    th(n-1,C,B,A);
}

int main(){
  int n;
  cin>>n;
 char a,b,c;
  th(n,a,b,c);
}