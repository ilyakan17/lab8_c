#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "8.h"

int main() {
    int total_str, i;
    printf("Enter number of strings: ");
    scanf("%d", &total_str);

    char** arr = (char**)malloc(total_str * sizeof(char*));

    for (i = 0; i < total_str; i++) {
        printf("Enter string %d: ", i + 1);
        char buffer[100];
        scanf("%s", buffer);
        arr[i] = strdup(buffer); // 'strdup' испльзуется для создания копии строки 'buffer' и внесении её в 'arr'
    }

    shell_sort(arr, total_str);

    printf("\nSorted array:\n");
    for (i = 0; i < total_str; i++) {
        printf("%s\n", arr[i]);
        free(arr[i]);
    }

    free(arr);

    return 0;
}
