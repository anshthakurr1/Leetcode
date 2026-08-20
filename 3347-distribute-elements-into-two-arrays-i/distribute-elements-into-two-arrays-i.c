/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* resultArray(int* nums, int numsSize, int* returnSize) {
    int *list1=(int*)malloc(numsSize*sizeof(int));
    int *list2=(int*)malloc(numsSize* sizeof(int));
    int *result=(int*)malloc(numsSize* sizeof(int));

    int n1=0;
    int n2=0;
    list1[n1++]=nums[0];
    list2[n2++]=nums[1];

    for(int i=2;i<numsSize;i++)
    {
        if(list1[n1-1]>list2[n2-1])
        {
            list1[n1++]=nums[i];
        }
        else
        {
            list2[n2++]=nums[i];
        }
    }
    int k=0;

    for(int i=0;i<n1;i++)
    {
        result[k++]=list1[i];
    }
    for(int i=0;i<n2;i++)
    {
        result[k++]=list2[i];
    }
    *returnSize=numsSize;
    free(list1);
    free(list2);
    return result;
}