#pragma once
#include <iostream>
#include <cstdlib>
#include <vector>
#include <iterator>
#include "Number.h"

using namespace std;

class BinaryMaxHeap
{
public:
	vector<Number> heap;
	int leftChildIndex(int parent);
	int rightChildIndex(int parent);
	int parentIndex(int child);

	void heapifyup(int index);
	void heapifydown(int index);

	void Insert(Number element);
	void DeleteMax();
	Number* ExtractMax();
	void showHeap();
	int Size();

};
