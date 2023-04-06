#include <stdio.h>
#include <string.h>


int main() {
    char str[1000];
    fgets(str,1000,stdin);
    char* s;
    s = str;
    int i, p[] = { 0,0,0 };
    //for (i = 0; i < 3; i++) {
    //    printf("%d", p[i]);
    //}
    for (i = 0; *(s + i) != '\0'; i++) {
        printf("Hello\n");
        if (*(s + i) == '(' || *(s + i) == ')') {
            if (*(s + i) == '(') {
                p[0] += 1;
                if (*(s + i + 1) == '}' || *(s + i + 1) == ']') {
                    printf("false");
                    return 0;
                }
            }
            else {
                p[0] -= 1;
            }
        }
        else if (*(s + i) == '{' || *(s + i) == '}') {
            if (*(s + i) == '{') {
                p[1] += 1;
                if (*(s + i + 1) == ')' || *(s + i + 1) == ']') {
                    printf("false");
                    return 0;
                }
            }
            else {
                p[1] -= 1;
            }
        }
        else if(*(s+i)=='[' || *(s+i)==']') {
            if (*(s + i) == '[') {
                p[2] += 1;
                if (*(s + i + 1) == ')' || *(s + i + 1) == '}') {
                    printf("false");
                    return 0;
                }
            }
            else {
                p[2] -= 1;
            }
        }
        else {
            continue;
        }
    }
    if (p[0] != 0 || p[1] != 0 || p[2] != 0) {
        printf("false");
        return 0;
    }
    for (i = 0; i < 3; i++) {
        printf("%d\n", p[i]);
    }
    printf("true");
}