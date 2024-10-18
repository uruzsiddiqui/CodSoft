#include<bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cout<<"Enter the Number: "<<endl;
  cin>>n;
  srand(time(0));   
  int random  = rand() % 10;
  if(n == random){
  cout<<"number is found"<<endl;
  }  
 while(n != random){
    if(n > random){
    cout<<"Number is Large Enter the Number again "<<endl;
      cin>>n;
    } else if(n < random){
    cout<<"Number is Small Enter the Number Again "<<endl;
      cin>>n;
    } if(n == random){
    cout<<"Number is found "<<endl;
       break;
    }
}
  return 0;
}