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

/*
 * Complete the 'pangrams' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
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
char* pangrams(char* s) {
    int i, j=0, l = strlen(s);
    int* hash = (int*)calloc(26,sizeof(int));
    char* r = (char*)malloc(12*sizeof(char));
    char n[11] = "not pangram";
    char y[7] = "pangram";
    for(i=0;i<11;i++){
        *(r+i) = *(n+i);
    }
    *(r+11) = '\0';
    if(l<26){
        return r;
    }
    for(i=0;i<l;i++){
        if(*(s+i)>=65 && *(s+i)<=90){
            (*(hash+((*(s+i))-65)))++;
        }else if(*(s+i)>=97 && *(s+i)<=122){
            (*(hash+((*(s+i))-97)))++;
        }
    }
    for(i=0;i<26;i++){
        if(*(hash+i) == 0){
            return r;
        }
    }
    for(i=0;i<7;i++){
        *(r+i) = *(y+i);
    }
    *(r+7) = '\0'; 
    return r;
}

int main()
{
    FILE* fptr = fopen(getenv("OUTPUT_PATH"), "w");

    char* s = readline();

    char* result = pangrams(s);

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

