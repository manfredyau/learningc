#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "a.h"
#include <inttypes.h>
#include <math.h>
int main(void) {
    int extra_attack;               // ���⹥����
    int count = 0;                  // �ڰ��ո�Ĳ���
    int attack1, attack2;           // attack1 ��¼18��ʱ�����̵��˺���attack2 ��¼18��ʱ���ڰ��ո���ɵ��˺�
    printf("��������⹥������");
    while (scanf("%d", &extra_attack) == 1) {
        attack1 = 180 + extra_attack * 0.4;  // 180 �ǵ����� 18 ��ʱ�Ļ����˺���0.4 �Ƕ��⹥�����ļӳ�
        printf("18��ʱ��ʹ�õ��̲��Ҷ��⹥������ %d ��ʱ����ɵ��˺��ǣ�%d.\n", extra_attack, attack1);

        attack2 = 80 + extra_attack * 0.25 + count * 5;     // 80 �Ǻڰ��ո��� 18 ��ʱ�Ļ����˺���0.25 �Ƕ��⹥�����ļӳɣ�
                                                            // count * 5 ��Ϊ�ڰ��ո��������5
        while (attack2 < attack1) {
            count++;
            attack2 += 5;
        }
        printf("18��ʱ��ʹ�úڰ��ո�Ҷ��⹥��Ϊ %d ʱ��Ҫ %d ����ܸ��ϵ��̵��˺�.\n", extra_attack, count);
        printf("-------------------------------------------------------------\n");
        printf("��������⹥������");
        count = 0;                      // ����Ҫ����Ϊ 0
    }

    return 0;
}
