#include "Queue.h"
#include "SortMethods.h"

void main() 
{
	
	
	int arr[] = { 4, 1, 2, 10, 11};
 	int len = 5;
	SortMethods sort;
	/*printf("Source array:\n");
	for (int i = 0; i < len; i++) {
		printf("%d	", arr[i]);
	}
	printf("\n");*/
	long t0 = clock();

	/*sort.BubbleSort(arr, len);*/
	sort.quickSort(arr, 0, len - 1);
	if (sort.isSorted(arr, len)) {
		printf("Arr is sorted!!!\n");
	}
	else {
		printf("Arr is NOT sorted!!!\n");
		for (int i = 0; i < len; i++) {
			printf("%d\n", arr[i]);
		}
	}

	long t1 = clock();
	printf("Time of sorting = %.5f sec\n", (t1 - t0) / (float)CLOCKS_PER_SEC);

	/*for (int i = 0; i < len; i++) {
		printf("%d	", arr[i]);
	}*/
	/*Queue queue;
	queue.enQueue(5);
	printf("%d\n", queue.size());
	bool b = queue.isEmpty();
	std::cout << std::boolalpha << b;*/

}