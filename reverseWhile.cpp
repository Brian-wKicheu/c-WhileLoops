#include <iostream>
using namespace std;

int main(){

    int num = 2343, reversedNum =0;
    /*reverseNum=0*10=0
    loop throuhg using while loop
    then 2343%10 remainder =3, take remainder + reversedNum = 0+3=3 thus reversedNum =3
    since modula deals with whole num it truncates decimal place and we remain with 234
    3*10=30
    234%10 remainder= 4, now take 30+4= 34 and the system....
    */

   while (num !=0)
   {
       reversedNum *= 10;
       //int  lastDigt += num % 10
       reversedNum += num % 10;
       num /=10;
   }
   cout << "Reversed Number is: "<< reversedNum;
   //modula of 10 are 9,8,7,6,5,4,3,2,1
}