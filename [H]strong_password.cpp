#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();
char* ltrim(char*);
char* rtrim(char*);

int parse_int(char*);

/*
 * Complete the 'minimumNumber' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. STRING password
 */

int minimumNumber(int n, char* password) {
    // Return the minimum number of characters to make the password strong
    int i, j;
    char num[12] = "0123456789";
    char l_c[28] = "abcdefghijklmnopqrstuvwxyz";
    char u_c[28] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char s_c[14] = "!@#$%^&*()-+";
    int t[] = {1,1,1,1};
    int c=0;
    for(i=0;i<n;i++){
        for(j=0;*(t)==1 && *(num+j)!='\0';j++){
            if(*(password+i) == *(num+j)){
                *(t) = 0;
                //printf("hello");
                break;
            }
        }
        for(j=0;*(t+1) == 1 && *(l_c+j)!='\0';j++){
            if(*(password+i) == *(l_c+j)){
                *(t+1) = 0;
                //printf("Hello");
                break;
            }
        }
        for(j=0;*(t+2) == 1 && *(u_c+j)!='\0';j++){
            if(*(password+i) == *(u_c+j)){
                //printf("Hey");
                *(t+2) = 0;
            }
        }
        for(j=0;*(t+3) == 1 && *(s_c+j)!='\0';j++){
            if(*(password+i) == *(s_c+j)){
                *(t+3) = 0;
                //printf("hey");
                break;
            }
        }
    }
    for(i=0;i<4;i++){
        if(*(t+i) == 1){
            c++;
        }
    }
    if(c > 6-n){
        return c;
    }else{
        return 6-n;
    }
}

int main()
{
    FILE* fptr = fopen(getenv("OUTPUT_PATH"), "w");

    int n = parse_int(ltrim(rtrim(readline())));

    char* password = readline();

    int answer = minimumNumber(n, password);

    fprintf(fptr, "%d\n", answer);

    fclose(fptr);

    return 0;
}

char* readline() {
    size_t alloc_length = 1024;
    size_t data_length = 0;

    char* data = malloc(alloc_length);

    while (true) {
        char* cursor = data + data_length;
        char* line = fgets(cursor, alloc_length - data_length, stdin);

        if (!line) {
            break;
        }

        data_length += strlen(cursor);

        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') {
            break;
        }

        alloc_length <<= 1;

        data = realloc(data, alloc_length);

        if (!data) {
            data = '\0';

            break;
        }
    }

    if (data[data_length - 1] == '\n') {
        data[data_length - 1] = '\0';

        data = realloc(data, data_length);

        if (!data) {
            data = '\0';
        }
    } else {
        data = realloc(data, data_length + 1);

        if (!data) {
            data = '\0';
        } else {
            data[data_length] = '\0';
        }
    }

    return data;
}

char* ltrim(char* str) {
    if (!str) {
        return '\0';
    }

    if (!*str) {
        return str;
    }

    while (*str != '\0' && isspace(*str)) {
        str++;
    }

    return str;
}

char* rtrim(char* str) {
    if (!str) {
        return '\0';
    }

    if (!*str) {
        return str;
    }

    char* end = str + strlen(str) - 1;

    while (end >= str && isspace(*end)) {
        end--;
    }

    *(end + 1) = '\0';

    return str;
}

int parse_int(char* str) {
    char* endptr;
    int value = strtol(str, &endptr, 10);

    if (endptr == str || *endptr != '\0') {
        exit(EXIT_FAILURE);
    }

    return value;
}

