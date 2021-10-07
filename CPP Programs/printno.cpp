#include <iostream>
using namespace std;

int main() {    
    int number,i,m=0,flag=0;

   cout << "Enter an integer: ";
    cin >> number;

    cout << "You entered " << number;  

     m=number/2;  
  for(i = 2; i <= m; i++)  
  {  
      if(number % i == 0)  
      {  
          cout<<" ,Number is not Prime."<<endl;  
          flag=1;  
          break;  
      }  
  }  
  if (flag==0)  
      cout << " ,Number is Prime."<<endl; 
    return 0;
}
