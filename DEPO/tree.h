#ifndef TREE_H
#define TREE_H

#include <iostream>
#include <cassert>
#include "treenode.h"

using std::endl;

template<class NODETYPE >
class Tree{
public:
    Tree();
    void instertNode( const NODETYPE &);
    void preOrderTraversal() const;
    void inOrderTraversal() const;
    void postOrderTraversal() const;
private:
    TreeNode< NODETYPE > *rootPtr;
    //utility functions
    void insertNodeHelper( TreeNode < NODETYPE > **, const NODETYPE &);
    void preOrderHelper( TreeNode<NODETYPE> * ) const;
    void postOrderHelper( TreeNode<NODETYPE> *) const;

};
template< class NODETYPE > 
Tree< NODETYPE >::Tree() { rootPtr = 0; } 
template< class NODETYPE > 
void Tree< NODETYPE >::insertNode( const NODETYPE &value ) 
57 { insertNodeHelper( &rootPtr, value ); } 
// This function receves a pointer to a pointer so the 
// pointer can be modified.
template< class NODETYPE >
void Tree < NODETYPE >::instertNodeHelper( 
    TreeNode< NODETYPE > **ptr, const NODETYPE & value)
    if( *ptr == 0)






#endif