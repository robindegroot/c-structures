#include <stdio.h>
#include <string.h>


    struct Personalinfo{
        char name[50];
        char age[50];
        char addres[100];
        char placeofbirth[100];
        int info_id;

    };
    int main()
    {
        char name[50];
        char age[50];
        char addres[100];
        char placeofbirth[100];
        int info_id;

        struct Personalinfo Book1;

        printf("enter your name\n");
        scanf("%s", &name);
        printf("you entered %s\n", name);

        printf("enter your age\n");
        scanf("%s", &age);
        printf("you entered %s\n", age);

        printf("enter your addres\n");
        scanf("%s", &addres);
        printf("you entered %s\n", addres);

        printf("enter your place of birth\n");
        scanf("%s", &placeofbirth);
        printf("you entered %s\n", placeofbirth);


        /* book 1 specification*/
        strcpy(Book1.name, name);
        strcpy(Book1.age,age);
        strcpy(Book1.addres,addres);
        strcpy(Book1.placeofbirth,placeofbirth);
        Book1.info_id = 12345678;


         /* print Book1 info*/
    printf("Book1 name : %s\n", Book1.name);
    printf("Book1 age : %s\n", Book1.age);
    printf("Book1 addres : %s\n", Book1.addres);
    printf("Book1 placeofbirth : %s\n", Book1.placeofbirth);
    printf("Book1 info_id : %d\n", Book1.info_id);


    FILE *fptr;
    fptr = fopen("file.txt", "w");
    fprintf(fptr,"Book1 name : %s\n", Book1.name);
    fprintf(fptr,"Book1 age : %s\n", Book1.age);
    fprintf(fptr,"Book1 addres : %s\n", Book1.addres);
    fprintf(fptr,"Book1 placeofbirth : %s\n", Book1.placeofbirth);
    fprintf(fptr,"Book1 info_id : %d\n", Book1.info_id);

        if(fptr == NULL)
        {
            printf("error!");
            exit(1);
        }

    }


