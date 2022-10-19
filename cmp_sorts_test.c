/*****************************************************   
 * Author : Avia Avikasis                            *
 * Reviewer: Ahron                                   *
 * 10/07/2022                                        *
 * Description : sorts imlementation                 *
 *                                                   *
 *****************************************************/
#include <time.h>
#include <stdlib.h>
#include "cmp_sorts.h"

static int cmpfunc (const void * a, const void * b);

int main()
{
	int i = 0;
	int arr[5000] = {0};
	double run_time = 0;
	clock_t start = 0;
	
	
/*---------- BubbleSort test --------*/

	for(i = 0 ; i < 5000 ; ++i)
	{
		arr[i] = i % 15;
	}
	
	start = clock();
	BubbleSort(arr , 5000);
	run_time = (double)(clock() - start) / CLOCKS_PER_SEC;
	
	for(i = 0 ; i < 4999 ; ++i)
	{
		assert(arr[i] <= arr[i + 1]);
	}
	printf("\nBubbleSort success in : %f seconds\n" , run_time);
	
	for(i = 0 ; i < 5000 ; ++i)
	{
		arr[i] = i % 15;
	}
	start = clock();
	qsort(arr , 5000 , 4 , cmpfunc);
	run_time = (double)(clock() - start) / CLOCKS_PER_SEC;
	printf("\nqsort success in : %f seconds\n" , run_time);
	
	
	
	
/*---------- SelectionSort test --------*/

	for(i = 0 ; i < 5000 ; ++i)
	{
		arr[i] = i % 20;
	}
	
	start = clock();
	SelectionSort(arr , 5000);
	run_time = (double)(clock() - start) / CLOCKS_PER_SEC;
	
	for(i = 0 ; i < 4999 ; ++i)
	{
		assert(arr[i] <= arr[i + 1]);
	}
	printf("\nSelectionSort success in : %f seconds\n" , run_time);
	
	for(i = 0 ; i < 5000 ; ++i)
	{
		arr[i] = i % 20;
	}
	start = clock();
	qsort(arr , 5000 , 4 , cmpfunc);
	run_time = (double)(clock() - start) / CLOCKS_PER_SEC;
	printf("\nqsort success in : %f seconds\n" , run_time);
	
	
/*---------- InsertionSort test --------*/

	for(i = 0 ; i < 5000 ; ++i)
	{
		arr[i] = i % 32;
	}
	
	start = clock();
	InsertionSort(arr , 5000);
	run_time = (double)(clock() - start) / CLOCKS_PER_SEC;
	
	for(i = 0 ; i < 4999 ; ++i)
	{
		assert(arr[i] <= arr[i + 1]);
	}
	printf("\nInsertionSort success in : %f seconds\n" , run_time);
	
	for(i = 0 ; i < 5000 ; ++i)
	{
		arr[i] = i % 32;
	}
	start = clock();
	qsort(arr , 5000 , 4 , cmpfunc);
	run_time = (double)(clock() - start) / CLOCKS_PER_SEC;
	printf("\nqsort success in : %f seconds\n" , run_time);
	
	
	return 0;

}


static int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}












