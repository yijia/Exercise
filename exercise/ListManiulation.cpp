//
//  ListManiulation.cpp
//  exercise
//
//  Created by labuser on 6/23/14.
//  Copyright (c) 2014 labuser. All rights reserved.
//

#include "ListManiulation.h"
#include <vector>

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

void ReverseList(ListNode** pHead)
{
    if (pHead == NULL || *pHead == NULL)
    {
        return;
    }
    ListNode* pCur, *pNext, *pNextNext;
    pCur = *pHead;
    pNext = (*pHead)->pNext;
    pCur->pNext = NULL;
    
    while (pNext)
    {
        pNextNext = pNext->pNext;
        pNext->pNext = pCur;
        pCur = pNext;
        pNext = pNextNext;
    }
    
    *pHead = pCur;
}


void ReverseOutputListByReverTheList(ListNode* pHead)
{
    if (pHead == NULL)
    {
        return ;
    }
    
    
    ReverseList(&pHead);
    
    // output the list
}

void ReverseOutputListByUsingList(ListNode* pHead)
{
    ListNode* node = pHead;
    
    std::vector<int> datas;
    
    while(node)
    {
        datas.push_back(node->data);
        node = node->pNext;
    }
    
    // output the list by using pop_back();
    datas.pop_back();
}

void ReverseOutputListByUsingCallstack(ListNode* pHead)
{
    if (pHead == NULL)
    {
        return;
    }
    ReverseOutputListByUsingCallstack(pHead->pNext);
    
    //output pHead->pData;
    
}














