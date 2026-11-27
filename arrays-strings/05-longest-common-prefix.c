
#include <stdio.h>
#include <string.h>

int main() {
    char *strs[] = {"flower", "flow", "flight"};
    int n = 3;
    int i = 0;

    while (strs[0][i] != '\0') {
        int j;
        for (j = 1; j < n; j++) {
            if (strs[j][i] != strs[0][i])
                break;
        }

        if (j < n)
            break;

        i++;
    }

    printf("Longest common prefix: %.*s\n", i, strs[0]);
    return 0;
}
