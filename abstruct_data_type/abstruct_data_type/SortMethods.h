#pragma once
class SortMethods
{
private:
	void swap(int arr[], int first_ind, int second_ind);
public:
	void BubbleSort(int arr[], int len);
	void quickSort(int arr[], int first_ind, int second_ind);
	bool isSorted(int arr[], int len);
};

