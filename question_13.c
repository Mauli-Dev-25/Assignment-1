#include <stdio.h>
#include <string.h>

int main() {

    char *arr[] = {"apple", "banana", "mango", "apple", "banana"};
    int n = 5;
    int i, j;

    printf("Duplicate strings:\n");

    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(strcmp(arr[i], arr[j]) == 0) {
                printf("%s\n", arr[i]);
                break;
            }
        }
    }

    return 0;
}