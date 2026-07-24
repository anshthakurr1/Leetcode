/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* intersection(int* nums1, int nums1Size,
                  int* nums2, int nums2Size,
                  int* returnSize) {

    int maxSize = nums1Size < nums2Size ? nums1Size : nums2Size;
    int *result = (int*)malloc(maxSize * sizeof(int));

    *returnSize = 0;

    for (int i = 0; i < nums1Size; i++) {
        for (int j = 0; j < nums2Size; j++) {

            if (nums1[i] == nums2[j]) {

                // Check if nums1[i] is already in result
                int duplicate = 0;

                for (int k = 0; k < *returnSize; k++) {
                    if (result[k] == nums1[i]) {
                        duplicate = 1;
                        break;
                    }
                }

                if (!duplicate) {
                    result[*returnSize] = nums1[i];
                    (*returnSize)++;
                }

                break;
            }
        }
    }

    return result;
}