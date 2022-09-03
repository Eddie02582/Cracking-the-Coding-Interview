# Trees and Graphs



## Type of Tree

### Binary Tree vs. Binary Search Tree

Binary Search Tree 就是所有左邊的數字小於等於右邊的數字
<img src = "binary search tree.PNG">



### Complete Binary Trees

Complete Binary Trees是一棵Binary Tree，其中每一層都被完全填滿，除了最後一層,最後一層被填充的必須是從左到右填充
<img src = "complete binary trees.PNG">

### Full Binary Trees

Full Binary Trees是Binary Tree 一種，其中每個節點都有零個或兩個子節點。也就是說，沒有節點有一個子節點。
<img src = "full binary trees.PNG">

### Perfect Binary Trees
A perfect binary tree is one that is both full and complete
<img src = "perfect binary trees.PNG">


## Binary Tree Traversal


### In-Order Traversal(<a href= "https://leetcode.com/problems/binary-tree-inorder-traversal/">Leetcode 94. Binary Tree Inorder Traversal</a>)

```c++
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int>ans;
    vector<int> inorderTraversal(TreeNode* root) {
        if (root == NULL)
            return {};   
        inorderTraversal(root->left);
        ans.push_back(root->val);
        inorderTraversal(root->right); 
        return ans;
        
    }
   
};
```

### In-Order Traversal(<a href= "https://leetcode.com/problems/binary-tree-inorder-traversal/">Leetcode 94. Binary Tree Inorder Traversal</a>)

```c++
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int>ans;
    vector<int> inorderTraversal(TreeNode* root) {
        if (root == NULL)
            return {};   
        inorderTraversal(root->left);
        ans.push_back(root->val);
        inorderTraversal(root->right); 
        return ans;
        
    }
   
};
```

### Pre-Order Traversal(<a href= "https://leetcode.com/problems/binary-tree-preorder-traversal/">Leetcode 144. Binary Tree Preorder Traversa</a>)
Pre-order traversal visits the current node before its child nodes (hence the name "pre-order").
```c++
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

```

### Post-Order Traversal(<a href= "https://leetcode.com/problems/binary-tree-postorder-traversal/">Leetcode 145. Binary Tree Postorder Traversal</a>)
Post-order traversal visits the current node after its child nodes (hence the name "post-order").
```c++
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

```