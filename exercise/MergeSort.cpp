//
//  MergeSort.cpp
//  exercise
//
//  Created by labuser on 6/22/14.
//  Copyright (c) 2014 labuser. All rights reserved.
//

#include "MergeSort.h"


void Merge(int* array, int left, int middle, int right)
{
    int leftSize = middle -left+1;
    int rightSize = right - middle;
    int totalSize = right -left +1;
    
    int* leftTempCache = new int[leftSize+1];
    int* rightTempCache = new int[rightSize+1];
    
    
    
    for (int i = 0; i< leftSize; i++)
    {
        leftTempCache[i] = array[i + left];
    }
    leftTempCache[leftSize] = 0x7fffffff;
    for (int i=0; i<rightSize; i++)
    {
        rightTempCache[i] = array[i+middle+1];
    }
    rightTempCache[rightSize] = 0x7fffffff;
    
    
    int leftIndex = 0;
    int rightIndex =0;
    for (int i=0;i< totalSize; i++)
    {
        if (leftTempCache[leftIndex] < rightTempCache[rightIndex])
        {
            array[i+left] = leftTempCache[leftIndex];
            leftIndex++;
        }
        else
        {
            array[i+left] = rightTempCache[rightIndex];
            rightIndex++;
        }
    }
    
    
    delete[] leftTempCache;
    delete[] rightTempCache;
}

void MergeSort(int* array, int left, int right)
{
    if (left >=right)
    {
        return;
    }
    
    int middle = (left + right)/2;
    
    MergeSort(array, left, middle);
    MergeSort(array, middle+1, right);
    
    Merge(array, left, middle, right);
}

void MergeSort(int* array , int length)
{
    MergeSort(array, 0, length-1);
}
