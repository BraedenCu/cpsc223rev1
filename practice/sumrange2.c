#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int sumrange(int start, int end) 
{
    int i;
    int sum;

    sum =0;

    for(i = start; i<end; i++) {
        sum+=i;
    }

    return sum;
}

int main(int argc, char **argv)
{
    int start;
    int end;
    if (argc != 3) {
        fprintf(stderr, "Usage: %s\n start end", argv[0]);
        return 1;
    }

    start = atoi(argv[1]);
    end = atoi(argv[2]);

    printf("sumRange(%d, %d) = %d\n", start, end, sumrange(start, end));

    return 0;
}
