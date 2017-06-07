/*
 *Steven Faulkner 
 *Dispalys "Fizz", "Buzz", or "Woof" depending
 * on if the number is divisible by 3 5 or 7
 */




#include<iostream>

using namespace std;



int main()
{

	cout << endl;

	//for loop to count fromo 1 to 100

	for(int i = 1; i <= 100; i++){			

	  //else if statements to determine remainder

	  if((i % 7 == 0 ) && (i % 5 == 0))
		cout << "BuzzWoof\t\t";
	  else if(( i % 7 == 0 ) && ( i % 3 == 0))
		cout  << "FizzWoof\t";
	  else if((i % 5 == 0 ) && ( i % 3 == 0 ))
		cout << "FizzBuzz\t\t";
	  else if ( i % 7 == 0)
		cout << "Woof\t\t";
	  else if( i % 5 == 0)
		cout << "Buzz\t\t";
	  else if( i % 3 == 0)
		cout << "Fizz\t\t";
	  else
		cout << i << "\t\t";

	  if( i  % 5 == 0 )
		cout << endl;
	  }




return 0;
}
