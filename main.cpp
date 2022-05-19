#include <iostream>
#include <string>
#include <conio.h>

#include "inverse.cpp"

using namespace std;

template <typename T>
void print(T* array, int size) {

	for (int i = 0; i < size; i++)
	{
		if (i) cout << " <> ";
		cout << array[i];
	}
}

int main()
{
	int size;

	while (true) {
		system("@cls||clear");

		try {
			cout << "Enter array number: ";
			cin >> size;

			if (size < 1 || size > 30) throw 1;
			break;
		}
		catch (int code) {
			cout << endl << endl << "The array size must be greater than 1 and less than 30" << endl;
			_getch();

			continue;
		}
	}

	int type;

	while (true) {
		system("@cls||clear");

		try {
			cout << "Select array type:" << endl;

			cout << "1. int" << endl;
			cout << "2. float" << endl;
			cout << "3. double" << endl;
			cout << "4. char" << endl << endl;

			cout << "Array type: ";

			cin >> type;

			if (type < 1 || type > 4) throw 1;
			break;

		}
		catch (int code) {
			cout << endl << endl << "Type is not correct" << endl;
			_getch();

			continue;
		}

	}


	switch (type)
	{
	case 1: {

		int* arr = new int[size];

		for (int i = 0; i < size; i++) arr[i] = rand() % 30; 

		cout << "Before inversion:" << endl;
		print<int>(arr, size);

		inverse<int>(arr, size);

		cout << endl << "After inversion:" << endl;
		print<int>(arr, size);

		break;
	}

	case 2: {

		float* arr = new float[size];

		for (int i = 0; i < size; i++) arr[i] = (float)(rand() % 300) / 100;

		cout << "Before inversion:" << endl;
		print<float>(arr, size);

		inverse<float>(arr, size);

		cout << endl << "After inversion:" << endl;
		print<float>(arr, size);

		break;
	}

	case 3: {

		double* arr = new double[size];

		for (int i = 0; i < size; i++) arr[i] = (float)(rand() % 300) / 100;

		cout << "Before inversion:" << endl;
		print<double>(arr, size);

		inverse<double>(arr, size);

		cout << endl << "After inversion:" << endl;
		print<double>(arr, size);

		break;
	}

	case 4: {

		char* arr = new char[size];
		for (int i = 0; i < size; i++) arr[i] = rand() % 24 + 'A';

		cout << "Before inversion:" << endl;
		print<char>(arr, size);

		inverse<char>(arr, size);

		cout << endl << "After inversion:" << endl;
		print<char>(arr, size);

		break;
	}

	}

	_getch();

}
