#include <stdio.h>
#define  ARTICHOKE 1
#define BEET 2
#define CARROT 3
#define U_PRICE_ARTICHOKE 2.05
#define U_PRICE_BEET 1.15
#define U_PRICE_CARROT 1.09
int main(void)
{
    double pound;
    double total_pound = 0;
    double unit_price;
    double total_price = 0;
    double total_price_for_vegetable = 0;
    double discount = 0;
    double freight;
    int category;

    printf("Enter the category: \n"
           "1) Artichoke    2) Beet    3) carrot\n"
    );
    scanf("%d", &category);

    // 根據用戶輸入的蔬菜類別來決定單價是多少
    switch (category)
    {
        case ARTICHOKE:
            unit_price = U_PRICE_ARTICHOKE;
            break;
        case BEET:
            unit_price = U_PRICE_BEET;
            break;
        case CARROT:
            unit_price = U_PRICE_CARROT;
            break;
        default:
            return 0;
    }

    printf("Please enter the pound(less or equals than 0 for getting the result): ");
    scanf("%lf", &pound);
    while (pound > 0.0)
    {
        // 本次迭代中，根據磅數所知的價格
        double this_time_prize = pound * unit_price;

        // 將本次迭代中的價格追加進總價中
        total_price_for_vegetable += this_time_prize;

        // 總磅數也要追加
        total_pound += pound;

        // 提示用戶可以接著輸入
        printf("You can enter a pound continue: ");
        scanf("%lf", &pound);
    }

    // 如果訂單的總價(在計算運費之前)超過 $100，則享受 5% 的優惠
    if (total_price_for_vegetable > 100.0)
    {
        discount = total_price_for_vegetable * 0.05;
        total_price_for_vegetable -= discount;
    }

    if (total_pound <= 5)
    {
        freight = 6.5;         // 少於或等於5磅的訂單要收取6.5美元的運費和包裝費
    }
    else if (total_pound <= 20)
    {
        freight = 14.0;        // 介於5磅到20磅的訂單要收取14美元的運費和包裝費
    }
    else
    {
        freight = 14.0 +          // 超過 20 磅的訂單在14美元的基礎上，
                  (total_pound - 20.0) * 0.5;   // 每續重一磅就增力 0.5 美元
    }

    // 訂單的總價 = 蔬菜總價 + 運費&包裝費
    total_price = total_price_for_vegetable + freight;

    printf("訂單中蔬菜的單價是：$%.2f, 重量是：%.2f 磅, 蔬菜的總費用是：%.2f, 訂單的總費用是：%.2f, 享受了 %.2f 元的折扣,\n"
           "運費和包裝費為：%.2f.\n ",
           unit_price, total_pound, total_price_for_vegetable, total_price, discount, freight
    );

    return 0;
}