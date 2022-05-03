#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	const int NUM_PEOPLE = 5;
	vector<string> names;
	vector<int> weights;
	string nameInput;
	int weightInput;

	for (int i = 0; i < NUM_PEOPLE; i++)
	{
		cout << "Please enter a person's full name" << endl;
		getline(cin, nameInput);

		cout << "Please enter " << nameInput << "'s weight." << endl;
		cin >> weightInput;
		cin.get();  // consume newline character

		names.push_back(nameInput);
		weights.push_back(weightInput);
	}

	cout << endl << endl;

	for (int i = 0; i < NUM_PEOPLE; i++)
	{
		cout << names[i] << " weighs " << weights[i] << "lbs" << endl;
	}

	return 0;
}