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


void RemoveNode(ListNode** pHead, int data)
{
    if (pHead == NULL || *pHead == NULL)
    {
        return;
    }
    
    ListNode* removedNode = NULL;
    if ((*pHead)->data == data)
    {
        removedNode = *pHead;
        *pHead = (*pHead)->pNext;
    }
    else
    {
        ListNode* pNode = *pHead;
        while (pNode->pNext)
        {
            if (pNode->pNext->data == data)
            {
                removedNode = pNode->pNext;
                pNode->pNext = pNode->pNext->pNext;
            }
            else
            {
                pNode = pNode->pNext;
            }
        }
    }
    
    if (removedNode)
    {
        delete removedNode;
    }
}

