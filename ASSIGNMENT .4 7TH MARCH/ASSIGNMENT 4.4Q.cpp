#include <stdio.h>

#define MAX_CUSTOMERS 3
#define MAX_NAME_LENGTH 50

struct customer {
    int account_no;
    char name[MAX_NAME_LENGTH];
    float balance;
};

void print_low_balance_customers(struct customer *customers) {
    printf("Customers with balance less than Rs. 100:\n");
    for (int i = 0; i < MAX_CUSTOMERS; i++) {
        if (customers[i].balance < 100.0) {
            printf("%d %s\n", customers[i].account_no, customers[i].name);
        }
    }
}

int main() {
    struct customer customers[MAX_CUSTOMERS];

    printf("Enter customer details:\n");
    for (int i = 0; i < MAX_CUSTOMERS; i++) {
        printf("Customer %d:\n", i + 1);
        printf("Account number: ");
        scanf("%d", &customers[i].account_no);
        printf("Name: ");
        scanf("%s", customers[i].name);
        printf("Balance: ");
        scanf("%f", &customers[i].balance);
    }

    print_low_balance_customers(customers);

    return 0;
}