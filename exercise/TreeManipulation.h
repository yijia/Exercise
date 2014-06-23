//
//  TreeManipulation.h
//  exercise
//
//  Created by labuser on 6/23/14.
//  Copyright (c) 2014 labuser. All rights reserved.
//

#ifndef __exercise__TreeManipulation__
#define __exercise__TreeManipulation__

#include <iostream>
#include "CommonFiles.h"

void FrontOrderTraverseTree(BinaryTreeNode* treeNode);
void InOrderTraverseTree(BinaryTreeNode* treeNode);
void BackOrderTraverseTree(BinaryTreeNode* treeNode);

void FrontOrderTraverseTreeWithoutCallstack(BinaryTreeNode* treeNode);
void InOrderTraverseTreeWithoutCallstack(BinaryTreeNode* treeNode);
void BackOrderTraverseTreeWithoutCallstack(BinaryTreeNode* treeNode);

void TraverseTreeInWidth(BinaryTreeNode* treeNode);


BinaryTreeNode* RebuildBinaryTreeFromFrontOrderAndInOrder(int* frontOrderArray, int* inOrderArray,int length);

#endif /* defined(__exercise__TreeManipulation__) */
