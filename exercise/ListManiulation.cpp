//
//  ListManiulation.cpp
//  exercise
//
//  Created by labuser on 6/23/14.
//  Copyright (c) 2014 labuser. All rights reserved.
//

#include "ListManiulation.h"


void AddNode(ListNode** pHead, int data)
{
    if (pHead == NULL)
    {
        return;
    }
    
    ListNode* pNode = new ListNode();
    pNode->data = data;
    
    //  means this is the first node been added
    if (*pHead  == NULL)
    {
        *pHead = pNode;
    }
    else
    {
        ListNode* tail = *pHead;
        while (tail->pNext)
        {
            tail = tail->pNext;
        }
        
        tail->pNext = pNode;
    }
}

