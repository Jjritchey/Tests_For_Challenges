#include <bits/stdc++.h>


//this is a solution for a possible code challenege where a user enters 2 inputs in this format "1432233 4"
//the second input will be used to swap the the first around by that amount. 
//so if the input is 62781 and the second input is 3 the output will be
//82627 basicailly moving the orginal first input to every third spot on the string



using namespace std;


int main()
{

	string input;                  //grabs the intput before a space
	int input2;                    //holds the second input, which is how far forward we will move
	string output;                 //holds the output

	cout << "Enter numbers: ";     //asking the user for the input bumbers, should be first input followed by a space and then second input

	cin >> input >> input2;        //grab the first input as a string and the second as an int

	for (int i = 0; i <= input.size(); i++)    //creating a loop which will go until it has gone thru the same amount of times as the size of the string
	{
		char a;                              //holds the char value for each iteration

		if ((i + input2) > input.size())          //if statement for when we need to wrap back to the start of the string [0]...
		{
			int j = (i + input2) - input.size();   //using variable j to hold the value of wrap
			a = input[j-1];                        //assigning a the new value for the string. (j-1) becuase we need to start at 0 and move up
		}
		else 
		{
			a = input[i + input2];                //assigning a when we don't need to wrap
	    }

		output.push_back(a);                   //assigning the char from one of the above statemnts to the final output stirng 
	}

	cout << output;              //printing the final value

	cout << "\n\n\n\n\n";

}