//
//  String.cpp
//  exercise
//
//  Created by labuser on 6/23/14.
//  Copyright (c) 2014 labuser. All rights reserved.
//

#include "String.h"


CMyString::CMyString(char* pChar)
:
mData(pChar)
{
}

CMyString::~CMyString()
{
    delete[] mData;
    mData = NULL;
}

CMyString::CMyString(const CMyString& inOther)
{
    mData = new char[strlen(inOther.mData) +1];
    strcpy(mData, inOther.mData);
}


CMyString& CMyString::operator =(const CMyString& inOther)
{
    if (&inOther != this)
    {
        CMyString tempStr(inOther);
        char* pTemp = tempStr.mData;
        tempStr.mData = mData;
        mData = pTemp;
    }
    
    return *this;

}
