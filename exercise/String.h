//
//  String.h
//  exercise
//
//  Created by labuser on 6/23/14.
//  Copyright (c) 2014 labuser. All rights reserved.
//

#ifndef __exercise__String__
#define __exercise__String__

#include <iostream>

class CMyString
{
public:
    CMyString(char* pChar);
    ~CMyString();
    CMyString(const CMyString& inOther);
    
    CMyString& operator =(const CMyString& inOther);
private:
    char* mData;
};


#endif /* defined(__exercise__String__) */
