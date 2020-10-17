//find the min and max of five numbers

#include <iostream>
using namespace std;

//prototypes go here
void display(int minimum, int maximum);
void checkMax(int in, int m);
void checkMin(int in, int m);


int main()
{
	//variables
	int min;                        //holds the current min value found
	int max;                       //holds the current max value found
	int counter = 0;               //number of times looped
	int input;                      //input value read in from the user

	//begin processing
	while (counter < 5)
	{
		//read in a value from the user
		cout << "Enter a value: ";
		cin >> input;

		//validate input value here

		if (counter == 0)    //first time in the loop
		{
			min = input;
			max = input;
		}
		//check for new min or max value
		checkMin(input, min);
		checkMax(input, max);

		counter++;

	}

	//display the results

	display(min, max);

		return 0;
}



//***************************
//check for a new min value
//***************************

void checkMin(int in, int m)
{
	if (in < m)
		m = in;
}

//****************************
//check for a new maximum value
//****************************

void checkMax(int in, int m)
{
	if (in > m)
		m = in;
}

//***********************************
//display the results
//***********************************

void display(int minimum, int maximum)
{
	cout << "the minimum is: " << minimum << endl
		<< "the maximum is: " << maximum << endl << endl;
}