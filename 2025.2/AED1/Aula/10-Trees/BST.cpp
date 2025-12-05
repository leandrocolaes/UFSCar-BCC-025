#include <iostream>

using namespace std;

struct TreeNode {
	int key;
	treeNode* left;
	treeNode* right;
	treeNode* p;
};

class bst{
private:
		treeNode root;
public:
	bst(){
		root.left = NULL;
		root.right = NULL;
		root.pai = NULL;
	};
	void treeInsert(int key){
		treeNode current = root;
		treeNode z;
		z.key = key;
		treeNode previous;
		while (current != NULL){
			previous = current;
			if (z.key < current.key){
				current = current.left;
			} else {
				current = current.right;
			}
		}
		z.pai = previous;
		if(previous == NULL){
			root = z;
		} else {
			if 
		}
	}
	treeNode treeMinimum() {
		treeNode current = root;
		while (root.left != NULL){
			current = current.left;
		}
		return current;
	}
	treeNode treeMaximum(){
		treeNode current = root;
		while (root.right != NULL){
			current = current.right;
		}
		return current;

	}
	treeNode treeSearchRec(int key, treeNode current = root){
		if ((current == NULL)||(current.key == key)){
			return current;
		}
		if (key < current.key){
			treeSearchRec(key, current.left);
		} else {
			treeSearchRec(key, current.right);
		}
	}
	treeNode treeSearch(int key, treeNode current = root){
		while((current != NULL) && (key != current.key)){
			if (key < current.key){
				current = current.left;
			} else {
				current = current.right;
			}
		}
		return node
	}
	treeNode treeSucessor(treeNode node){
		if(node.right !=) {
			treeNode vertice = treeMinimum(x.right);
		} else {
			vertice = node.pai;
			while ((vertice != NULL)&&(node = vertice.right)){
				node = vertice;
				vertice = vertice.pai
			}
			return vertice;
		}
	}
	treeNode treePredecessor(treeNode node){
		if (node.left != NULL){
			return treeMaximum(node.left);
		} else {
			Node* y = node;
			while( y != NULL && node == y.left){
				node = y;
				y = y.p;
			}
			return y; 
		}
	}
	void transplant(treeNode nodecut, treeNode node){
		if (nodecut.p == NULL){
			root = node;
		} else {
			if (nodecut == nodecut.p.left){
				nodecut.p.left = node;
				nodecut.right = NULL;
			} else {
				nodecut.p.right = node;
				nodecut.right = NULL;
			}
		}
		if (node != NULL){
			node.p = nodecut.p;
			nodecut.p = NULL;
		}
	}

	void 
};

int main () {

	return 0;
}
