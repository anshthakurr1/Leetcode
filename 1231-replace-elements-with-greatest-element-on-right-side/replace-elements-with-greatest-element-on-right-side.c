/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* replaceElements(int* arr, int arrSize, int* returnSize) {
    int maxi=-1;
    for(int i = arrSize-1;i>=0;i--)
    {
        int curr=arr[i];
        arr[i]=maxi;

        if(curr>maxi)
        {
            maxi=curr;
        }
    }
    *returnSize=arrSize;
    return arr;
}