#include<stdio.h>

int main()
{
    int i;
    int ans1, ans2, ans3, ans4, ans5;
    int point1, point2, point3, point4, point5, point6, point7, point8, point9;
    int point01, point02, point03, point04, point05, point06, point07, point08, point09;
    int total1, total2, total3;

    printf("     Welcome to the Game\n\n");

    printf("\n\nPress 1 to start the game");
    printf("\n\nPress 2 to exit the game");
    scanf("%d", &i);

    if(i==1)
    {
        printf("The game has started\n\n");
    }
    else if(i==2){
        printf("The game has ended\n\n");
    }
    else{
        printf("Invalid input\n\n");
    }
    if(i==1)
    {
        printf("\n\n1.)Which One is the first search engine in internet??");
        printf("\n\nPress 1 for Google");
        printf("\n\nPress 2 for Archie");
        printf("\n\nPress 3 for Wais");
        printf("\n\nPress 4 for Altavista");
        printf("\n");
        printf("Enter Your Answer:");
        scanf("%d", &ans1);

        if(ans1==2)
        {
            printf("Your answer is correct\n\n");
            point1=10;
            printf("You have scored %d point\n", point1);
        }
        else
        {
            printf("Your answer is wrong\n\n");
            point01=0;
            printf("You have scored %d point\n", point01);
        }

        printf("\n\n2.)Which one is the first web browser invented in 1990??");
        printf("\n\nPress 1 for Internet Explorer");
        printf("\n\nPress 2 for Mosaic");
        printf("\n\nPress 3 for Mozilla");
        printf("\n\nPress 4 for Nexus");
        printf("\n");
        printf("Enter Your Answer:");
        scanf("%d", &ans2);

        if(ans2==4)
        {
            printf("Your answer is correct\n\n");
            point2=10;
            printf("You have scored %d point\n", point2);
        }
        else
        {
            printf("Your answer is wrong\n\n");
            point02=0;
            printf("You have scored %d point\n", point02);
        }

        printf("\n\n3.)First computer Virus is known as??");
        printf("\n\nPress 1 for Rabbit");
        printf("\n\nPress 2 for Creeper");
        printf("\n\nPress 3 for Elk Cloner");
        printf("\n\nPress 4 for SCA Virus");
        printf("\n");
        printf("Enter Your Answer:");
        scanf("%d", &ans3);

        if(ans3==2)
        {
            printf("Your answer is correct\n\n");
            point3=10;
            printf("You have scored %d point\n", point3);
        }
        else
        {
            printf("Your answer is wrong\n\n");
            point03=0;
            printf("You have scored %d point\n", point03);
        }

        printf("\n\n4.)Firewall in Computer is used for??");
        printf("\n\nPress 1 for Security");
        printf("\n\nPress 2 for Monitoring");
        printf("\n\nPress 3 for Data Transmission");
        printf("\n\nPress 4 for Authentication");
        printf("\n");
        printf("Enter Your Answer:");
        scanf("%d", &ans4);

        if(ans4==1)
        {
            printf("Your answer is correct\n\n");
            point4=10;
            printf("You have scored %d point\n", point4);
        }
        else
        {
            printf("Your answer is wrong\n\n");
            point04=0;
            printf("You have scored %d point\n", point04);
        }

        printf("\n\n5.)Which of the following is not a database management software??");
        printf("\n\nPress 1 for Oracle");
        printf("\n\nPress 2 for MySQL");
        printf("\n\nPress 3 for MS Access");
        printf("\n\nPress 4 for MS Excel");
        printf("\n");
        printf("Enter Your Answer:");
        scanf("%d", &ans5);

        if(ans5==4)
        {
            printf("Your answer is correct\n\n");
            point5=10;
            printf("You have scored %d point\n", point5);
        }
        else
        {
            printf("Your answer is wrong\n\n");
            point05=0;
            printf("You have scored %d point\n", point05);
        }
    }
    total1=point1+point2+point3+point4+point5;
    printf("Your total Score is:\n\n", total1);
    return 0;
}