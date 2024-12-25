#include <stdio.h>
 
int main() {
    int val;
 
    if (scanf("%d", &val) == 1) {
        printf("%d %s 0", val, (val < 0) ? "<" : (0 < val) ? ">" : "=");
    }
 
    return 0;
}