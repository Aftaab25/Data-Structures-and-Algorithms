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
    vector<int> inorderTraversal(TreeNode* root) {
        if (!root) return {};
        vector<int> ans;

        stack<TreeNode*> st;
        TreeNode* curr = root;
        // st.push(curr);

        while(!st.empty() || curr != nullptr) {
            while(curr != nullptr) {
                st.push(curr);
                curr = curr->left;
            }
            
            curr = st.top();
            st.pop();
            ans.push_back(curr->val);

            curr = curr->right;
        }

        return ans;
    }
};

// [4,3,5,1,2]