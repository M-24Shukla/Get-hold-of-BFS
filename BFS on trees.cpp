#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left, *right;
    TreeNode (int v) {
        val = v;
        left = right = NULL;
    }
};

void bfs(TreeNode *root) {
    queue <TreeNode *> q;
    q.push(root);
    int depth = 0;
    while (!q.empty()) {
        int c = q.size();
        while (c--) {
            TreeNode* curr = q.front();
            q.pop();
            if (curr -> left) q.push(curr -> left);
            if (curr -> right) q.push(curr -> right);
        }
        depth++;
    }
}

int main() {
    TreeNode *root = new TreeNode(5);
    root -> left = new TreeNode(3);
    root -> right = new TreeNode(6);
    root -> left -> left = new TreeNode(2);
    root -> left -> right = new TreeNode(4);
    root -> right -> right = new TreeNode(9);
    return 0;
}
