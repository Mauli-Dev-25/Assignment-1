#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void *a, const void *b) {
    return strcmp((char *)a, (char *)b);
}

int main() {
    char nameOfStudents[10][50];
    int n, i;

    printf("Enter number of students (max 10): ");
    scanf("%d", &n);
    getchar();   // remove newline

    for(i = 0; i < n; i++) {
        printf("Enter name %d: ", i + 1);
        fgets(nameOfStudents[i], 50, stdin);
        nameOfStudents[i][strcspn(nameOfStudents[i], "\n")] = '\0';
    }

    qsort(nameOfStudents, n, sizeof(nameOfStudents[0]), compare);

    printf("\nSorted Names:\n");
    for(i = 0; i < n; i++) {
        printf("%s\n", nameOfStudents[i]);
    }

    
}