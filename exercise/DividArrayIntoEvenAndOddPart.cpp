//
//  DividArrayIntoEvenAndOddPart.cpp
//  exercise
//
//  Created by labuser on 6/25/14.
//  Copyright (c) 2014 labuser. All rights reserved.
//

#include "DividArrayIntoEvenAndOddPart.h"


typedef bool (*Condition)(int);


int Partition1(int* array, int begin, int end, Condition inCondition)
{
    if (inCondition == NULL)
    {
        return -1;
    }
    
    int evenIndex = -1;
    for (int i = begin; i<= end; i++)
    {
        if (inCondition(array[i]))
        {
            evenIndex++;
            if (evenIndex != i)
            {
                int temp = array[i] ^ array[evenIndex];
                array[i] = temp ^ array[i];
                array[evenIndex] = temp ^ array[evenIndex];
            }
        }
    }
    
    return evenIndex;
}

bool isEven(int number)
{
    return number % 2 == 0;
}
int DividArrayIntoEvenAndOddPart(int* array, int length)
{
    int index = Partition1(array, 0, length-1, isEven);

    return index;
}
