#include <stdio.h>

int main() {
    int a, b, c, d;
    int max1, max2;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    
    max1 = (a > b ? a : b);
    max1 = (max1 > c ? max1 : c);
    max1 = (max1 > d ? max1 : d);

    
    max2 = (a != max1 ? a : b);
    max2 = (max2 > b && b != max1 ? max2 : (b != max1 ? b : max2));
    max2 = (max2 > c && c != max1 ? max2 : (c != max1 ? c : max2));
    max2 = (max2 > d && d != max1 ? max2 : (d != max1 ? d : max2));

    printf("%d", max2);

    return 0;
}
