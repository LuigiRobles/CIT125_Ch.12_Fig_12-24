// CIT125 Intro to C++ Luigi Robles
// 08-01-2020 Summer Term
// Ch.12 pg.459 Fig.12-24
// Trythis17 Gets and displays order amounts

#include <iostream>
using namespace std;

//function prototype
void displayArray(int nums[][3], int numRows);

int main()
{
	//declare and initialize array
	int orders[4][3] = {0};

	//store data in the array
	for (int region = 0; region < 4; region +=1)
		for (int month = 0; month < 3; month += 1)
		{
			cout << "Region " << region + 1 
				<< ", Month " << month + 1
				<< " orders: ";
			cin >> orders[region][month]; //input orders data into array
		} //end for
	//end for

	//display the contents of the array
	displayArray(orders, 4); //function call
	return 0;
} //end of main function

//******function definitions
void displayArray(int nums[][3], int numRows)
{
	cout << endl << "Array contents: " << endl;
	for (int region = 0; region < numRows; region += 1)
	{
		cout << "Region " << region + 1
			<< ": " << endl;
		for (int month = 0; month < 3; month += 1)
			cout << "	Month " << month + 1
			<< ": " << nums[region][month]
			<< endl;
		//end for
	} //end for
} //end of displayArray function