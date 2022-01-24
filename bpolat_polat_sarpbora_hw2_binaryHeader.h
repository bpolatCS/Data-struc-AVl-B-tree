#ifndef _HEADER_H
#define _HEADER_H

#include <iostream>

//   BST

template <class Comparable>
class BinarySearchTree;

template <class Comparable>
class BinaryNodeItem
{
    Comparable information;

    BinaryNodeItem  *left;
    BinaryNodeItem  *right;

    BinaryNodeItem( const Comparable & info, BinaryNodeItem *lt, BinaryNodeItem *rt )
    : information( info ), left( lt ), right( rt ) { }
            
};

template <class Comparable>
class BinarySearchTree;

template <class Comparable>
class BinaryNode
{
    BinaryNodeItem <Comparable> *items;

    BinaryNode  *left;
    BinaryNode  *right;

    BinaryNode(BinaryNodeItem <Comparable> *items, BinaryNode *lt, BinaryNode *rt )
    : items ( it ), left( lt ), right( rt ) { }
            
friend class BinarySearchTree<Comparable>;
};

template <class Comparable>
class BinarySearchTree
{
	public:
		explicit BinarySearchTree( const Comparable & notFound );
		BinarySearchTree( const BinarySearchTree & rhs );
		~BinarySearchTree();

		const Comparable & findMin() const;
		const Comparable & findMax() const;
		const Comparable & find( const Comparable & x ) const;
		bool isEmpty( ) const;
		void printTree( ) const;

		void makeEmpty( );
		void insert( const Comparable & x );
		void remove( const Comparable & x );

		const BinarySearchTree & operator=( const BinarySearchTree & rhs );

	private:
		BinaryNode<Comparable> *root;
		const Comparable ITEM_NOT_FOUND;

		const Comparable & elementAt( BinaryNode<Comparable> *t)  const;

		void insert( const Comparable & x,BinaryNode<Comparable> * & t) const;
		void remove( const Comparable & x,BinaryNode<Comparable> * & t) const;
		BinaryNode<Comparable> * findMin(BinaryNode<Comparable> *t) const;
		BinaryNode<Comparable> * findMax(BinaryNode<Comparable> *t) const;
		BinaryNode<Comparable> * find( const Comparable & x, BinaryNode<Comparable> *t) const;
		void makeEmpty( BinaryNode<Comparable> * & t) const;
		void printTree( BinaryNode<Comparable> *t) const;
		BinaryNode<Comparable> * clone( BinaryNode<Comparable> *t) const;
       

};

#include "Source.cpp"
#endif

