#include<iostream>
using namespace std;



// Task 1
template<class T>
class BNode {
public:
	T data;
	BNode* left, * right;
	BNode(T d)
	{
		data = d;
		left = right = nullptr;
	}
};
//Task 2
template<class T>
class BST {
	BNode<T>* root;
public:
	BST()
	{
		root = nullptr;
	}

	void insert(BNode<T>*& root, T value)
	{


		BNode<T>* temp = new BNode<T>(value);
		if (root == NULL)
		{
			root = temp;
		}
		else
		{
			if (value < root->data)
			{
				if (root->left == NULL)
				{
					root->left = temp;
				}
				else
				{
					insert(root->left, value);
				}


			}
			else
			{
				if (root->right == NULL)
				{
					root->right = temp;
				}
				else
				{
					insert(root->right, value);
				}


			}
		}
	}
	void display(BNode<T>* root)
	{
		if (root == NULL)
		{
			return;
		}
		display(root->left);
		cout << root->data << " ";
		display(root->right);
	}
	BNode<T>* getRoot()
	{
		return root;
	}
	void inorder(BNode<T>* curr)
	{
		if (curr == NULL)
		{
			return;
		}
		inorder(curr->left);
		cout << curr->data << " ";
		inorder(curr->right);
	}

	void preorder(BNode<T>* curr)
	{
		if (curr == NULL)
		{
			return;
		}
		cout << curr->data << " ";
		preorder(curr->left);
		preorder(curr->right);
	}
	void postorder(BNode<T>* curr)
	{
		if (curr == NULL)
		{
			return;
		}

		postorder(curr->left);
		postorder(curr->right);
		cout << curr->data << " ";
	}
	

	bool search(BNode<T>* curr, T val)
	{
		if (curr == NULL)
		{
			return false;
		}

		if (curr->data == val)
		{
			return true;
		}

		if (val < curr->data)
		{
			return search(curr->left, val);
		}
		else
		{
			return search(curr->right, val);
		}
	}
};

int main() 
{

    return 0;
}
