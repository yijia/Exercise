//
//  CountSort.cpp
//  exercise
//
//  Created by labuser on 6/22/14.
//  Copyright (c) 2014 labuser. All rights reserved.
//

#include "CountSort.h"


#define maxSize 100

int sPool[maxSize];
int sSort[maxSize];

void CountSort(int* array, int length)
{
    for (int i =0; i< length; i++)
    {
        sPool[array[i]] += 1;
    }
    
    for (int i = 1; i<maxSize; i++)
    {
        sPool[i] += sPool[i-1];
    }
    
    for(int i =0;i< length;i++)
    {
        sSort[--sPool[array[i]]] = array[i];
    }
    
    for(int i =0;i< length;i++)
    {
        array[i] = sSort[i];
    }
    
}
