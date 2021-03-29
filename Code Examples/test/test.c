#include <stdio.h>
void print(int number) {
    number += 4;
}
/*void* baseprint_0(int num) {
    int _num = num + 1;
    return (void*)(_num);
}*/
void baseget_0(int* num) {
    *num *= 2;
}
void baseget_1(char* chr) {
    *chr += 1;
}
int main() {
    int num = 3;
    char let = 'a';
    //printf("%d",(int*)(baseprint_0(num)));
    // print(num);
    scanf("%d",&num);
    baseget_0(&num);
    getchar();
    scanf("%c",&let);
    baseget_1(&let);
    getchar();
    printf("%d",num);
    printf("\n");
    printf("%c",let);
    printf("\n");
    return 0;
}