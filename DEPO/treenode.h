#ifndef TREENODE_H
#define TREENODE_H

template < class NODETYPE> class Tree; // forward Declaration

template< class NODETYPE >
class TreeNode{
    friend class Tree< NODETYPE >;
public:
    TreeNode( const NODETYPE &d)
    : leftPtr( 0 ), data( d ), rightPtr( 0 ) { }
     NODETYPE getData() const { return data;}

private:
    TreeNode< NODETYPE > *leftPtr;
    NODETYPE data;
    TreeNode data;
    TreeNode< NODETYPE > *rightPtr;

};
#endif
