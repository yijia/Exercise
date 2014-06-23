//
//  FindLastKnode.cpp
//  exercise
//
//  Created by labuser on 6/23/14.
//  Copyright (c) 2014 labuser. All rights reserved.
//

#include "FindLastKnode.h"


ListNode* FindLastKNode(ListNode* pHead, int K)
{
    if (pHead == NULL || K <=0 )
        return NULL;
    
    ListNode* pKNode = NULL;
    
    
    ListNode* pFirst = pHead;
    
    int firstMove = K-1;
    while (firstMove >0 && pFirst && pFirst->pNext)
    {
        pFirst= pFirst->pNext;
        firstMove--;
    }
    
    if (firstMove == 0)
    {
        ListNode* pKNode = pHead;
        while(pFirst && pFirst->pNext)
        {
            pFirst = pFirst->pNext;
            pKNode = pKNode->pNext;
        }
    }
    
    return pKNode;
}
