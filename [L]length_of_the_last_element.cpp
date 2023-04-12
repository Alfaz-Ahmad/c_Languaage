#include<stdio.h>
#include<stdlib.h>

int lengthOfLastWord(char* s) {
    int i, k = 0, j = 0;
    for (i = 0; *(s + i) != '\0'; i++) {
        if (*(s + i) == ' ' && *(s + i + 1) != ' ' && *(s + i + 1) != '\0') {
            k++;
        }
    }
    if (k != 0) {
        for (i = 0; *(s + i) != '\0'; i++) {
            if (*(s + i) == ' ' && *(s + i + 1) != ' ' && *(s + i + 1) != '\0') {
                j++;
            }if (j == k) {
                k = 0;
                for (j = i + 1; *(s + j) != '\0'; j++) {
                    if (*(s + j) != ' ') {
                        k++;
                    }
                }
                return k;
            }
        }
    }
    else {
        for (j = 0; *(s + j) != '\0'; j++) {
            if (*(s + j) != ' ') {
                k++;
            }
        }
        return k;
    }
    return k;
}

int main() {
    /*int n;
    scanf_s("%d", &n);
    char* arr = (char*)malloc(n * sizeof(char));*/
    char arr[1000];
    scanf("%s", arr);
    printf("%d", lengthOfLastWord(arr));
    return 0;
}
