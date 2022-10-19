#include <stdio.h> 
#include "cmp_sorts.h"

void Swap(int *arr , int x , int y);
void BubbleSort(int *arr , size_t size);
void InsertionSort(int *arr , size_t size);
void SelectionSort(int *arr , size_t size);


void Swap(int *arr , int x , int y)
{
	int temp = arr[x];
	arr[x] = arr[y];
	arr[y] = temp;
}

void BubbleSort(int *arr , size_t size)
{
	int swapped = 1;
	int i = 0;
	
	while(1 == swapped)
	{
		swapped = 0;
		for (i = 0 ; i < (int)size - 1 ; ++i)
		{
			if(arr[i] > arr[i + 1])
			{
				Swap(arr , i , i + 1);
				swapped = 1;
			}
		}
	}
}


void InsertionSort(int *arr , size_t size)
{
	int i = 1;
	int j = 0;
	int temp = 0;
	
	for( ; i < (int)size ; ++i)
	{
		j = i - 1;
		temp = arr[i];
		
		while(j >= 0 && arr[j] > temp)
		{
			arr[j + 1] = arr[j];
			--j;
		}
		
		arr[j + 1] = temp;
	}
}


void SelectionSort(int *arr , size_t size)
{
	int i = 0;
	int j = 0;
	int min_index = 0;
	
	for( ; i < (int)size ; ++i)
	{
		min_index = i;
		
		for(j = i + 1 ; j < (int)size ; ++j)
		{
			if (arr[j] < arr[min_index])
			{
				min_index = j;
			}
		}
		Swap(arr , i , min_index);
	}
}



































