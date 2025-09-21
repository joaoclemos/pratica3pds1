#include <stdio.h>
#include <limits.h>

void main() {
    printf("menor: %hd\nmaior: %hd\n", SHRT_MIN, SHRT_MAX);
    printf("menor: %d\nmaior: %d\n", INT_MIN, INT_MAX);
    printf("menor: %ld\nmaior: %ld\n", LONG_MIN, LONG_MAX);
    printf("menor: %lld\nmaior: %lld\n", LLONG_MIN, LLONG_MAX);
    printf("menor: 0\nmaior: %hu\n", USHRT_MAX);
    printf("menor: 0\nmaior: %u\n", UINT_MAX);
    printf("menor: 0\nmaior: %lu\n", ULONG_MAX);
    printf("menor: 0\nmaior: %llu\n", ULLONG_MAX);
}