//
//  PrintFrom1ToN.cpp
//  exercise
//
//  Created by labuser on 6/24/14.
//  Copyright (c) 2014 labuser. All rights reserved.
//

#include "PrintFrom1ToN.h"


bool addOneToChar(char* singleChar)
{
    if (*singleChar == '9')
    {
        *singleChar = '0';
        return true;
    }
    else
    {
        *singleChar += 1;
        return false;
    }
}

bool AddOneIntoNumberStr(char* numberStr, int n)
{

    bool carry = false;
    int i = n-1;
    for (; i>=0;)
    {
        carry = addOneToChar(&numberStr[i]);
        if (carry)
        {
            i--;
        }
        
        if (i <0 || !carry)
        {
            break;
        }
    }
    
    
    return carry;
}


void PrintFrom1ToN(int n)
{
    char* numberStr = new char[n+1];
    
    numberStr[n] = '\0';
    for (int i =0;i<n;i++)
    {
        numberStr[i] = '0';
    }
    
    while (!AddOneIntoNumberStr(numberStr, n))
    {
        std::cout << numberStr<<std::endl;
    }
    
    delete[] numberStr;
}

void PrintNumberInternal(char* numberStr, int curPos, int n)
{
    for (int i =0;i<10;i++)
    {
        numberStr[curPos] = '0' + i;
        if (curPos != n-1)
        {
            PrintNumberInternal(numberStr, curPos +1, n);
        }
        else
        {
            std::cout << numberStr<<std::endl;
        }
        
    }
}

void PrintFrom1ToNWithRecursion(int n)
{
    char* numberStr = new char[n+1];
    numberStr[n] = '\0';
    for (int i =0;i<n;i++)
    {
        numberStr[i] = '0';
    }
    
    PrintNumberInternal(numberStr,0,n);
}





