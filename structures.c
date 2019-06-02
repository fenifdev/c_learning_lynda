#include <stdio.h>
#include <string.h>

/*int main()
{
    struct bank
    {
        int account;
        float balance;
    };
    struct bank checking;

    checking.account = 1234;
    checking.balance = 567.89;

    printf("Cheking account %d has a balance of %f\n",
        checking.account,
        checking.balance
        );

    return(0);
}*/

/*int main()
{
    struct bank
    {
        int account;
        float balance;
    };
    struct bank checking, savings;

    checking.account = 1234;
    checking.balance = 567.89;
    savings.account = 9876;
    savings.balance = 543.21;

    printf("Cheking account %d has a balance of %f\n",
        checking.account,
        checking.balance
        );
    printf("Savings account %d has a balance of %f\n",
        savings.account,
        savings.balance
        );

    return(0);
}*/

/*int main()
{
    struct person {
        char name[32];
        int age;
    };
    struct person president = {
        "George Washinton",
        67
    };

    printf("%s was %d years old\n", president.name, president.age);

    return(0);
}*/

int main()
{
    struct date {
        int year;
        int month;
        int day;
    };
    struct person {
        char name[32];
        struct date birthday;
    };
    struct person friend;

    strcpy(friend.name, "Georfe Washington");
    friend.birthday.year = 1732;
    friend.birthday.month = 2;
    friend.birthday.day = 22;

    printf("My friend %s was born on %d/%d/%d \n",
        friend.name,
        friend.birthday.month,
        friend.birthday.day,
        friend.birthday.year);

    return(0);
}
