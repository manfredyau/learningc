#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <inttypes.h>
#include <math.h>
int main(void) {
    int ability_power;               // 法强
    int count = 0;                  // 黑暗收割的层数
    int attack1, attack2;           // attack1 记录18级时，电刑的伤害；attack2 记录18级时，黑暗收割造成的伤害
    printf("请输入法强：");
    while (scanf("%d", &ability_power) == 1) {
        attack1 = 180 + ability_power * .25;  // 180 是电刑在 18 级时的基础伤害，0.25 是法强的加成
        printf("18级时，使用电刑并且法强是 %d 的时候，造成的伤害是：%d.\n", ability_power, attack1);

        attack2 = 80 + ability_power * .15 + count * 5;     // 80 是黑暗收割在 18 级时的基础伤害，0.15 是法强的加成；
        // count * 5 即为黑暗收割层数乘以5
        while (attack2 < attack1) {
            count++;
            attack2 += 5;
        }
        printf("18级时，使用黑暗收割井且法术强度为 %d 时需要 %d 层才能赶上电刑的伤害.\n", ability_power, count);
        printf("-------------------------------------------------------------\n");
        printf("请输入法术强度：");
        count = 0;                      // 层数要重置为 0
    }

    return 0;
}
