//
//  QuickSort.cpp
//  exercise
//
//  Created by labuser on 6/22/14.
//  Copyright (c) 2014 labuser. All rights reserved.
//

#include "QuickSort.h"




void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b=t;
}

int Partition(int* array, int left, int right)
{
    if (left == right)
    {
        return left;
    }
    
    int smallIndex = left-1;
    
    for (int i = left; i< right; i++)
    {
        if (array[i] < array[right])
        {
            smallIndex++;
            if (i != smallIndex)
            {
                swap(&array[i], &array[smallIndex]);
            }
        }
    }
    
    smallIndex++;
    swap(&array[smallIndex], &array[right]);
    
    return smallIndex;
}

void QuickSort(int* array, int left, int right)
{
    
    int middle = Partition(array, left, right);
    
    if (middle > left)
    {
        QuickSort(array, left, middle-1);
    }
    
    if (right > middle)
    {
        QuickSort(array, middle+1, right);
    }
}
