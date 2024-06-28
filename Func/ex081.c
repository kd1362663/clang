#include <stdio.h>
int MAX(int a[], int size);
int min(int a[], int size);
main()
{
	int data[8] = { 6,10,8,2,9,5,1,7 };
	printf("Å‘å’l=%d\n", MAX(data, 8));
	printf("Å¬’l=%d\n", min(data, 8));
}
int MAX(int a[], int size)
{
	int i, max;
	for (i = 0, max = 0; i < size; i++) {
		if (max < a[i]) {
			max = a[i];
		}
	}
	return max;
}


int min(int a[], int size)
{
	int i, min;
	for (i = 0, min = 999; i < size; i++) {
		if (min > a[i]) {
			min = a[i];
		}
	}
	return min;
}



