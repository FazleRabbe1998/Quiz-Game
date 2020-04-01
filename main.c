#include<stdio.h>
#include<conio.h>
#include <windows.h>
#include<time.h>
#include"displayscore.c"
#include"start.c"
#include"help.c"
#include"writescore.c"


int main()
{
    start();
    int countq,countr;
    int r,i;
    int pa;
    int nq[6];
    int w;
    float score;
    char choice;
    char playername[20];
    time_t initialtime,finaltime;


      printf("\n\t\t  ______________________________________________");
     printf("\n\t\t\t\t      WELCOME ");
     printf("\n\t\t\t\t         to ");
     printf("\n\t\t\t\t   THE QUIZ GAME ");
     printf("\n\t\t  ______________________________________________");
     printf("\n\t\t  ______________________________________________");
     printf("\n\t\t  ______________________________________________");
     printf("\n\t\t\t\t MADE FOR EE1222 PROJECT    ") ;
     printf("\n\t\t  ______________________________________________");
     printf("\n\t\t  ______________________________________________");
    int d1 = 1, d2 = 1;
    for ( d1 = 1 ; d1 <= 30000 ; d1++ )
    for ( d2 = 1 ; d2 <= 30000 ; d2++ )
       {}
    system("cls");





mainhome:
    system("cls");
    printf("\n\t\t WELCOME .  ACCEPT THE CHALLANGE AND SHOW YOUR TALENT.\n\n") ;
    printf("\n\t\t===============================");

    printf("\n\t\t Press 'S' to start game       ");
    printf("\n\t\t Press 'V' to view high score  ");
    printf("\n\t\t Press 'H' for help            ");
    printf("\n\t\t Press 'Q' to quit             ");
    printf("\n\t\t===============================\n\n\t\t  ");
    choice=toupper(getch());
    if (choice=='V')
    {
        displayscore();
        goto mainhome;
    }
    else if (choice=='Q')
        exit(1);
    else if (choice=='H')
    {
        help();
        getch();
        goto mainhome;
    }
    else if(choice=='S')
    {
        system("cls");

        printf("\n\n\n\t\t\tEnter your name...");
        printf("\n\t\t\t(only one word)\n\n\t\t\t");
        gets(playername);

home:
        system("cls");
        start();
        initialtime=time(NULL);
        countq=countr=0;
        i=1;
start:
        srand ( time(NULL) );
        r=rand()%23+1;
        nq[i]=r;
        for (w=0; w<i; w++)
            if (nq[w]==r) goto start;

        switch(r)
        {
        case 1:
            printf("\n\nWhen was 'Bangladesh Shishu Academy' established ? ");
            printf("\n\nA.1976\tB.1974\n\nC.1978\tD.1982\n\n");
            countq++;
            if (toupper(getch())=='A')

              {

                printf("\n\nCorrect!!!");
                countr++;
                break;
              }

            else
            {
                printf("\n\nYou Are Wrong!!! The correct answer is D");
                break;
            }

        case 2:
            printf("\n\n\nWhich is the 11th city corporation of Bangladesh?");
            printf("\n\nA.Gazipur\tB.Khulna\n\nC.Rangpur\tD.Maymansing\n\n");
            countq++;
            if (toupper(getch())=='A')
            {
                printf("\n\nCorrect!!!");
                countr++;
                break;
            }
            else
                printf("\n\nYou Are Wrong!!! The correct answer is A");
            break;

        case 3:
            printf("\n\n\nWhat is the minimum age of a person in Bangladesh for voting?");
            printf("\n\nA.20\tB.15\n\nC.17\tD.18\n\n");
            countq++;
            if (toupper(getch())=='D')
            {
                printf("\n\nCorrect!!!");
                countr++;
                break;
            }
            else
            {
                printf("\n\nYou AreWrong!!! The correct answer is D");
                break;
            }


        case 4:
            printf("\n\n\nWhen was 'Muslim League' established ?");
            printf("\n\nA.1906\tB.1801\n\nC.1806\tD.1901\n\n");
            countq++;
            if (toupper(getch())=='A')
            {
                printf("\n\nCorrect!!!");
                countr++;
                break;
            }
            else
            {
                printf("\n\nYou Are Wrong!!! The correct answer is A");
                break;
            }


        case 5:
            printf("\n\n\nWhat is the number of members in 'Bangladesh Judicial Commission?'");
            printf("\n\nA.17\tB.14\n\nC.11\tD.9\n\n");
            countq++;
            if (toupper(getch())=='c')
            {
                printf("\n\nCorrect!!!");
                countr++;
                break;
            }
            else
            {
                printf("\n\nYou Are Wrong!!! The correct answer is C");
                break;
            }

        case 6:
            printf("\n\n\nWhere is 'Noughati Titumir' situated?");
            printf("\n\nA.Dhaka\t\tB.Khulna\n\nC.Barisal\tD.Kushtia\n\n");
            countq++;
            if (toupper(getch())=='B' )
            {
                printf("\n\nCorrect!!!");
                countr++;
                break;
            }
            else
            {
                printf("\n\nYou Are Wrong!!! The correct answer is B");
                break;
            }


        case 7:
            printf("\n\n\nWhen was 'Mongla Port' established?");
            printf("\n\nA.1974\tB.1975\n\nC.1977\tD.1976\n\n");
            countq++;
            if (toupper(getch())=='C')
            {
                printf("\n\nCorrect!!!");
                countr++;
                break;
            }
            else
            {
                printf("\n\nYou Are Wrong!!! The correct answer is C");
                break;
            }


        case 8:
            printf("\n\n\nWhat is the first satelite channel in Bangladesh?");
            printf("\n\nA.GTV\tB.NTV\n\nC.BTV\tD.ATN Bangla\n\n");
            countq++;
            if (toupper(getch())=='D')
            {
                printf("\n\nCorrect!!!");
                countr++;
                break;
            }
            else
            {
                printf("\n\nYou Are Wrong!!! The correct answer is D");
                break;
            }


        case 9:
            printf("\n\nWhich is the first EPZ of Bangladesh?\n");
            printf("\n\nA.Chittagong EPZ\tB.Savar EPZ\n\nC.Ishwardi EPZ\t\tD.none\n\n");
            countq++;
            if (toupper(getch())=='A')
            {
                printf("\n\nCorrect!!!");
                countr++;
                break;
            }
            else
            {
                printf("\n\nYou Are Wrong!!! The correct answer is A");
                break;
            }


        case 10:
            printf("\n\n\nWhere is 'Ahsan Monjil' situated?");
            printf("\n\nA.Barisal\tB.Rangpur\n\nC.Dhaka\t\tD.Rajshahi\n\n");
            countq++;
            if (toupper(getch())=='C')
            {
                printf("\n\nCorrect!!!");
                countr++;
                break;
            }
            else
            {
                printf("\n\nYou are Wrong!!! The correct answer is C");
                break;
            }


        case 11:
            printf("\n\n\nWhat is the name of the central bank in Bangladesh ?");
            printf("\n\nA.Sonali Bank\t\tB.Rupali Bank\n\nC.Bangladesh Bank\tD.Janata Bank\n\n");
            countq++;
            if (toupper(getch())=='C')
            {
                printf("\n\nCorrect!!!");
                countr++;
                break;
            }
            else
            {
                printf("\n\nYou are Wrong!!! The correct answer is C.");
                break;
            }

        case 12:
            printf("\n\n\nWhat is the first museum in Bangladesh?");
            printf("\n\nA.Shadhinota Museum\tB.National Museum\n\nC.Barendro Museum\tD.Historical Museum\n\n");
            countq++;
            if (toupper(getch())=='C')
            {
                printf("\n\nCorrect!!!");
                countr++;
                break;
            }
            else
            {
                printf("\n\nYou Are Wrong!!! The correct answer is B");
                break;
            }

        case 13:
            printf("\n\n\nWhat is the name of national mosque in Bangladesh?");
            printf("\n\nA.Baitul Mokarram Mosque\tB.Kakrail Mosque\n\nC.Lalbag Mosque\t\tD.None\n\n");
            countq++;
            if (toupper(getch())=='A')
            {
                printf("\n\nCorrect!!!");
                countr++;
                break;
            }
            else
            {
                printf("\n\nYou are Wrong!!! The correct answer is A");
                break;
            }

        case 14:
            printf("\n\n\nWhat is the area of 'Sundarban'?");
            printf("\n\nA.10000 sq meter\tB.11000 sq meter\n\nC.12000 sq meter\tD.15000 sq meter\n\n");
            countq++;
            if (toupper(getch())=='A')
            {
                printf("\n\nCorrect!!!");
                countr++;
                break;
            }
            else
            {
                printf("\n\nYou are Wrong!!! The correct answer is A");
                break;
            }

        case 15:
            printf("\n\n What is the national tree ?");
            printf("\n\nA.Banana \tB.Bamboo\n\nC.Jack Fruit\tD.Mango\n\n");
            countq++;
            if (toupper(getch())=='D')
            {
                printf("\n\nCorrect!!!");
                countr++;
                break;
            }
            else
            {
                printf("\n\nYou Are Wrong!!! The correct answer is D");
                break;
            }

        case 16:
            printf("\n\n\nWhat is the first spelling of the capital of BANGLADESH ?");
            printf("\n\nA.Daka\tB.Dhaka\n\nC.Dacca\tD.Daca\n\n");
            countq++;
            if (toupper(getch())=='C')
            {
                printf("\n\nCorrect!!!");
                countr++;
                break;
            }
            else
            {
                printf("\n\nYou Are Wrong!!! The correct answer is C");
                break;
            }


        case 17:
            printf("\n\n\nWhat is the symbol of 'Astatine'?");
            printf("\n\nA.As\tB.Ac\n\nC.At\tD.None\n\n");
            countq++;
            if (toupper(getch())=='C')
            {
                printf("\n\nCorrect!!!");
                countr++;
                break;
            }
            else
            {
                printf("\n\nYou Are Wrong!!! The correct answer is C");
                break;
            }

        case 18:
            printf("\n\n\nWhich is the composite particle ?");
            printf("\n\nA.Payon\t\tB.Meson\n\nC.Neutron\tD.Alpha Particle\n\n");
            countq++;
            if (toupper(getch())=='D')
            {
                printf("\n\nCorrect!!!");
                countr++;
                break;
            }
            else
            {
                printf("\n\nYou Are Wrong!!! The correct answer is D");
                break;
            }

        case 19:
            printf("\n\n\nWhat is the shape of 's' orbital in an atom ?");
            printf("\n\nA.Stright\tB.Cylindical\n\nC.Circular\tD.None\n\n");
            countq++;
            if (toupper(getch())=='C')
            {
                printf("\n\nCorrect!!!");
                countr++;
                break;
            }
            else
            {
                printf("\n\nYou Are Wrong!!! The correct answer is C");
                break;
            }

        case 20:
            printf("\n\n\nWhat is the condition ellipse?");
            printf("\n\nA.e<1\tB.e>1\n\nC.e=0\tD.e=1\n\n");
            countq++;
            if (toupper(getch())=='A')
            {
                printf("\n\nCorrect!!!");
                countr++;
                break;
            }
            else
            {
                printf("\n\nYou Are Wrong!!! The correct answer is A");
                break;
            }

        case 21:
            printf("\n\n\Which is n-type of semi-conductor?");
            printf("\n\nA.Aluminium\tB.Boron\n\nC.Gallium\tD.None\n\n");
            countq++;
            if (toupper(getch())=='C')
            {
                printf("\n\nCorrect!!!");
                countr++;
                break;
            }
            else
            {
                printf("\n\nYou Are Wrong!!! The correct answer is C");
                break;
            }

        case 22:
            printf("\n\n\nWhat is the unit of cone in three dimension ?");
            printf("\n\nA.rad\tB.k\n\nC.Cd\tD.Sr\n\n");
            countq++;
            if (toupper(getch())=='D')
            {
                printf("\n\nCorrect!!!");
                countr++;
                break;
            }
            else
            {
                printf("\n\nYou Are Wrong!!! The correct answer is D");
                break;
            }

        case 23:
            printf("\n\n\nWhich of the following equation is right ?");
            printf("\n\nA.F=mv\tB.v=mg\n\nC.F=bv\tD.F=ma\n\n");
            countq++;
            if (toupper(getch())=='D')
            {
                printf("\n\nCorrect!!!");
                countr++;
                break;
            }
            else
            {
                printf("\n\nYou Are Wrong!!! The correct answer is D");
                break;
            }



        }
        i++;
        if (i<=5) goto start;
        finaltime=time(NULL);
        score=(float)countr/countq*100-difftime(finaltime,initialtime)/3;
        if (score<0) score=0;
        printf("\n\n\nYour Score: %.2f",score);
        if (score==100) printf("\n\nEXCELLENT!!! KEEP IT UP");
        else if (score>=80 && score<100) printf("\n\nWell done .VERY GOOD!!");
        else if (score>=60 &&score<80) printf("\n\nGOOD. You are good in G.k.");
        else if (score>=40 && score<60) printf("\n\nGood . But you can do some improvement ");
        else printf("\n\nYou should improve your G.K and think fast.");
        puts("\n\nNEXT PLAY?(Y/N)");
        if (toupper(getch())=='Y')
            goto home;
        else
        {
            writescore(score,playername);
            goto mainhome;
        }
    }
    else
    {
        printf("\n\n\t\t  Enter the right key\n\n\t\t  ");
        Sleep(700);
        goto mainhome;
    }
    return 0;
}

