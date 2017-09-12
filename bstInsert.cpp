/*
Problem: https://www.hackerrank.com/challenges/binary-search-tree-insertion/problem
Solutions: https://www.hackerrank.com/challenges/binary-search-tree-insertion/forum

The iterative solution is pretty difficult to read. 
However, it can be improved by applying Linus's double pointer technique.
More on this technique: https://www.youtube.com/watch?v=o8NPllzkFhE&t=866s

The technique improves code readability by eliminating null checks.

To Babeltime, I choose this piece of code to show that I have good understanding of pointers.

*/

struct node
{
	int data;
	node* left;
	node* right;
};

node * insert(node * root, int value) {
	node ** curr = &root;
	// find the right place
	while (*curr)
	{
		if (value > (*curr)->data) curr = &(*curr)->right;
		else curr = &(*curr)->left;
	}
	// insert
	*curr = new node();
	(*curr)->data = value;
	(*curr)->left = (*curr)->right = 0;

	return root;
}