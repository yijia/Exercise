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



void AddTwoNumber(int a, int b)
{
    bool negative = false;
    char oper = '+';
    int left , right;
    if ( (a > 0 && b > 0) || (a<0 && b<0))
    {
        left = a > 0 ? a : -a;
        right = b > 0 ? b : -b;
        negative = a >0;
    }
    else
    {
        negative = a+b > 0;
        if (negative)
        {
            left = b; right = a;
        }
        else
        {
            left = a; right = b;
        }
        oper = '-';
    }
    
    //char* leftStr =
    //char* rightStr =
    
    //BNxbnm'mxAddTwoNumber(leftStr, rightStr;
        
}

class HalfCharArray
{
public:
    HalfCharArray(int n)
    {
        mLength  = n;
        mCharStr = new unsigned char[(mLength+1)/2];
        memset(mCharStr, 0, (mLength+1)/2);
    }
    
    ~HalfCharArray()
    {
        delete[] mCharStr;
    }
    
    int GetNumberFromIndex(int index)
    {
        int mainIndex = index/2;
        int highBit = index%2;
        
        int mixedNumber = mCharStr[mainIndex];
        
        if (highBit)
        {
            return (mixedNumber & 0xf0) >> 4;
        }
        else
        {
            return mixedNumber & 0x0f;
        }
    }
    
    void SetNumberAtIndex(int index, int number)
    {
        int mainIndex = index/2;
        int highBit = index%2;
        
        int mixedNumber = mCharStr[mainIndex];
        if(highBit)
        {
            mixedNumber  &= 0x0f;
            mixedNumber  ^= (number << 4);
        }
        else
        {
            mixedNumber  &= 0xf0;
            mixedNumber  ^= number;
        }
        mCharStr[mainIndex] = mixedNumber;
    }
    
    void print()
    {
        bool zeroInFront = true;
        for (int i = mLength-1;i>=0;i--)
        {
            int number = GetNumberFromIndex(i);
            if (number != 0 || !zeroInFront)
            {
                zeroInFront = false;
                std::cout<< number;
            }
        }
        
        std::cout<<std::endl;

    }
private:
    HalfCharArray(const HalfCharArray&);
    HalfCharArray& operator = (const HalfCharArray&);
    
    unsigned char* mCharStr;
    int mLength;
};

void PrintInternal(HalfCharArray& array, int step)
{
    if (step < 0)
    {
        array.print();
        return;
    }
    
    for (int i = 0;i<10; i++)
    {
        array.SetNumberAtIndex(step, i);
        PrintInternal(array, step-1);
    }
}

void PrintFrom1ToNOneCharForTwoNumber(int n)
{
    HalfCharArray array(n);
    PrintInternal(array, n-1);
}

 


