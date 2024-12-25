#include <cs50.h>
#include <stdio.h>
#include <string.h>


void checktypecard(bool valid, int length, string cardnumber)
{
    if (valid)
    {
        int onedigit = cardnumber[0] - '0';
        int twodigit = (cardnumber[0] - '0') * 10 + (cardnumber[1] - '0');
        int fourdigit= ((cardnumber[0]-'0')*1000)+((cardnumber[1]-'0')*100)+((cardnumber[2]-'0')*10)+((cardnumber[2]-'0')*1);

        if ((length == 13 || length == 16) && onedigit == 4)
        {
            printf("VISA\n");
        }
        else if (length == 16 && ((twodigit >= 51 && twodigit <= 55) || (fourdigit >= 2221 && fourdigit <= 2720)))
        {
            printf("MASTERCARD\n");
        }
        else if (length == 15 && (twodigit == 34 || twodigit == 37))
        {
            printf("AMEX\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }
}

int main()
{
    string cardnumber = get_string("Number: ");
    int length = strlen(cardnumber);

    if (length < 13)
    {
        printf("INVALID\n");
        return 0;
    }

    int result = evensum(cardnumber) + oddsum(cardnumber);

    bool valid = (result % 10 == 0);

    checktypecard(valid, length, cardnumber);

    return 0;
}
// as yu can see there are no folders in the repo where as i have here.