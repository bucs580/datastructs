#include "datastructs/tree.h"
#include <stddef.h>
#include <stdlib.h>

// TreeNode constructor/destructors

//
// @brief      { Allocate a new TreeNode and initialize its fields }
//
// @param[in]  d     { data value to be contained in the new node }
//
// @return     { pointer to a new TreeNode, whose data value is set, and whose
//             pointers are all initially set to NULL }
//
TreeNode *new_TreeNode(Data d) { return NULL; }

///
/// @brief      { Allocate a new TreeNode, and perform a deep copy of an
///               existing TreeNode. If tn is NULL, return a NULL pointer. }
///
/// @param      tn    { Pointer to the TreeNode to be copied }
///
/// @return     { A pointer to the newly copied TreeNode }
///
TreeNode *copy_TreeNode(TreeNode *tn) { return NULL; }

///
/// @brief      { Delete an existing TreeNode and free its memory. It is the
///               caller's responsibility to remove the node from the Tree
///               if applicable. }
///
/// @param      tn    { Pointer to the TreeNode to be deleted }
///
void del_TreeNode(TreeNode *tn) { return; }

// Tree constructor/destructors
//
// @return     { A pointer to a new Tree, whose root pointer is NULL because
//               the tree is empty}
//
Tree *new_Tree() { return NULL; }

///
/// @brief      { Allocate a new Tree, and perform a deep copy of an
///               existing Tree. If t is NULL, return a NULL pointer. }
///
/// @param      t     { Pointer to the Tree to be copied }
///
/// @return     { A pointer to the newly copied Tree }
///
Tree *copy_Tree(Tree *t) { return NULL; }

///
/// @brief      { Delete an existing Tree and free its memory.
///               If the tree is not empty, then properly delete each TreeNode
///               in the tree. }
///
/// @param      t     { Pointer to the Tree to be deleted }
///
void del_Tree(Tree *t) { return; }

// Tree properties

///
/// @brief      { Return the length of the longest path to any leaf node from
///               the root of the tree. The length is the number of edges,
///               not the number of nodes in that path. }
///
/// @param      t     { Pointer to the tree }
///
/// @return     { The height of the tree }
///
size_t height(Tree *t) { return 0; }

///
/// @brief      { The number of nodes in the tree, which is also its degree
///               plus one. The size of an empty tree is zero by definition. }
///
/// @param      t     { Pointer to the tree }
///
/// @return     { The size of the tree }
///
size_t size(Tree *t) { return 0; }

///
/// @brief      { The depth of the a node within the tree, which is the number
///               of edges between a node and the root of the tree.
///               The depth of the root node is zero by definition. }
///
/// @param      tn    { parameter_description }
///
/// @return     { description_of_the_return_value }
///
size_t depth(TreeNode *tn) { return 0; }

///
/// @brief      { Return whether a node is a leaf node. A node is a leaf node
///               if it has no children. }
///
/// @param      tn    { parameter_description }
///
/// @return     True if the specified tn is leaf, False otherwise.
///
bool isLeaf(TreeNode *tn) { return false; }

///
/// @brief      { Find the tree node with the maximum data value in the
///               subtree of a TreeNode. Note that the return is *not* the data
///               value itself! }
///
/// @param      tn    { Pointer to a TreeNode at the root of a subtree. }
///
/// @return     { Pointer to the TreeNode containing the maximum value. }
///
TreeNode *max(TreeNode *tn) { return NULL; }

///
/// @brief      { Find the tree node with the minimum data value in the
///               subtree of a TreeNode. Note that the return is *not* the data
///               value itself! }
///
/// @param      tn    { Pointer to a TreeNode at the root of a subtree. }
///
/// @return     { Pointer to the TreeNode containing the minimum value. }
///
TreeNode *min(TreeNode *tn) { return NULL; }

// Tree mutators/accessors

//
// @brief      { Insert a data value into the tree. If the value does not
//               exist, then a TreeNode will be created. If the value does
//               exist, then a TreeNode is not created, and a duplicate value
//               is not inserted. }
//
// @param      t     { The tree into which the data value will be inserted. }
// @param[in]  d     { The data value to be inserted. }
//
void insertData(Tree *t, Data d) { return; }

///
/// @brief      { Return a pointer to the TreeNode containing a given value. If
///               the value is not in the tree, return a NULL pointer. }
///
/// @param      t     { The tree to be searched }
/// @param[in]  d     { The data value to be searched. }
///
/// @return     { A pointer to the TreeNode containing the data value if it
///               exists, a NULL pointer if it does not exist. }
///
TreeNode *findData(Tree *t, Data d) { return NULL; }

///
/// @brief      { Remove a data value from the tree. The TreeNode containing
///               the data value is removed but not freed. It is the caller's
///               responsibility to delete the TreeNode. If the value does not
///               exist in the tree, the tree remains unchanged, and a null 
///               pointer is returned. }
///
/// @param      t     { The tree in which the data value may be contained }
/// @param[in]  d     { The data value to be removed }
///
/// @return     { A pointer to the TreeNode containing that data, now unlinked
///               from the tree. }
///
TreeNode *removeData(Tree *t, Data d) { return NULL; }

// Traversal Routines
// Implement these routines for 10 points bonus credit each!

///
/// @brief      { Walk the tree in preorder, printing the data value of each
///               node as it is walked with a space between each value:
///               1. Visit the current node
///               2. Recursively traverse the current node's left subtree.
///    			  3. Recursively traverse the current node's right subtree. }
///
/// @param      t     { The tree to be walked. }
///
void preorder(Tree *t) { return; }

///
/// @brief      { Walk the tree in inorder, printing the data value of each
///               node as it is walked with a space between each value:
///               1. Recursively traverse the current node's left subtree.
///               2. Visit the current node (in the figure: position green).
///               3. Recursively traverse the current node's right subtree. }
///
/// @param      t     { The tree to be walked. }
///
void inorder(Tree *t) { return; }

///
/// @brief      { Walk the tree in postorder, printing the data value of each
///               node as it is walked with a space between each value:
///               1. Recursively traverse the current node's left subtree.
///               2. Recursively traverse the current node's right subtree.
///               3. Visit the current node. }
///
/// @param      t     { The tree to be walked. }
///
void postorder(Tree *t) { return; }