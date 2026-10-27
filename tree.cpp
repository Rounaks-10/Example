#include <iostream>

struct Node {
	int data;
	Node* left;
	Node* right;
};

void dfs(const Node* node) {
	if (node == nullptr) {
		return;
	}

	std::cout << node->data << ' ';
	dfs(node->left);
	dfs(node->right);
}

int main() {
	Node four{4, nullptr, nullptr};
	Node five{5, nullptr, nullptr};
	Node two{2, &four, &five};
	Node three{3, nullptr, nullptr};
	Node root{1, &two, &three};

	std::cout << "DFS traversal (preorder): ";
	dfs(&root);
	std::cout << '\n';
	std::cout<<"Completed Graph Traversal";

	return 0;
}
