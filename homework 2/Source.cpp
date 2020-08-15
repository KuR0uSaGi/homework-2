#include<stdio.h> 

int main() {
    float l, w, areas;
    printf("length : ");
    scanf_s("%f", &l);
    printf("width : ");
    scanf_s("%f", &w);
    if (l >= 0, w >= 0)
    {
        areas = l * w;
        printf("l*w = %.6f", areas);
    }
    else
        printf("error");
    return 0;
}