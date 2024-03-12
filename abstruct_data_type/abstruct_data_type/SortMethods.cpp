#include "SortMethods.h"

void SortMethods::swap(int arr[], int first_ind, int second_ind)
{
	if (first_ind != second_ind) {
		int additionalNum = arr[first_ind];
		arr[first_ind] = arr[second_ind];
		arr[second_ind] = additionalNum;
	}
}

void SortMethods::BubbleSort(int arr[], int len)
{
	for (int i = 0; i < len - 1; i++) {
		for (int j = (len - 1); j > i; j--) {
			// если текущий элемент меньше предыдущего
			if (arr[j] < arr[j - 1]) {
				// меняем их местами
				swap(arr, j, j - 1);
			}
		}
	}
}

void SortMethods::quickSort(int arr[], int first_ind, int second_ind)
{
	int left = first_ind;
	int right = second_ind;
	int pivot = arr[(left + right) / 2];
	int temp;

	while (left <= right)
	{
		while (arr[left] < pivot)
			left++;
		while (arr[right] > pivot)
			right--;
		if (left <= right)
		{
			temp = arr[left];
			arr[left] = arr[right];
			arr[right] = temp;
			left++;
			right--;
		}
	}
	if (right > first_ind)
		quickSort(arr, first_ind, right);
	if (left < second_ind)
		quickSort(arr, left, second_ind);
}

bool SortMethods::isSorted(int arr[], int len)
{
	for (int i = 1; i < len; i++) {
		if (arr[i] < arr[i - 1]) {
			return false;
		}
	}
	return true;
}

