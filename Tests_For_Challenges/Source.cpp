#include <bits/stdc++.h>



using namespace std;


int main()
{

	string input;
	int input2;
	string output;

	cout << "Enter numbers: ";

	cin >> input >> input2;

	for (int i = 0; i <= input.size(); i++)
	{
		char a;

		if ((i + input2) > input.size())
		{
			int j = (i + input2) - input.size();
			a = input[j-1];
		}
		else 
		{
			a = input[i + input2];
	    }

		cout << a;

	}


	cout << "\n\n\n\n\n";

}