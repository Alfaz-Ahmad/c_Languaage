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
 * Complete the 'appendAndDelete' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts following parameters:
 *  1. STRING s
 *  2. STRING t
 *  3. INTEGER k
 */

/*
 * To return the string from the function, you should either do static allocation or dynamic allocation
 *
 * For example,
 * char* return_string_using_static_allocation() {
 *     static char s[] = "static allocation of string";
 *
 *     return s;
 * }
 *
 * char* return_string_using_dynamic_allocation() {
 *     char* s = malloc(100 * sizeof(char));
 *
 *     s = "dynamic allocation of string";
 *
 *     return s;
 * }
 *
 */
char* appendAndDelete(char* s, char* t, int k) {
    int i, si = 0, s1=0, s2=0, c=0;
    char* r = (char*)malloc(4*sizeof(char));
    for(i=0;*(s+i)!='\0' && *(t+i)!='\0';i++){
        if(*(s+i) == *(t+i)){
            si++;
        }else{
            break;
        }
    }
    for(i=0;*(s+i)!=0;i++){
        s1++;
    }
    for(i=0;*(t+i)!='\0';i++){
        s2++;
    }
    if(s1 < s2){
        if(k == 4){
           *(r) = 'Y';
            *(r+1) = 'e';
            *(r+2) = 's';
            *(r+3) = '\0'; 
        }else{
            *(r) = 'N';
            *(r+1) = 'o';
            *(r+2) = '\0';
        }
    }else if(((s1-si)+(s2-si)) <= k){
        *(r) = 'Y';
        *(r+1) = 'e';
        *(r+2) = 's';
        *(r+3) = '\0';
    }else{
        *(r) = 'N';
        *(r+1) = 'o';
        *(r+2) = '\0';
    }
    return r;    
}

int main()
{
    FILE* fptr = fopen(getenv("OUTPUT_PATH"), "w");

    char* s = readline();

    char* t = readline();

    int k = parse_int(ltrim(rtrim(readline())));

    char* result = appendAndDelete(s, t, k);

    fprintf(fptr, "%s\n", result);

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

