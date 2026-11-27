
#include <stdio.h>

int main() {
    int nums[] = {0, 1, 0, 3, 12};
    int n = 5, pos = 0;

    for (int i = 0; i < n; i++) {
        if (nums[i] != 0) {
            int temp = nums[pos];
            nums[pos] = nums[i];
            nums[i] = temp;
            pos++;
        }
    }

    printf("After moving zeroes: ");
    for (int i = 0; i < n; i++)
        printf("%d ", nums[i]);

    printf("\n");
    return 0;
}
