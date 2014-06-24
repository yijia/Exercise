//
//  Fibonacci.cpp
//  exercise
//
//  Created by labuser on 6/23/14.
//  Copyright (c) 2014 labuser. All rights reserved.
//

#include "Fibonacci.h"


int Fibonacci(int n)
{
    if (n <=0)
    {
        return 0;
    }
    else if (n ==1)
    {
        return 1;
    }
    else return Fibonacci(n-1) + Fibonacci(n-2);
}


int FibonacciWithoutRecursion(int n)
{
    int array[2] = {0,1};
    
    if (n<2) return array[n];
    
    for (int i = n; i>=2; i--)
    {
        int sum = array[0] + array[1];
        array[0] = array[1];
        array[1] = sum;
    }
    
    return array[1];
}

int FrogStep(int n)
{
    if (n == 1)
    {
        return 1;
    }
    if (n == 2)
    {
        return 2;
    }
    
    return FrogStep(n-1) + FrogStep(n-2);
}