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
 * Complete the 'timeInWords' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts following parameters:
 *  1. INTEGER h
 *  2. INTEGER m
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
char* timeInWords(int h, int m) {
    char t[30][20] = {
        "one",
        "two",
        "three",
        "four",
        "five",
        "six",
        "seven",
        "eight",
        "nine",
        "ten",
        "eleven",
        "twelve",
        "thirteen",
        "fourteen",
        "quarter",
        "sixteen",
        "seventeen",
        "eighteen",
        "nineteen",
        "twenty",
        "twenty one",
        "twenty two",
        "twenty three",
        "twenty four",
        "twenty five",
        "twenty six",
        "twenty seven",
        "twenty eight",
        "twenty nine",
        "half"
    };
    char v[3][8] = {
        "o' clock",
        "past",
        "to"
    };
    int i, j = 0; 
    char m1[7] = "minute";
    char m2[8] = "minutes";
    char* r = (char*)malloc(35*sizeof(char));
    if(m == 0){
        for(i=0;*(*(t+h-1)+i)!='\0';i++){
            *(r+j++) = *(*(t+h-1)+i);  
        }
        *(r+j++) = ' ';
        for(i=0;i<8;i++){
            *(r+j++) = *(*(v)+i);
        }
        *(r+j) = '\0';
        return r;
    }else if(m <= 30){
        if(m == 1){
            for(i=0;*(*(t)+i)!='\0';i++){
                *(r+j++) = *(*(t)+i);
            }
            *(r+j++) = ' ';
            for(i=0;*(m1+i)!='\0';i++){
                *(r+j++) = *(m1+i);
            }
            *(r+j++) = ' ';
            for(i=0;*(*(v+1)+i)!='\0';i++){
                *(r+j++) = *(*(v+1)+i);
            }
            *(r+j++) = ' ';
            for(i=0;*(*(t+h-1)+i)!='\0';i++){
                *(r+j++) = *(*(t+h-1)+i);
            }
            *(r+j) = '\0';
            return r;
        }
        else if(m!=1){
            for(i=0;*(*(t+m-1)+i)!='\0';i++){
                *(r+j++) = *(*(t+m-1)+i);
            }
            *(r+j++) = ' ';
            for(i=0;m!=15 && m!= 30 &&*(m2+i)!='\0';i++){
                *(r+j++) = *(m2+i);
            }if(m!=15 && m!=30){
                *(r+j++) = ' ';
            }
            for(i=0;*(*(v+1)+i)!='\0';i++){
                *(r+j++) = *(*(v+1)+i);
            }
            *(r+j++) = ' ';
            for(i=0;*(*(t+h-1)+i)!='\0';i++){
                *(r+j++) = *(*(t+h-1)+i);
            }
            *(r+j) = '\0';
            return r;
        }
    }else if(m > 30){
        if(m == 59){
            for(i=0;*(*(t)+i)!='\0';i++){
                *(r+j++) = *(*(t)+i);
            }
            *(r+j++) = ' ';
            for(i=0;*(m1+i)!=0;i++){
                *(r+j++) = *(m1+i);
            }
            *(r+j++) = ' ';
            for(i=0;*(*(v+2)+i)!='\0';i++){
                *(r+j++) = *(*(v+2)+i);
            }
            *(r+j++) = ' ';
            for(i=0;*(*(t+h)+i)!='\0';i++){
                *(r+j++) = *(*(t+h)+i);
            }
            *(r+j) = '\0';
            return r;
        }else if(m!=59){
            for(i=0;*(*(t+59-m)+i)!='\0';i++){
                *(r+j++) = *(*(t+59-m)+i);
            }
            *(r+j++) = ' ';
            for(i=0;m!=45 && *(m2+i)!='\0';i++){
                *(r+j++) = *(m2+i);
            }
            if(m!=45){
                *(r+j++) = ' ';
            }
            for(i=0;*(*(v+2)+i)!='\0';i++){
                *(r+j++) = *(*(v+2)+i);
            }
            *(r+j++) = ' ';
            for(i=0;*(*(t+h)+i)!='\0';i++){
                *(r+j++) = *(*(t+h)+i);
            }
            *(r+j) = '\0';
            return r;
        }
    }
    return r;
}

int main()
{
    FILE* fptr = fopen(getenv("OUTPUT_PATH"), "w");

    int h = parse_int(ltrim(rtrim(readline())));

    int m = parse_int(ltrim(rtrim(readline())));

    char* result = timeInWords(h, m);

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

