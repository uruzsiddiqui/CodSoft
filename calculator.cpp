#include <bits/stdc++.h>
using namespace std;
int main()
{ 
   int firstNumber, secondNumber,operation;
   cout<<"enter the first number"<<endl;
   cin>>firstNumber;
   cout<<"enter the second number"<<endl;
   cin>>secondNumber;
   cout<<"Enter the operations"<<endl;
   cout<<"Case 1 for ( + )"<<endl;
   cout<<"Case 2 for ( - )"<<endl;
   cout<<"Case 3 for ( * )"<<endl;
   cout<<"Case 4 for ( / )"<<endl;
   cout<<"Enter the operation"<<endl;
   cin>>operation;
   switch(operation) {
     case 1:
        cout<<"Addition is: "<<firstNumber+secondNumber<<endl;
       break;
     case 2:
        cout<<"Subtraction is: "<<firstNumber-secondNumber<<endl;
       break;
     case 3:
        cout<<"Multiplication is: "<<firstNumber*secondNumber<<endl;
       break;
     case 4:
        cout<<"Division is: "<<firstNumber/secondNumber<<endl;
       break;
     default:
       cout<<"Enter valid case"<<endl;
       break;
   }
    return 0;
}