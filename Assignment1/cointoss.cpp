/*
 * Steven Faulkner
 * program to simulate coin toss
 */


#include<iostream>
#include<cstdlib>
#include<ctime>



using namespace std;

int coinFlip(void);
bool realistic(int num, int side);


int main(){

int num, heads = 0, tails = 0, randNumber = 0;

bool sim;

  srand(static_cast <unsigned int>(time(0)));


  cout << "Enter the number of coin tosses: ";
  cin >> num;

  if (num < 10){
	cerr << "Number of times must be greater than 10";
	return 0;
  }

  int i = 0;	

  while (i < num){

  /*
 *this loop should call a user function that will use random function 
 *to return a heads or tails, printing to the screen and keeping count of total
 *for each
 */
	randNumber = coinFlip();

	if(randNumber == 0){

		cout << "Heads\t";
		heads++;
	} else{

		cout << "Tails\t";
		tails++;
	}
	
	if( i % 10 == 9)

		cout << endl;		

	i++;
  }	

  cout  << endl;

  cout << "Number of heads: " << heads<< endl;
  cout << "Number of tails: "<<tails << endl;

  sim = realistic(num, heads);

	if(sim == true){	

		cout << "This simulation is realsitic";
	}else{

		cout <<"This simulation is not realstic";

	}
return 0;

}

int coinFlip(void){

	return rand() % 2;
}

bool realistic(int num, int side){

	double result;

	result  = (static_cast <double>(side) / num);

		if (result >= .45 && result <= .55){

			return true;
		}

	return false;

}
