//
//  insertSort.cpp
//  exercise
//
//  Created by labuser on 6/22/14.
//  Copyright (c) 2014 labuser. All rights reserved.
//

#include "insertSort.h"

void InsertSort(int* array, int length)
{
    for (int i = 1; i < length; i++)
    {
        int compareValue = array[i];
        int insertPos = i;
        for (int j = i-1; j>=0 ;j--)
        {
            if (array[j] > compareValue)
            {
                array[j+1] = array[j];
                insertPos = j;
            }
            else
            {
                break;
            }
        }
        
        array[insertPos]= compareValue;
    }
}