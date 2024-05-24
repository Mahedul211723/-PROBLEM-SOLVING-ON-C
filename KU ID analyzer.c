#include<stdio.h>
#include<conio.h>

int main(){
    int id, batch, dc, roll, temp;
    printf("Enter your KU Std. ID: ");
    scanf("%d", &id);
    batch = id / 10000;
    temp = id % 10000;
    dc = temp / 100;
    roll = temp % 100;
    printf("Batch: %d\nDiscpline code: %.2d\nRoll: %.2d", batch, dc, roll);
    getch();
    return 0;
}
