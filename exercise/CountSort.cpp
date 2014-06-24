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
    
    int index = 0;
    for (int i = 0;i<maxSize;i++)
    {
        for (int j = 0;j<sPool[i];j++)
        {
            array[index] = i;
            index++;
        }
    }
}
