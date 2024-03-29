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
 * Complete the 'isValid' function below.
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
char* isValid(char* s) {
    int i, j, l = strlen(s), c = 0, max1 = 0, max2 = 0, p = 0;
    bool b = false;
    int* hash = (int*)calloc(26,sizeof(int));
    char* r = (char*)malloc(4*sizeof(char));
    *(r) = 'N';
    *(r+1) = 'O';
    *(r+2) = '\0';
    for(i=0;i<l;i++){
        (*(hash+(*(s+i)-97)))++;
    }
    int* o = (int*)calloc(l+1,sizeof(int));
    for(i=0;i<26;i++){
        if(*(hash+i)!=0){
            if(*(o+(*(hash+i)))==0){
                c++;
            }
            (*(o+(*(hash+i))))++;
            if(max2>*(hash+i)){
                max2 = *(hash+i);
            }
        }
        
    }
    if(c > 2){
        return r;
    }
    if(c == 1){
        *(r) = 'Y';
        *(r+1) = 'E';
        *(r+2) = 'S';
        *(r+3) = '\0';
        return r;
    }
    for(i=0;i<l+1;i++){
        if(*(o+i)>max1){
            max1 = *(o+i);
            p = i;
        }
    }
    for(i=1;i<=l;i++){
        if(*(o+i)==1 && i == 1 && p!=1){
            *(r) = 'Y';
            *(r+1) = 'E';
            *(r+2) = 'S';
            *(r+3) = '\0';
            return r;
        }
        else if((*(o+i)>=1 && *(o+i+1)!=1)){
            return r;
        }else if(*(o+i)>=1 && *(o+i+1)==1){
            *(r) = 'Y';
            *(r+1) = 'E';
            *(r+2) = 'S';
            *(r+3) = '\0';
            return r;
        }
    }
    *(r) = 'Y';
    *(r+1) = 'E';
    *(r+2) = 'S';
    *(r+3) = '\0';
    return r;
}

int main()
{
    FILE* fptr = fopen(getenv("OUTPUT_PATH"), "w");

    char* s = readline();

    char* result = isValid(s);

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
