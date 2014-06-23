//
//  SubstiteuBlacnWith%20.cpp
//  exercise
//
//  Created by labuser on 6/23/14.
//  Copyright (c) 2014 labuser. All rights reserved.
//

#include "SubstiteuBlacnWith%20.h"


void SubstitueBlank(char*& pString)
{
    if(pString == NULL)
    {
        return;
    }
    
    size_t originalLength = strlen(pString);
    size_t newLength = originalLength;
    char* pChar = pString;
    while (*pChar != '\0')
    {
        if (*pChar == ' ')
        {
            newLength += 2;
        }
        pChar++;
    }
    
    if (newLength != originalLength)
    {
        pChar = pString;
        char* newStr = new char[newLength+1];
        newStr[newLength] = '\0';
        char* pNewChar = newStr;
        while(*pChar != '\0')
        {
            if (*pChar == ' ')
            {
                *pNewChar = '%';
                *(++pNewChar) = '2';
                *(++pNewChar) = '0';
            }
            else
            {
                *pNewChar = *pChar;
            }
            pNewChar++;
            pChar++;
        }
        
        pString = newStr;
    }
}
