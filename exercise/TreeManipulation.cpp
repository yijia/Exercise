//
//  TreeManipulation.cpp
//  exercise
//
//  Created by labuser on 6/23/14.
//  Copyright (c) 2014 labuser. All rights reserved.
//

#include "TreeManipulation.h"



// self, left, right
void FrontOrderTraverseTree(BinaryTreeNode* treeNode)
{
    if (treeNode == NULL)
    {
        return;
    }
    
    // output data
    std::cout << treeNode->data;
    
    FrontOrderTraverseTree(treeNode->pLeft);
    FrontOrderTraverseTree(treeNode->pRight);
}

//left, self, right
void InOrderTraverseTree(BinaryTreeNode* treeNode)
{
    if (treeNode == NULL)
    {
        return;
    }
    
    FrontOrderTraverseTree(treeNode->pLeft);
    // output data
    std::cout << treeNode->data;
    
    FrontOrderTraverseTree(treeNode->pRight);
}


//left, right self
void BackOrderTraverseTree(BinaryTreeNode* treeNode)
{
    if (treeNode == NULL)
    {
        return;
    }
    
    FrontOrderTraverseTree(treeNode->pLeft);
    FrontOrderTraverseTree(treeNode->pRight);
    
    // output data
    std::cout << treeNode->data;
}

