#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#define exchange_rate_dollar 1304
#define exchange_rate_yen 9
#define exchange_rate_yuan 189
#define exchange_rate_euro 1420
#define discount_rate_1 0.72
#define discount_rate_2 0.9

int main(void)
{
    int  age, country, change;
    double price,discount_price;
    char money;

    printf("0.항공권 가격을 입력하세요(정수형 양수값,한국 원화):\n");
    scanf("%d", &price);

    printf("1.나이를 입력하세요(정수형 양수값):\n");
    scanf("%d", &age);

    switch (age)
    {
        case 0:
        case 1:
        case 2:
            printf("무료 탑승입니다.즐거운 여행되세요.\n");
            break;
        default:
            printf("2.사용할 화폐 국가를 입력하세요.(미국은 1,일본은 2,중국은 3,독일은 4,프랑스는 5,한국은 그 이외 숫자 입력):\n");
            scanf("%d", &country);
            break;
    }

    printf("결제 카드 잔액을 입력하세요(정수형 양수값):\n");
    scanf("%d", &change);

    if (age >= 3 && age <= 22)
        switch (country)
        {
            case 1:
                price = price * discount_rate_1;
                discount_price = price * discount_rate_1 / exchange_rate_dollar;
                money = "달러";
                printf("결제 금액은 %f원(%f %s)입니다.", price, discount_price, money);
                break;
            case 2:
                price = price * discount_rate_1;
                discount_price = price * discount_rate_1 / exchange_rate_yen;
                money = "엔";
                printf("결제 금액은 %f원(%f %s)입니다.", price, discount_price, money);
                break;
            case 3:
                price = price * discount_rate_1;
                discount_price = price * discount_rate_1 / exchange_rate_yuan;
                money = "위안";
                printf("결제 금액은 %f원(%f %s)입니다.", price, discount_price, money);
                break;
            case 4:
            case 5:
                price = price * discount_rate_1;
                discount_price = price * discount_rate_1 / exchange_rate_euro;
                money = "유로";
                printf("결제 금액은 %f원(%f %s)입니다.", price, discount_price, money);
                break;

        }




}
