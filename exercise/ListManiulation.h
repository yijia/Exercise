//
//  ListManiulation.h
//  exercise
//
//  Created by labuser on 6/23/14.
//  Copyright (c) 2014 labuser. All rights reserved.
//

#ifndef __exercise__ListManiulation__
#define __exercise__ListManiulation__

#include <iostream>
#include "CommonFiles.h"

void AddNode(ListNode** pHead, int data);

void RemoveNode(ListNode** pHead, int data);

void ReverseOutputListByReverTheList(ListNode* pHead);

void ReverseOutputListByUsingList(ListNode* pHead);

void ReverseOutputListByUsingCallstack(ListNode* pHead);

void ReverseList(ListNode** pHead);

void ReverseListByUsingRecursion(ListNode** pHead);

ListNode* FindMiddleNodeOfList(ListNode* pHead);

ListNode* MergeTwoSortedList(ListNode* pFirst, ListNode* pSecond);

#endif /* defined(__exercise__ListManiulation__) */
