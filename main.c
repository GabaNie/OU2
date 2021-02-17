#include <stdio.h>

void print(int m)
{
    int w=5*m;
    printf("%d\n",w);
    printf("ok dziala funkcja");
}
int main() {
    printf("Początek kodu");
    print();
    printf("ok");
    return 0;
}
