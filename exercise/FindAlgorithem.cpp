//
//  FindAlgorithem.cpp
//  exercise
//
//  Created by labuser on 6/23/14.
//  Copyright (c) 2014 labuser. All rights reserved.
//

#include "FindAlgorithem.h"


static
int FindByDivideByHalf(int* array, int left, int right,  int data)
{
    if (array == NULL || left < 0 || right < left)
    {
        return -1;
    }
    int index = -1;
    int middle = -1;
    
    while(left <= right)
    {
        middle = (left + right)/2;
        if (array[middle] < data)
        {
            left = middle+1;
        }
        else if (array[middle] > data)
        {
            right = middle -1;
        }
        else
        {
            return middle;
        }
    }
    
    return index;
}

int FindByDivideByHalf(int* array, int length, int data)
{
    return FindByDivideByHalf(array, 0, length-1, data);
}

static
void swap(int* , int*)
{
}

static
int Partition(int* array , int begin, int end)
{
    int number = array[end];
    
    int smallIndex = begin-1;
    for(int i = begin; i< end; i++)
    {
        if (array[i]< number)
        {
            smallIndex++;
            if (i != smallIndex)
            {
                swap(&array[i], &array[smallIndex]);
            }
        }
        smallIndex++;
        swap(&array[smallIndex], &array[end]);
    }
    
    return smallIndex;
}


int FindKthNumber(int* array, int length, int K)
{
    if (length < K)
        return -1;
    
    int index = -1;
    int begin = 0;
    int end = length -1;
    while (index != K)
    {
        index = Partition(array, begin, end);
        
        if (index < K)
        {
            begin = index+1;
        }
        else if(index > K)
        {
            end = index -1;
        }
    }
    
    return index;
}

