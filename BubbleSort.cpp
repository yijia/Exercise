//
//  BubbleSort.cpp
//  exercise
//
//  Created by labuser on 6/22/14.
//  Copyright (c) 2014 labuser. All rights reserved.
//

#include "BubbleSort.h"


void BubbleSort(int* array, int length)
{
    for (int i = length-1; i>=0; i--)
    {
        for (int j = 0; j < i;j++)
        {
            if (array[j] > array[j+1])
            {
                int t = array[j+1];
                array[j+1] = array[j];
                array[j] = t;
            }
        }
    }
}