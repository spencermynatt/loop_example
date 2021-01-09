#include <iostream>
using namespace std;



int position = 0;
char choice;

int main()
{



//system("cls");



while(choice != 'x')
{

  cout << "write r to make * go right, x for exit" << endl;
cin>> choice;

if(choice == 'r')




  {

   ++position;
while(position++ < 2)
{
cout << " "; //it will print space
//add one to position
//this loop will only print once but won't do it everytime because position eventually turns to three and then it needs to start moving backwards to go forward.
    }

int new_position = 0;
 new_position = position; //variable copy, just subtracting the position once and printing something

while(new_position !=  0  )
{

cout << " ";
--new_position;
}


cout << "*"<< endl;


  }

}



 cout << "end of program" << endl;




}







