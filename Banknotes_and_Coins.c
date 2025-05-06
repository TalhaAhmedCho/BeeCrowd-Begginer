// 1st Way

#include <stdio.h>

int main() {
    double money;
    scanf("%lf", &money);

    int total_cents = (int)(money * 100 + 0.5);  // রাউন্ড করার জন্য +0.5

    int notes_100 = total_cents / 10000;
    total_cents %= 10000;

    int notes_50 = total_cents / 5000;
    total_cents %= 5000;

    int notes_20 = total_cents / 2000;
    total_cents %= 2000;

    int notes_10 = total_cents / 1000;
    total_cents %= 1000;

    int notes_5 = total_cents / 500;
    total_cents %= 500;

    int notes_2 = total_cents / 200;
    total_cents %= 200;

    int coin_1 = total_cents / 100;
    total_cents %= 100;

    int coin_050 = total_cents / 50;
    total_cents %= 50;

    int coin_025 = total_cents / 25;
    total_cents %= 25;

    int coin_010 = total_cents / 10;
    total_cents %= 10;

    int coin_005 = total_cents / 5;
    total_cents %= 5;

    int coin_001 = total_cents;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", notes_100);
    printf("%d nota(s) de R$ 50.00\n", notes_50);
    printf("%d nota(s) de R$ 20.00\n", notes_20);
    printf("%d nota(s) de R$ 10.00\n", notes_10);
    printf("%d nota(s) de R$ 5.00\n", notes_5);
    printf("%d nota(s) de R$ 2.00\n", notes_2);

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", coin_1);
    printf("%d moeda(s) de R$ 0.50\n", coin_050);
    printf("%d moeda(s) de R$ 0.25\n", coin_025);
    printf("%d moeda(s) de R$ 0.10\n", coin_010);
    printf("%d moeda(s) de R$ 0.05\n", coin_005);
    printf("%d moeda(s) de R$ 0.01\n", coin_001);

    return 0;
}


// 2nd Way

#include <stdio.h>
#include <math.h>

#define EPSILON 0.001

int main() {
    double money;
    scanf("%lf", &money);

    printf("NOTAS:\n");

    int notes_100 = (int)(money / 100.0);
    money = fmod(money, 100.0);

    int notes_50 = (int)(money / 50.0);
    money = fmod(money, 50.0);

    int notes_20 = (int)(money / 20.0);
    money = fmod(money, 20.0);

    int notes_10 = (int)(money / 10.0);
    money = fmod(money, 10.0);

    int notes_5 = (int)(money / 5.0);
    money = fmod(money, 5.0);

    int notes_2 = (int)(money / 2.0);
    money = fmod(money, 2.0);

    printf("%d nota(s) de R$ 100.00\n", notes_100);
    printf("%d nota(s) de R$ 50.00\n", notes_50);
    printf("%d nota(s) de R$ 20.00\n", notes_20);
    printf("%d nota(s) de R$ 10.00\n", notes_10);
    printf("%d nota(s) de R$ 5.00\n", notes_5);
    printf("%d nota(s) de R$ 2.00\n", notes_2);

    printf("MOEDAS:\n");

    int coins_1 = (int)(money / 1.0);
    money = fmod(money, 1.0);

    int coins_050 = (int)(money / 0.50);
    money = fmod(money, 0.50);

    int coins_025 = (int)(money / 0.25);
    money = fmod(money, 0.25);

    int coins_010 = (int)(money / 0.10);
    money = fmod(money, 0.10);

    int coins_005 = (int)(money / 0.05);
    money = fmod(money, 0.05);

    int coins_001 = (int)((money / 0.01) + EPSILON);  // EPSILON দিয়ে রাউন্ড করছি

    printf("%d moeda(s) de R$ 1.00\n", coins_1);
    printf("%d moeda(s) de R$ 0.50\n", coins_050);
    printf("%d moeda(s) de R$ 0.25\n", coins_025);
    printf("%d moeda(s) de R$ 0.10\n", coins_010);
    printf("%d moeda(s) de R$ 0.05\n", coins_005);
    printf("%d moeda(s) de R$ 0.01\n", coins_001);

    return 0;
}

// 3rd Way

#include <stdio.h>

int main() {
    int money_in_cents;
    double money;
    scanf("%lf", &money);
    money_in_cents = (int)(money * 100 + 0.5); // Safe rounding

    int notes[] = {10000, 5000, 2000, 1000, 500, 200};
    int coins[] = {100, 50, 25, 10, 5, 1};

    printf("NOTAS:\n");
    for (int i = 0; i < 6; i++) {
        printf("%d nota(s) de R$ %.2f\n", money_in_cents / notes[i], notes[i] / 100.0);
        money_in_cents %= notes[i];
    }

    printf("MOEDAS:\n");
    for (int i = 0; i < 6; i++) {
        printf("%d moeda(s) de R$ %.2f\n", money_in_cents / coins[i], coins[i] / 100.0);
        money_in_cents %= coins[i];
    }

    return 0;
}


