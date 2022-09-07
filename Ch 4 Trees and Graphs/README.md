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

## Graphs

```c++
class Graph
{
public:
	int V;	// number of vertices
	vector<int> *adj;  //adjacency list 
	Graph(int V);
	void addEdge(int x, int y);	
};

// Constructor
Graph::Graph(int V)
{
	this->V=V;
	this->adj = new vector<int>[V];
}

// add a directed edge from x to y
void Graph::addEdge(int x, int y){
	adj[x].push_back(y);
}

int main(){
	
    Graph g(6);	
    g.addEdge(5, 2);
    g.addEdge(5, 0);
    g.addEdge(4, 0);
    g.addEdge(4, 1);
    g.addEdge(2, 3);
    g.addEdge(3, 1);

/*	
	Test graph :

	0 <---4---->1
	^ 			^
	|			|
	|			|
    5---->2---->3 

*/
```
pythob 使用字典相對簡單
```python 
from collections import defaultdict  
class Graph:  
    def __init__(self): 
        # default dictionary to store graph 
        self.graph = defaultdict(list) 
    
    # to add an edge to graph 
    def addEdge(self,u, v):     # to add an edge to graph 
        self.graph[u].append(v)  
```

如果是string

```c++
class Node{
    public:
        string name;
        vector<Node*> adj;  
        Node(string name);
        void addEdge(Node* node);	 
};

Node::Node(string name)
{
	this->name=name;	
}

void Node::addEdge(Node* node)
{
	adj.push_back(node);
}


class Graph
{
    public:	
    	vector<Node*> adj;  //adjacency list 
    	Graph();
    	void addNode(Node* node);
};
Graph::Graph()
{

}

// add a directed edge from x to y
void Graph::addNode(Node* node){
	adj.push_back(node);
}




/*	
	Test graph :

	a <---c---->b
	^ 			^
	|			|
	|			|
    d---->e---->f 

*/

int main()
{
    Node *a = new Node("a");
    Node *b = new Node("b");
    Node *c = new Node("c");
    Node *d = new Node("d");
    Node *e = new Node("e");
    Node *f = new Node("f");
    c->addEdge(a);
    c->addEdge(b);
    f->addEdge(b);
    e->addEdge(f);
    d->addEdge(e);
    d->addEdge(a);
    Graph graph;
    graph.addNode(a);
    graph.addNode(b);
    graph.addNode(c);
    graph.addNode(d);
    graph.addNode(e);
    graph.addNode(f);
    return 0;
}
```










