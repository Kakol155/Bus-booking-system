#include <stdio.h>
#include <stdlib.h>
#include <io.h>
#include <time.h>
#include<string.h>

int main()
{
    FILE *file;

    float CurrentBalance;
    char BalanceValueFromFileChar[100];
    float BalanceValueFromFileFloat;
    float BalanceUpdated1;
    float BalanceUpdated2;
    char TicketToBeDeleted[50];
    char TicketToBeChecked[50];
    char InformationFromFile[100];
    char BalanceFile[50] = "CurrentBalance.txt";
    int value;
    int i = 0;

    int r;
    int e;

    for(i; i < 500; i++)
 {

    puts("");
    puts("");
    printf("|-----------------------------|\n");
    printf("|1.Buy a ticket               |\n");
    printf("|2.Delete the ticket          |\n");
    printf("|3.View your purchased tickets|\n");
    printf("|4.Exit                       |\n");
    printf("|-----------------------------|\n");
    puts("");
    puts("");

    printf("Enter number: \n");
    scanf("%d",&e);

    if(e == 1)
    {


    file = fopen("CurrentBalance.txt","r");

    fgets(BalanceValueFromFileChar,100,file);

    fclose(file);




    puts("");
    printf("Enter your balance, if you do not top up your account because you have funds, enter 0: \n");
    printf("Your current balance: %s \n",BalanceValueFromFileChar);
    scanf("%f",&CurrentBalance);

    if(CurrentBalance == 0)
    {
        file = fopen("CurrentBalance.txt","w");

        sscanf(BalanceValueFromFileChar,"%f",&BalanceValueFromFileFloat);

        printf("Current balance: %f \n",BalanceValueFromFileFloat);

        BalanceUpdated1 = BalanceValueFromFileFloat;

        fprintf(file,"%f",BalanceUpdated1);



        puts("");

        fclose(file);
    }

    if(CurrentBalance > 0)
    {

    file = fopen("CurrentBalance.txt","w");

    puts("");

    sscanf(BalanceValueFromFileChar,"%f",&BalanceValueFromFileFloat);

    BalanceUpdated1 = CurrentBalance + BalanceValueFromFileFloat;

    fprintf(file,"%f",BalanceUpdated1);

    fclose(file);


    printf("Current balance: %f \n",BalanceUpdated1);
    puts("");


    }

    printf("|---------------------------------------------------|\n");
    printf("|1.| Katowice - Krakow | 10:10 - 11:20 | Price 16 zl|\n");
    printf("|2.| Krakow - Katowice | 12:00 - 13:25 | Price 16 zl|\n");
    printf("|3.| Katowice - Wroclaw| 15:00 - 16:25 | Price 20 zl|\n");
    printf("|4.| Wroclaw - Katowice| 18:00 - 19:25 | Price 20 zl|\n");
    printf("|5.| Wroclaw - Krakow  | 20:00 - 21:25 | Price 25 zl|\n");
    printf("|6.| Krakow - Wroclaw  | 21:40 - 23:25 | Price 25 zl|\n");
    printf("|---------------------------------------------------|\n");
    puts("");

    printf("Enter number: \n");
    scanf("%d",&r);


    if(r == 1)
    {
        if(BalanceUpdated1 < 16)
        {
            printf("Not enough money \n");
            return 0;
        }

        if(BalanceUpdated1 >= 16)
        {
            BalanceUpdated2 = BalanceUpdated1 - 16;

            file = fopen("CurrentBalance.txt","w");

            fprintf(file,"%f",BalanceUpdated2);

            fclose(file);

            printf("Ticket bought, your current balance: %f \n",BalanceUpdated2);

            file = fopen("1Ticket.txt","w");

            fprintf(file,"| Katowice - Krakow | 10:10 - 11:20 | Price 16 zl | \n");

            fclose(file);


        }
    }

    if(r == 2)
    {
        if(BalanceUpdated1 < 16)
        {
            printf("Not enough money \n");
            return 0;
        }

        if(BalanceUpdated1 >= 16)
        {
            BalanceUpdated2 = BalanceUpdated1 - 16;

            file = fopen("CurrentBalance.txt","w");

            fprintf(file,"%f",BalanceUpdated2);

            fclose(file);

            printf("Ticket bought, your current balance: %f \n",BalanceUpdated2);

            file = fopen("2Ticket.txt","w");

            fprintf(file,"| Krakow - Katowice | 12:00 - 13:25 | Price 16 zl | \n");

            fclose(file);


        }
    }

    if(r == 3)
    {
        if(BalanceUpdated1 < 20)
        {
            printf("Not enough money \n");
            return 0;
        }

        if(BalanceUpdated1 >= 20)
        {
            BalanceUpdated2 = BalanceUpdated1 - 20;

            file = fopen("CurrentBalance.txt","w");

            fprintf(file,"%f",BalanceUpdated2);

            fclose(file);

            printf("Ticket bought, your current balance: %f \n",BalanceUpdated2);

            file = fopen("3Ticket.txt","w");

            fprintf(file,"| Katowice - Wroclaw| 15:00 - 16:25 | Price 20 zl | \n");

            fclose(file);


        }
    }

    if(r == 4)
    {
        if(BalanceUpdated1 < 20)
        {
            printf("Not enough money \n");
            return 0;
        }

        if(BalanceUpdated1 >= 20)
        {
            BalanceUpdated2 = BalanceUpdated1 - 20;

            file = fopen("CurrentBalance.txt","w");

            fprintf(file,"%f",BalanceUpdated2);

            fclose(file);

            printf("Ticket bought, your current balance: %f \n",BalanceUpdated2);

            file = fopen("4Ticket.txt","w");

            fprintf(file,"| Wroclaw - Katowice| 18:00 - 19:25 | Price 20 zl | \n");

            fclose(file);


        }
    }

    if(r == 5)
    {
        if(BalanceUpdated1 < 25)
        {
            printf("Not enough money \n");
            return 0;
        }

        if(BalanceUpdated1 >= 25)
        {
            BalanceUpdated2 = BalanceUpdated1 - 25;

            file = fopen("CurrentBalance.txt","w");

            fprintf(file,"%f",BalanceUpdated2);

            fclose(file);

            printf("Ticket bought, your current balance: %f \n",BalanceUpdated2);

            file = fopen("5Ticket.txt","w");

            fprintf(file,"| Wroclaw - Krakow  | 20:00 - 21:25 | Price 25 zl | \n");

            fclose(file);


        }
    }

    if(r == 6)
    {
        if(BalanceUpdated1 < 25)
        {
            printf("Not enough money \n");
            return 0;
        }

        if(BalanceUpdated1 >= 25)
        {
            BalanceUpdated2 = BalanceUpdated1 - 25;

            file = fopen("CurrentBalance.txt","w");

            fprintf(file,"%f",BalanceUpdated2);

            fclose(file);

            printf("Ticket bought, your current balance: %f \n",BalanceUpdated2);

            file = fopen("6Ticket.txt","w");

            fprintf(file,"| Krakow - Wroclaw  | 21:40 - 23:25 | Price 25 zl | \n");

            fclose(file);


        }
    }

    }



    if(e == 2)
    {
        printf("All files with tickets: \n\n");

        struct _finddata_t txt_file;
        intptr_t eFile;

        if( (eFile = _findfirst( "*Ticket.txt", &txt_file )) == -1L )
        {
            printf( "No files with tickets\n" );
            return 0;
        }


        else

        {

        do {
        char buffer[30];

        ctime_s( buffer, _countof(buffer), &txt_file.time_write );
        printf( "%s, ",txt_file.name );

        } while( _findnext( eFile, &txt_file ) == 0 );
        _findclose( eFile );

        puts("");
        printf("Enter the file with the ticket you want to delete:\n");
        scanf("%s",&TicketToBeDeleted);

        value = strcmp(TicketToBeDeleted,BalanceFile);

        if(value == 0)
        {
            printf("CurrentBalance.txt is not a ticket \n");
            return 0;
        }

        else
        {
            remove(TicketToBeDeleted);
        }



        }

    }

    if(e == 3)
    {
        printf("All files with tickets: \n\n");

        struct _finddata_t txt_file;
        intptr_t eFile;

        if( (eFile = _findfirst( "*Ticket.txt", &txt_file )) == -1L )
        {
            printf( "No files with tickets\n" );
            return 0;
        }


        else
        {

        do {
        char buffer[30];

        ctime_s( buffer, _countof(buffer), &txt_file.time_write );
        printf( "%s, ",txt_file.name );

        } while( _findnext( eFile, &txt_file ) == 0 );
        _findclose( eFile );

        puts("");
        printf("Enter the file with the ticket you want to see details:\n");
        scanf("%s",&TicketToBeChecked);


        value = strcmp(TicketToBeChecked,BalanceFile);

        if(value == 0)
        {
            printf("CurrentBalance.txt is not a ticket \n");
            return 0;
        }

        else
        {

        file = fopen(TicketToBeChecked,"r");


        puts("");
        while(fgets(InformationFromFile,100,file))
        {
        printf("%s",InformationFromFile);
        }

        fclose(file);

        }

        }

    }


    if(e == 4)
    {
        return;
    }
 }

    return 0;
}


