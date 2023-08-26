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
char** split_string(char*);

int parse_int(char*);

/*
 * Complete the 'solve' function below.
 *
 * The function is expected to return a DOUBLE.
 * The function accepts 2D_INTEGER_ARRAY coordinates as parameter.
 */

double solve(int coordinates_rows, int coordinates_columns, int** coordinates) {
    unsigned long long int i, j,x, y;
    long long int sx = *(*(coordinates+0)+0), lx = *(*(coordinates+0)+0), sy = *(*(coordinates+0)+1), ly = *(*(coordinates+0)+1);
    double max=0, d, p;
    // for(i=0;i<coordinates_rows;i++){
    //     for(j=i+1;j<coordinates_rows;j++){
    //         x = abs(*(*(coordinates+i)) - *(*(coordinates+j)));
    //         y = abs(*(*(coordinates+i)+1) - *(*(coordinates+j)+1));
    //         p = pow(x,2) + pow(y,2);
    //         d = sqrt(p);
    //         printf("%ld %ld %.1lf\n",i,j,d);
    //         if(d > max){
    //             max = d;
    //         }
    //     }
    // }
    // return max;
    for(i=0;i<coordinates_rows;i++){
        if(*(*(coordinates+i)+0) < sx){
            sx = *(*(coordinates+i)+0);
        }else if(*(*(coordinates+i)+0) > lx){
            lx = *(*(coordinates+i));
        }else if(*(*(coordinates+i)+1) < sy){
            sy = *(*(coordinates+i)+1);
        }else if(*(*(coordinates+i)+1) > ly){
            ly = *(*(coordinates+i)+1);
        }
    }
    max = lx-sx;
    if(max < ly-sy){
        max = ly-sy;
    }if(max < sqrt((lx*lx)+(ly*ly))){
        max = sqrt((lx*lx)+(ly*ly));
    }if(max < sqrt((lx*lx)+(sy*sy))){
        max = sqrt((lx*lx)+(sy*sy));
    }if(max < sqrt((sx*sx)+(ly*ly))){
        max = sqrt((sx*sx)+(ly*ly));
    }if(max < sqrt((sx*sx)+(sy*sy))){
        max = sqrt((sx*sx)+(sy*sy));
    }
    return max;
}

int main()
{
    FILE* fptr = fopen(getenv("OUTPUT_PATH"), "w");

    int n = parse_int(ltrim(rtrim(readline())));

    int** coordinates = malloc(n * sizeof(int*));

    for (int i = 0; i < n; i++) {
        *(coordinates + i) = malloc(2 * (sizeof(int)));

        char** coordinates_item_temp = split_string(rtrim(readline()));

        for (int j = 0; j < 2; j++) {
            int coordinates_item = parse_int(*(coordinates_item_temp + j));

            *(*(coordinates + i) + j) = coordinates_item;
        }
    }

    double result = solve(n, 2, coordinates);

    fprintf(fptr, "%lf\n", result);

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

char** split_string(char* str) {
    char** splits = NULL;
    char* token = strtok(str, " ");

    int spaces = 0;

    while (token) {
        splits = realloc(splits, sizeof(char*) * ++spaces);

        if (!splits) {
            return splits;
        }

        splits[spaces - 1] = token;

        token = strtok(NULL, " ");
    }

    return splits;
}

int parse_int(char* str) {
    char* endptr;
    int value = strtol(str, &endptr, 10);

    if (endptr == str || *endptr != '\0') {
        exit(EXIT_FAILURE);
    }

    return value;
}

