//
//  CommonFiles.h
//  exercise
//
//  Created by labuser on 6/23/14.
//  Copyright (c) 2014 labuser. All rights reserved.
//

#ifndef __exercise__CommonFiles__
#define __exercise__CommonFiles__

#include <iostream>


struct ListNode
{
    ListNode()
    :
    data(-1),
    pNext(NULL)
    {
        
    }
    int data;
    ListNode* pNext;
};

struct BinaryTreeNode
{
    BinaryTreeNode()
    :
    data(0),
    pLeft(NULL),
    pRight(NULL)
    {
    }
    int data;
    BinaryTreeNode* pLeft;
    BinaryTreeNode* pRight;
};

#endif /* defined(__exercise__CommonFiles__) */
