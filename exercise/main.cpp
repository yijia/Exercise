                                                                                                                                            //
//  main.cpp
//  exercise
//
//  Created by labuser on 6/22/14.
//  Copyright (c) 2014 labuser. All rights reserved.
//

#include <iostream>
#include "QuickSort.h"
#include "insertSort.h"
#include "BubbleSort.h"
#include "CountSort.h"
#include "MergeSort.h"
#include "SubstiteuBlacnWith%20.h"

int main(int argc, const char * argv[])
{
    int array[] = {2,4,6,4,2,6,1,7,9,0};
    
    MergeSort(array, sizeof(array)/sizeof(int));
    //CountSort(array, sizeof(array)/sizeof(int));
    //BubbleSort(array, sizeof(array)/sizeof(int));
    //QuickSort(array, 0, sizeof(array)/sizeof(int)-1);
   // InsertSort(array,sizeof(array)/sizeof(int));
    
    
    char* str = "hellow owor ew";
    
    SubstitueBlank(str);
    return 0;
}

