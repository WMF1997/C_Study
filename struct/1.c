#include <stdio.h>

struct mystruct {
    char c;
    short s;
    int i;
    double d;
};

int main (int argc, const char** argv) {
    // mystruct s;
    struct mystruct s1 = {"a", 0x6263, 0x64656667, 32};  // warning?
    struct mystruct s2;
    s2.i = 14530529;
    printf ("%d\n", s1.i);
    printf("%d\n", s2.i);
    return 0;
}