#include <iostream>
using namespace std;


//since do while test if the conditin is true or false it is applied in pin setting programme
//to determmine no of trials if not correct you are blocked
int main(){
    int usersPin = 1234, pin =1234, errorCount =0;

    do
    {
       cout << "Enter pin: ";
      
       if(pin != usersPin)
          errorCount++;
    } while (errorCount <3 && pin != usersPin);
    if (errorCount <3)
    {
        cout << "You have succefully entered correct pin.\n Loading ...";
    }else{
        cout << "Pin Blocked";
    }
    
    
}