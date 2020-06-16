
#include<stdio.h>
#include <string.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>

struct question
{
    char Q[100];//Question number
    char option[3][100];// array of 3 options incorrect
    char correct[100];//correct ans
    //int done=0;

};
void instrctns()
{
  printf("\n\n        INSTRUCTIONS:");
  printf("\n\n 1)The game consist of 15 questions.");
  printf("\n 2)You have two lifelines-50/50 and Flip the question.");
  printf("\n 3)The game has three checkpoints-questions 5, 10 & 13 and you'll");
  printf("\n atleast win the corresponding prize money if you surpass a checkpoint.");
  printf("\n 4)Press 1  to use the 50/50 lifeline.");
  printf("\n 5)Press 2 to use Flip the question lifeline.");
  printf("\n 6)Press 1,2,3 or 4 to choose the corresponding answer to a question.");
  printf("\n 7)Press S to start the game.");
  printf(" \n\n\n_______________________________________\n|           Prize money			|\n|	1	|	Rs1000		|\n|	2	|	Rs5000		|\n|	3	|	Rs10000		|\n|	4	|	Rs20000		|\n|	5	|	Rs50000		|\n|	6	|	Rs100000	|\n|	7	|	Rs200000	|\n|	8	|	Rs400000	|\n|	9	|	Rs800000	|\n|	10	|	Rs1600000	|\n|	11	|	Rs3200000	|\n|	12	|	Rs5000000	|\n|	13	|       Rs10000000	|\n|	14	|       Rs20000000	|\n|	15	|       Rs50000000	|\n-----------------------------------------\n\n\n\n\n\n");

}
int money(int a)
{
    switch(a)
    {
        case 0:return 1000;
               break;
        case 1:return 5000;
               break;
        case 2: return 10000;
               break;
        case 3: return 20000;
               break;
        case 4: return 50000;
               break;
        case 5: return 100000;
               break;
        case 6: return 200000;
               break;
        case 7: return 400000;
               break;
        case 8: return 800000;
               break;
        case 9: return 1600000;
               break;
        case 10: return 3200000;
               break;
        case 11: return 5000000;
               break;
        case 12: return 10000000;
               break;
        case 13: return 20000000;
               break;
        case 14: return 50000000;
               break;
        default: return 0;

    }
}
int home(int a)
{
    switch(a)
    {
        case 0:return 0;
               break;
        case 1:return 0;
               break;
        case 2: return 0;
               break;
        case 3: return 0;
               break;
        case 4: return 0;
               break;
        case 5: return 50000;
               break;
        case 6: return 50000;
               break;
        case 7: return 50000;
               break;
        case 8: return 50000;
               break;
        case 9: return 50000;
               break;
        case 10: return 1600000;
               break;
        case 11: return 1600000;
               break;
        case 12: return 1600000;
               break;
        case 13: return 10000000;
               break;
        case 14: return 10000000;
               break;
        default: return 0;

    }
}
void initialize(struct question kbc[100])
    {

    strcpy(kbc[0].Q,"Which of these is not a service offered by India Post?");
    strcpy(kbc[0].option[0],"Speed post");
    strcpy(kbc[0].option[1],"Registered Post");
    strcpy(kbc[0].option[2],"Book Post");
    strcpy(kbc[0].correct,"Blog Post");

    strcpy(kbc[1].Q,"Which of the following  is not a reaction you can give on a facebook post?");
    strcpy(kbc[1].option[0],"Angry");
    strcpy(kbc[1].option[1],"Like");
    strcpy(kbc[1].option[2],"Sad");
    strcpy(kbc[1].correct,"Confused");

    strcpy(kbc[2].Q,"Which of the following is also a name of a common electronic device?");
    strcpy(kbc[2].option[0],"Tortoise");
    strcpy(kbc[2].option[1],"Snail");
    strcpy(kbc[2].option[2],"Frog");
    strcpy(kbc[2].correct,"Mouse");

    strcpy(kbc[3].Q,"At the Olympic games, which medal does an individual or team at the third place receive?");
    strcpy(kbc[3].option[0],"Gold");
    strcpy(kbc[3].option[1],"Silver");
    strcpy(kbc[3].option[2],"Platinum");
    strcpy(kbc[3].correct,"Bronze");

    strcpy(kbc[4].Q,"To calculate Speed of an object, what value would you require apart from the distance travelled?");//checkpoint question
    strcpy(kbc[4].option[0],"Density");
    strcpy(kbc[4].option[1],"Voltage");
    strcpy(kbc[4].option[2],"Weight");
    strcpy(kbc[4].correct,"Time");

    strcpy(kbc[5].Q,"Which of these is a mobile payment app that allows users to send or receive money?");
    strcpy(kbc[5].option[0],"Arjun");
    strcpy(kbc[5].option[1],"Nakul");
    strcpy(kbc[5].option[2],"Sahadev");
    strcpy(kbc[5].correct,"Bhim");

    strcpy(kbc[6].Q,"Which of the following is a team event, not an individual event?");
    strcpy(kbc[6].option[0],"Weightlifting");
    strcpy(kbc[6].option[1],"Wrestling");
    strcpy(kbc[6].option[2],"Boxing");
    strcpy(kbc[6].correct,"Kho-Kho");

    strcpy(kbc[7].Q,"Which 2019 Hindi Film is a fictionalized account of a police encounter that took place in Delhi");
    strcpy(kbc[7].option[0],"Mission Mangal");
    strcpy(kbc[7].option[1],"India's Most Wanted");
    strcpy(kbc[7].option[2],"Romeo Akbar Walter");
    strcpy(kbc[7].correct,"Batla House");

    strcpy(kbc[8].Q,"Which does the 'R' stand for in the name of the educational organisation NCERT?");
    strcpy(kbc[8].option[0],"Region");
    strcpy(kbc[8].option[1],"Review");
    strcpy(kbc[8].option[2],"Reform");
    strcpy(kbc[8].correct,"Research");


    strcpy(kbc[9].Q,"Which of these is the title of a 2019 film starring Brad Pitt and Leonardo DiCaprio?");//checkpoint question
    strcpy(kbc[9].option[0],"Ford vs Ferrari");
    strcpy(kbc[9].option[1],"The Revenant");
    strcpy(kbc[9].option[2],"Ad Astra");
    strcpy(kbc[9].correct,"Once upon a time in hollywood");

    strcpy(kbc[10].Q,"After which historical or mythological figure did Sri Lanka name its first satellite?");
    strcpy(kbc[10].option[0],"Kuber");
    strcpy(kbc[10].option[1],"Buddha");
    strcpy(kbc[10].option[2],"Vibhishana");
    strcpy(kbc[10].correct,"Ravana");

    strcpy(kbc[11].Q,"In february 2019, who became the first bowler in T20I history to take 4 wickets in 4 consecutive balls?");
    strcpy(kbc[11].option[0],"Lasith Malinga");
    strcpy(kbc[11].option[1],"Kuldeep Yadav");
    strcpy(kbc[11].option[2],"Trent Boult");
    strcpy(kbc[11].correct,"Rashid Khan");

    strcpy(kbc[12].Q,"Which of these administrative districts of india is located farthest east?");//Checkpoint Question
    strcpy(kbc[12].option[0],"West Godavari");
    strcpy(kbc[12].option[1],"North Goa");
    strcpy(kbc[12].option[2],"East sikkim");
    strcpy(kbc[12].correct,"West Tripura");

    strcpy(kbc[13].Q,"Which football team has won the 2019 UEFA Champions League trophy?");
    strcpy(kbc[13].option[0],"FC Barcelona");
    strcpy(kbc[13].option[1],"Real Madrid");
    strcpy(kbc[13].option[2],"Tottenham Hotspur");
    strcpy(kbc[13].correct,"Liverpool");

    strcpy(kbc[14].Q,"Among whom does the Indian Constitution permit to take part in the Proceedings of Parliament?");
    strcpy(kbc[14].option[0],"Solicitor General");
    strcpy(kbc[14].option[1],"Cabinet Secretary");
    strcpy(kbc[14].option[2],"Chief Justice");
    strcpy(kbc[14].correct,"Attorney General");

    strcpy(kbc[15].Q,"Which of the following sparkles due to the internal reflection of light?");//Flip question
    strcpy(kbc[15].option[0],"Radium");
    strcpy(kbc[15].option[1],"Silk");
    strcpy(kbc[15].option[2],"Gold");
    strcpy(kbc[15].correct,"Diamond");
    }
