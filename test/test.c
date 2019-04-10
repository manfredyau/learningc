#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "a.h"
#include <inttypes.h>
#include <math.h>
int main(void) {
    int extra_attack;               // 额外攻击力
    int count = 0;                  // 黑暗收割的层数
    int attack1, attack2;           // attack1 记录18级时，电刑的伤害；attack2 记录18级时，黑暗收割造成的伤害
    printf("请输入额外攻击力：");
    while (scanf("%d", &extra_attack) == 1) {
        attack1 = 180 + extra_attack * 0.4;  // 180 是电刑在 18 级时的基础伤害，0.4 是额外攻击力的加成
        printf("18级时，使用电刑并且额外攻击力是 %d 的时候，造成的伤害是：%d.\n", extra_attack, attack1);

        attack2 = 80 + extra_attack * 0.25 + count * 5;     // 80 是黑暗收割在 18 级时的基础伤害，0.25 是额外攻击力的加成；
                                                            // count * 5 即为黑暗收割层数乘以5
        while (attack2 < attack1) {
            count++;
            attack2 += 5;
        }
        printf("18级时，使用黑暗收割井且额外攻击为 %d 时需要 %d 层才能赶上电刑的伤害.\n", extra_attack, count);
        printf("-------------------------------------------------------------\n");
        printf("请输入额外攻击力：");
        count = 0;                      // 层数要重置为 0
    }

    return 0;
}
