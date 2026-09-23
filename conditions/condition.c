/*
Author:NetworkBinary
Reg no:BCS-05-0541
*/


#include <stdio.h>

int main()
{
    int due_date, return_date, book_id, date_overdue;
    printf("Enter the bookID\t");
    scanf("%d", &book_id);

    printf("Enter the dueDate\t");
    scanf("%d", &due_date);

    printf("Enter the return date\t");
    scanf("%d", &return_date);

    if (return_date > due_date) {
              date_overdue = return_date - due_date;
        if (date_overdue <= 7) {
            printf("Payment is Ksh 20");
        } else if (date_overdue >= 8 && date_overdue <= 14) {
                       printf("Payment is Ksh 50");
        } else {
            printf("Payment is Ksh 100");

        }

    }else {
        printf("No payment");

    }
          return 0;
}
