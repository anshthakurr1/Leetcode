/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** zigzagLevelOrder(struct TreeNode* root, int* returnSize,
                       int** returnColumnSizes) {
    *returnSize = 0;
    *returnColumnSizes = NULL;

    if (root == NULL)
        return NULL;

    int **result = malloc(2000 * sizeof(int *));
    *returnColumnSizes = malloc(2000 * sizeof(int));

    struct TreeNode* q[20000];
    int front = 0, rear = 0;
    int dir = 1;

    q[rear++] = root;

    while (front < rear) {
        int n = rear - front;

        result[*returnSize] = malloc(n * sizeof(int));
        (*returnColumnSizes)[*returnSize] = n;

        for (int i = 0; i < n; i++) {
            struct TreeNode* temp = q[front++];

            int index;
            if (dir == 1)
                index = i;
            else
                index = n - 1 - i;

            result[*returnSize][index] = temp->val;

            if (temp->left)
                q[rear++] = temp->left;

            if (temp->right)
                q[rear++] = temp->right;
        }

        (*returnSize)++;
        dir = !dir;
    }

    return result;
}