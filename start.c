void start()
{
        int z;
    for(z=5;z<=20;z+=5)
    {int noofrows,rows,s;
    noofrows=z;
    for(rows=1;rows<=noofrows;rows++)
    {
        for(s=1;s<=noofrows;s++)
        {
            printf("*");

        }
        printf("\n");
        break;
    }
    for(rows=1;rows<=noofrows-2;rows++)
    {
        for(s=1;s<=noofrows;s++)
        {
            printf("*");
            for(s=1;s<=noofrows-2;s++)
            {
                printf(" ");
            }

        for(s=1;s<=noofrows;s++)
        {
            printf("*");
            break;
        }
        printf("\n");
        break;
        }
    }
     for(rows=1;rows<=noofrows;rows++)
    {
        for(s=1;s<=noofrows;s++)
        {
            printf("*");

        }
        printf("\n");
        break;
    }
    int c = 1, d = 1;

   for ( c = 1 ; c <= 10000 ; c++ )
       for ( d = 1 ; d <= 10000 ; d++ )
       {}
    system("cls");

    }
}


