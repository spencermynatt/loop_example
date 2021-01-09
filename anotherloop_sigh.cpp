#include <iostream>
using namespace std;
int main() {

string space = " ";

char choice;
int how_long = 2;
int position = 0;

while(choice != 'a')
{

cout << "enter r to make the star go right" << endl;

cin >> choice;
if(choice == 'r')
{
    ++position; //0 + 1 = 1
    while( position++ < how_long)
        //while 1+1 which is 2, < 2, print " "
    {
        //position++ processes the statement first then increments it
        //++position increments value first then processes it
        //this loop increases the position to three even when it's saying while it's less than 2
        //because position++ is still 1... the ++ after the variable increments only after the expression is over with.
        //therefore, position loops until it equals variable how long which is 2.
        //Once position equals 2, it prints the space and finally increases by 1, which is three, at the end of the program.


     //prints the space
      cout << space;

    }


    //now position equals 3

    int new_position = 0;
    new_position = position; //new position now equals 3
    while(new_position!= 0) // while 3 does not equal 0,
    {

        cout << " "; //print space

	--new_position; //then subtract 1, changing the value of new_position to 2

	};
	//this while loop will now print 3 spaces

cout<< "*" << endl;



}


}










};
