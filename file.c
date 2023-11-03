#include <stdio.h>

/*


//READ WRITE USING LOOP 

int main(){
    FILE *fptr;
    fptr = fopen("test.txt","r");
    char ch;
    ch = fgetc(fptr);
    while (ch != EOF){
        printf("%c",ch);
        ch = fgetc(fptr);
    }



    printf("\n");

    fclose(fptr);

    return 0;
}

*/

/*

//WRITE DATA IN FILE AND PRINT THAT DATA

int main(){
    FILE *fptr;
    fptr = fopen("test.txt","a");//append mode

    fprintf(fptr,"%c",'a');
    fprintf(fptr,"%c",'p');
    fprintf(fptr,"%c",'p');
    fprintf(fptr,"%c",'l');
    fprintf(fptr,"%c",'e');

    fputc('b',fptr);
    fputc('a',fptr);
    fputc('l',fptr);
    fputc('l',fptr);

    fclose(fptr);

    fptr = fopen("test.txt","r");

    printf("%c \n",fgetc(fptr));
    printf("%c \n",fgetc(fptr));
    printf("%c \n",fgetc(fptr));
    printf("%c \n",fgetc(fptr));
    printf("%c \n",fgetc(fptr));
    printf("%c \n",fgetc(fptr));
    printf("%c \n",fgetc(fptr));
    printf("%c \n",fgetc(fptr));
    printf("%c \n",fgetc(fptr));
    printf("%c \n",fgetc(fptr));
    printf("%c \n",fgetc(fptr));
    printf("%c \n",fgetc(fptr));
    printf("%c \n",fgetc(fptr));
    printf("%c \n",fgetc(fptr));
    printf("%c \n",fgetc(fptr));
    printf("%c \n",fgetc(fptr));
    printf("%c \n",fgetc(fptr));
    printf("%c \n",fgetc(fptr));
    printf("%c \n",fgetc(fptr));
    printf("%c \n",fgetc(fptr));
    printf("%c \n",fgetc(fptr));
    printf("%c \n",fgetc(fptr));
    printf("%c \n",fgetc(fptr));
    printf("%c \n",fgetc(fptr));
    printf("%c \n",fgetc(fptr));

    
    fclose(fptr);
    

    return 0;

}

*/


/*

//READ DATA FROM A FILE

int main(){
    FILE *fptr;
    fptr = fopen("test.txt","r");

    char fileread;
    fscanf (fptr,"%c",&fileread);
    printf("data in file : %c \n", fileread);

    fscanf (fptr,"%c",&fileread);
    printf("data in file : %c \n", fileread);

    fscanf (fptr,"%c",&fileread);
    printf("data in file : %c \n", fileread);

    fscanf (fptr,"%c",&fileread);
    printf("data in file : %c \n", fileread);

    fclose(fptr);

    return 0;

}

*/