void wait()
{    printf("loading next question");
    for(int i=0;i<500000000;i++)
    {
        if(i%50000000==0)
        {
            printf("%d#",10-((i)/50000000));
            for(int j=0;j<200000000;j++);
        }

    }
}


int main(){
   struct question kbc[100];
   initialize(kbc);
   instrctns();
   srand(time(0));
   int co,ba;
   int a,b,c,d;
   char ch,ch1;
   int fifty=0,change=0;
   printf("Enter S to start:--");
   scanf(" %c",&ch);


   if(ch=='S'||ch=='s')
        {
            for(int i=0;i<15;i++)
                                {system("cls");
                                a=rand()%4;
                                b=rand()%4;
                                c=rand()%4;
                                d=rand()%4;
                                while(a==b)
                                {
                                  b=rand()%4;
                                }
                                while(a==c||b==c)
                                {
                                   c=rand()%4;
                                }
                                while(a==d||b==d||c==d)
                                {
                                   d=rand()%4;
                                }

                                printf("Q%d) %s\n",i+1,kbc[i].Q);
                                printf("1)");
                                switch(a)
                                {
                                 case 0:printf(" %s\n",kbc[i].option[0]);
                                 break;
                                 case 1:printf(" %s\n",kbc[i].option[1]);
                                 break;
                                 case 2:printf(" %s\n",kbc[i].option[2]);
                                 break;
                                 case 3:printf(" %s\n",kbc[i].correct);
                                 break;
                                 default:
                                    break;
                                }
                                printf("\n2)");
                                switch(b)
                                {
                                 case 0:printf(" %s\n",kbc[i].option[0]);
                                 break;
                                 case 1:printf(" %s\n",kbc[i].option[1]);
                                 break;
                                 case 2:printf(" %s\n",kbc[i].option[2]);
                                 break;
                                 case 3:printf(" %s\n",kbc[i].correct);
                                 break;
                                 default:
                                    break;
                                }
                                printf("\n3)");
                                switch(c)
                                {
                                 case 0:printf(" %s\n",kbc[i].option[0]);
                                 break;
                                 case 1:printf(" %s\n",kbc[i].option[1]);
                                 break;
                                 case 2:printf(" %s\n",kbc[i].option[2]);
                                 break;
                                 case 3:printf(" %s\n",kbc[i].correct);
                                 break;
                                 default:
                                    break;
                                }
                                printf("\n4)");
                                switch(d)
                                {
                                 case 0:printf(" %s\n",kbc[i].option[0]);
                                 break;
                                 case 1:printf(" %s\n",kbc[i].option[1]);
                                 break;
                                 case 2:printf(" %s\n",kbc[i].option[2]);
                                 break;
                                 case 3:printf(" %s\n",kbc[i].correct);
                                 break;
                                 default:
                                    break;
                                }
                                ch1='n';
                                if(fifty==0&&change==0)
                                {
                                    printf("\n\n\nLifelines left-->>> 1)50/50    2)Change the question \n\n\n");
                                }
                                else if(fifty==0)
                                {
                                    printf("\n\n\nLifelines left-->>> 1)50/50\n\n\n");
                                }
                                else if(change==0)
                                {
                                    printf("\n\n\nLifelines left-->>> 1)Change the question\n\n\n");
                                }
                                else{
                                    printf("\n\n\nNo lifelines left\n\n\n");
                                }
                                if(fifty==0||change==0)
                                {printf("do you want a lifeline?[y/n]------>>");
                                scanf(" %c",&ch1);}
                                if(ch1=='y'||ch1=='Y')
                                {   if(fifty==0&&change==0)
                                    {
                                       printf("Enter 1 for 50/50 and 2 for change question----->>>");
                                       scanf(" %d",&ba);
                                       if(ba==1)

                                       {   system("cls");
                                           fifty++;
                                           printf("@@@@@@@@@@@@@@@@@@@@USING 50/50@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
                                           printf(" %s\n",kbc[i].Q);
                                           a=rand()%2;
                                           b=rand()%2;
                                           while(a==b)
                                                {
                                                  b=rand()%2;
                                                   }
                                            printf("1)");
                                switch(a)
                                {
                                 case 0:printf(" %s\n",kbc[i].option[rand()%3]);
                                 break;
                                 case 1:printf(" %s\n",kbc[i].correct);
                                 break;
                                 default:
                                    break;
                                }
                                printf("\n2)");
                                switch(b)
                                {
                                 case 0:printf(" %s\n",kbc[i].option[rand()%3]);
                                 break;
                                 case 1:printf(" %s\n",kbc[i].correct);
                                 break;
                                 default:
                                    break;
                                }
                                printf("Enter the answer (1,2)----->");
                                scanf("%d", &co);

                                if(co==1&&a==1)
                                {
                                 printf("################CORRECT###################\n\n\n\n");
                                 printf("*********MONEY WON=%d**********\n\n\n\n",money(i));
                                 wait();
                                }
                                else if(co==2&&b==1)
                                {
                                printf("################CORRECT###################\n\n\n\n");
                                printf("*********MONEY WON=%d**********\n\n\n\n",money(i));
                                wait();
                                }
                                else
                                {
                                printf("#######################WRONG########################\n\n\n");
                                printf("*********TAKE AWAY MONEY=%d**********\n\n\n\n",home(i));
                                break;
                                }


                                       }
                                else if(ba==2)
                                { change++;
                                   system("cls");

                                printf("\n\n@@@@@@@@@@@@@@@@@@@@CHANGED QUESTION@@@@@@@@@@@@@@@@@@@@@@@@@2\n\n");
                                a=rand()%4;
                                b=rand()%4;
                                c=rand()%4;
                                d=rand()%4;
                                while(a==b)
                                {
                                  b=rand()%4;
                                }
                                while(a==c||b==c)
                                {
                                   c=rand()%4;
                                }
                                while(a==d||b==d||c==d)
                                {
                                   d=rand()%4;
                                }

                                printf("Q%d) %s\n",i+1,kbc[15].Q);
                                printf("1)");
                                switch(a)
                                {
                                 case 0:printf(" %s\n",kbc[15].option[0]);
                                 break;
                                 case 1:printf(" %s\n",kbc[15].option[1]);
                                 break;
                                 case 2:printf(" %s\n",kbc[15].option[2]);
                                 break;
                                 case 3:printf(" %s\n",kbc[15].correct);
                                 break;
                                 default:
                                    break;
                                }
                                printf("\n2)");
                                switch(b)
                                {
                                 case 0:printf(" %s\n",kbc[15].option[0]);
                                 break;
                                 case 1:printf(" %s\n",kbc[15].option[1]);
                                 break;
                                 case 2:printf(" %s\n",kbc[15].option[2]);
                                 break;
                                 case 3:printf(" %s\n",kbc[15].correct);
                                 break;
                                 default:
                                    break;
                                }
                                printf("\n3)");
                                switch(c)
                                {
                                 case 0:printf(" %s\n",kbc[15].option[0]);
                                 break;
                                 case 1:printf(" %s\n",kbc[15].option[1]);
                                 break;
                                 case 2:printf(" %s\n",kbc[15].option[2]);
                                 break;
                                 case 3:printf(" %s\n",kbc[15].correct);
                                 break;
                                 default:
                                    break;
                                }
                                printf("\n4)");
                                switch(d)
                                {
                                 case 0:printf(" %s\n",kbc[15].option[0]);
                                 break;
                                 case 1:printf(" %s\n",kbc[15].option[1]);
                                 break;
                                 case 2:printf(" %s\n",kbc[15].option[2]);
                                 break;
                                 case 3:printf(" %s\n",kbc[15].correct);
                                 break;
                                 default:
                                    break;
                                }
                                printf("Enter the answer (1,2,3 or 4)----->");
                                scanf("%d", &co);

                                if(co==1&&a==3)
                                {
                                 printf("################CORRECT###################\n\n\n\n");
                                 printf("*********MONEY WON=%d**********\n\n\n\n",money(i));
                                 wait();
                                }
                                else if(co==2&&b==3)
                                {
                                printf("################CORRECT###################\n\n\n\n");
                                printf("*********MONEY WON=%d**********\n\n\n\n",money(i));
                                wait();
                                }
                                else if(co==3&&c==3)
                                {
                                printf("################CORRECT###################\n\n\n\n");
                                printf("*********MONEY WON=%d**********\n\n\n\n",money(i));
                                wait();
                                }
                                else if(co==4&&d==3)
                                {
                                printf("################CORRECT###################\n\n\n\n");
                                printf("*********MONEY WON=%d**********\n\n\n\n",money(i));
                                wait();
                                }
                                else
                                {
                                printf("#######################WRONG########################\n\n\n");
                                printf("*********TAKE AWAY MONEY=%d**********\n\n\n\n",home(i));
                                break;
                                }
                                }
                                    }
                                else if(fifty==0)
                                {
                                    system("cls");
                                           fifty++;

                                           printf("@@@@@@@@@@@@@@@@@@@@USING 50/50@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
                                           printf(" %s\n",kbc[i].Q);
                                           a=rand()%2;
                                           b=rand()%2;
                                           while(a==b)
                                                {
                                                  b=rand()%2;
                                                   }
                                            printf("1)");
                                switch(a)
                                {
                                 case 0:printf(" %s\n",kbc[i].option[rand()%3]);
                                 break;
                                 case 1:printf(" %s\n",kbc[i].correct);
                                 break;
                                 default:
                                    break;
                                }
                                printf("\n2)");
                                switch(b)
                                {
                                 case 0:printf(" %s\n",kbc[i].option[rand()%3]);
                                 break;
                                 case 1:printf(" %s\n",kbc[i].correct);
                                 break;
                                 default:
                                    break;
                                }
                                printf("Enter the answer (1,2)----->");
                                scanf("%d", &co);

                                if(co==1&&a==1)
                                {
                                 printf("################CORRECT###################\n\n\n\n");
                                 printf("*********MONEY WON=%d**********\n\n\n\n",money(i));
                                 wait();
                                }
                                else if(co==2&&b==1)
                                {
                                printf("################CORRECT###################\n\n\n\n");
                                printf("*********MONEY WON=%d**********\n\n\n\n",money(i));
                                wait();
                                }
                                else
                                {
                                printf("#######################WRONG########################\n\n\n");
                                printf("*********TAKE AWAY MONEY=%d**********\n\n\n\n",home(i));
                                break;
                                }


                                       }

                                else if(change==0)
                                { change++;
                                   system("cls");

                                printf("\n\n@@@@@@@@@@@@@@@@@@@@CHANGED QUESTION@@@@@@@@@@@@@@@@@@@@@@@@@2\n\n");
                                a=rand()%4;
                                b=rand()%4;
                                c=rand()%4;
                                d=rand()%4;
                                while(a==b)
                                {
                                  b=rand()%4;
                                }
                                while(a==c||b==c)
                                {
                                   c=rand()%4;
                                }
                                while(a==d||b==d||c==d)
                                {
                                   d=rand()%4;
                                }

                                printf("Q%d) %s\n",i+1,kbc[15].Q);
                                printf("1)");
                                switch(a)
                                {
                                 case 0:printf(" %s\n",kbc[15].option[0]);
                                 break;
                                 case 1:printf(" %s\n",kbc[15].option[1]);
                                 break;
                                 case 2:printf(" %s\n",kbc[15].option[2]);
                                 break;
                                 case 3:printf(" %s\n",kbc[15].correct);
                                 break;
                                 default:
                                    break;
                                }
                                printf("\n2)");
                                switch(b)
                                {
                                 case 0:printf(" %s\n",kbc[15].option[0]);
                                 break;
                                 case 1:printf(" %s\n",kbc[15].option[1]);
                                 break;
                                 case 2:printf(" %s\n",kbc[15].option[2]);
                                 break;
                                 case 3:printf(" %s\n",kbc[15].correct);
                                 break;
                                 default:
                                    break;
                                }
                                printf("\n3)");
                                switch(c)
                                {
                                 case 0:printf(" %s\n",kbc[15].option[0]);
                                 break;
                                 case 1:printf(" %s\n",kbc[15].option[1]);
                                 break;
                                 case 2:printf(" %s\n",kbc[15].option[2]);
                                 break;
                                 case 3:printf(" %s\n",kbc[15].correct);
                                 break;
                                 default:
                                    break;
                                }
                                printf("\n4)");
                                switch(d)
                                {
                                 case 0:printf(" %s\n",kbc[15].option[0]);
                                 break;
                                 case 1:printf(" %s\n",kbc[15].option[1]);
                                 break;
                                 case 2:printf(" %s\n",kbc[15].option[2]);
                                 break;
                                 case 3:printf(" %s\n",kbc[15].correct);
                                 break;
                                 default:
                                    break;
                                }
                                printf("Enter the answer (1,2,3 or 4)----->");
                                scanf("%d", &co);

                                if(co==1&&a==3)
                                {
                                 printf("################CORRECT###################\n\n\n\n");
                                 printf("*********MONEY WON=%d**********\n\n\n\n",money(i));
                                 wait();
                                }
                                else if(co==2&&b==3)
                                {
                                printf("################CORRECT###################\n\n\n\n");
                                printf("*********MONEY WON=%d**********\n\n\n\n",money(i));
                                wait();
                                }
                                else if(co==3&&c==3)
                                {
                                printf("################CORRECT###################\n\n\n\n");
                                printf("*********MONEY WON=%d**********\n\n\n\n",money(i));
                                wait();
                                }
                                else if(co==4&&d==3)
                                {
                                printf("################CORRECT###################\n\n\n\n");
                                printf("*********MONEY WON=%d**********\n\n\n\n",money(i));
                                wait();
                                }
                                else
                                {
                                printf("#######################WRONG########################\n\n\n");
                                printf("*********TAKE AWAY MONEY=%d**********\n\n\n\n",home(i));
                                break;
                                }
                                }




                                }
                                else if(ch1=='n'||ch1=='N')
                                {

                                printf("Enter the answer (1,2,3 or 4)----->");
                                scanf("%d", &co);

                                if(co==1&&a==3)
                                {
                                 printf("################CORRECT###################\n\n\n\n");
                                 printf("*********MONEY WON=%d**********\n\n\n\n",money(i));
                                 wait();
                                }
                                else if(co==2&&b==3)
                                {
                                printf("################CORRECT###################\n\n\n\n");
                                printf("*********MONEY WON=%d**********\n\n\n\n",money(i));
                                wait();
                                }
                                else if(co==3&&c==3)
                                {
                                printf("################CORRECT###################\n\n\n\n");
                                printf("*********MONEY WON=%d**********\n\n\n\n",money(i));
                                wait();
                                }
                                else if(co==4&&d==3)
                                {
                                printf("################CORRECT###################\n\n\n\n");
                                printf("*********MONEY WON=%d**********\n\n\n\n",money(i));
                                wait();
                                }
                                else
                                {
                                printf("#######################WRONG########################\n\n\n");
                                printf("*********TAKE AWAY MONEY=%d**********\n\n\n\n",home(i));
                                break;
                                }
                                }

                                if(i==14)
                                {   system("cls");
                                    printf("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n!!!!!!!!!!!!!!!!!!!!!!!!!!!CONGRATS YOU HAVE WON !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!5 CRORE RS!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
}


                                  }


}
   return 0;
}

