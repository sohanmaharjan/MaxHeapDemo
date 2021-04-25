#include <iostream>
#include <string>
#include "BinaryMaxHeap.h"

using namespace std;

void main() 
{
	BinaryMaxHeap data;

	data.Insert(Number(22));
	data.Insert(Number(4));
	data.Insert(Number(24));
	data.Insert(Number(3));
	Number n1(1);
	data.Insert(n1);

	//NOTE doesn't really care about sorting, just min parents
	data.showHeap();
	//try get top player
	Number* maxNumber = data.ExtractMax();
	if (maxNumber != NULL)
		cout << "Highest Rank Player: " << maxNumber->integer << endl;
	else
		cout << "Heap must be empty!!!" << endl;

	cout << "Try deleting top player..." << endl;
	data.DeleteMax();
	maxNumber = data.ExtractMax();
	if (maxNumber != NULL)
		cout << "Highest Rank Player: " << maxNumber->integer << endl;
	else
		cout << "Heap must be empty!!!" << endl;

	cout << "Try deleting top player..." << endl;

	system("pause");
}

