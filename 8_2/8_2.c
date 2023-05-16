#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void shell_sort(char** arr, int total_str) {
    int interval, i, j;
    char* temp;

    for (interval = total_str / 2; interval > 0; interval /= 2) {
        for (i = interval; i <total_str; i++) {
            temp = arr[i];
            j = i;

            while (j >= interval && strlen(arr[j - interval]) > strlen(temp)) {
                arr[j] = arr[j - interval];
                j -= interval;
            }

            arr[j] = temp;
        }
    }
}


