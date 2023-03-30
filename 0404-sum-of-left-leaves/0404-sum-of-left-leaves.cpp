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
    int sumOfLeftLeaves(TreeNode* root,char fromWhere){
    int result=0;
        
    if(root->left==nullptr &&root->right==nullptr &&fromWhere=='L')
        return root->val;
    if(root->left==nullptr &&root->right==nullptr &&fromWhere=='R')
        return 0;

    if(root->left==nullptr )
                result+= sumOfLeftLeaves(root->right,'R');
    else if(root->right==nullptr )
        result+= sumOfLeftLeaves(root->left,'L');
        else
         result+= sumOfLeftLeaves(root->left,'L')+sumOfLeftLeaves(root->right,'R');
    return result;
        
    }
    int sumOfLeftLeaves(TreeNode* root) {

        return sumOfLeftLeaves(root,'R');

    }
};