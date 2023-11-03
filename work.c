#include<stdio.h>
int main(){

   printf("apple ball ");
   



/*
   //STRING USING POINTER

   char *string="hello world";
   printf("%s",string);

   */



/*

   //STRING INPUT AND OUTPUT

   char string[50];
   printf("ENTER YOUR NAME : ");
   gets(string);

   printf("you entered : %s ",string);
   //OR
   puts(string);
   
   */

   /*

   //STRING

   char stringname[]={'a','b','h','i','\0'};
   printf("%s", stringname);

*/


/*

   // MULTIDIMENTONAL ARRAY [2D ARRAY]

   int marks[2][3];
   marks[0][0]=1;
   marks[0][1]=2;
   marks[0][2]=3;

   marks[1][0]=5;
   marks[1][1]=6;
   marks[1][2]=7;

printf("%d \n", marks[1][0]);

*/



/*
   //TRAVERSE AN ARRAY
   int aadhar[5];

   int *ptr = &aadhar[0];
   for (int i=0; i<5; i=i+1){
      printf("%d index : ",i);
      scanf("%d",(ptr+i));
   }

   for (int i=0; i<5; i=i+1){
      printf("%d index :, %d\n ",i,*(ptr+i));
   }
*/

   /*

   //SUBTRACT 1 POINTER FROM ANOTHER 
   //COMPARE TWO POINTERS
   
   int age = 22;
   int age2 = 24;

   int *ptr=&age;
   int *ptr2=&age2;

   printf("%u ,%u, difference = %u \n",ptr,ptr2,ptr-ptr2);
   
   ptr2=&age;
   printf("comparison = %u \n ",ptr==ptr2);

   */


   /*

   //POINTER SIZE INCREASE OR DECREASE

   int age =33;
   int *ptr = &age;
   printf("%u \n",ptr);

   ptr=ptr+1;
   // after this size increse by 4 byte of pointer
   printf("%u \n",ptr);

   */

/*  

   //ARRAY

   int marks[3];

   printf("enter marks phy : ");
   scanf("%d", &marks[0]);

   printf("enter marks che : ");
   scanf("%d", &marks[1]);

   printf("enter marks math : ");
   scanf("%d", &marks[2]);

   printf("physics=%d,chemistry=%d,maths=%d",
   marks[0],marks[1],marks[2]);
   
*/


   //PRINT VALUE OF VARIABLE 'I' WITH POINTER TO POINTER

   /*
   int i=5;
   int *ptr =&i;
   int **pptr= &ptr;

   printf("%d \n",**pptr); 
   */

   //POINTER TO POINTER 
   /*
   float price = 100.0;
   float *ptr =&price;
   float **pptr = &ptr;
   
   printf("%d \n", &ptr);

   */



   //VALUE STORED AT ADDRESS OF POINTER

   /*
   int age =22;
   int *ptr=&age;
   printf("%d \n",age);
   printf("%d \n",*ptr);
   printf("%d \n",*(&age));
   */


   //ADDRESS OF POINTER

   /*

   int age =22;
   int *ptr=&age;
   printf("%p \n",&age);
   printf("%p \n",ptr);
   printf("%p \n",&ptr);

   */


   //POINTER

   /*

   int age =22;
   int *ptr=&age;
   int _age = *ptr;
   
   printf("value stored at _age variable %d",_age);

   */


// CONTINUE STATEMENT
/*
   int i;
   i=1;
   for(i=1;i<=10;i=i+1)
   {  
      if(i==3)
      {
         continue; 
         //skip if statement when its true
      }
      printf("%d \n",i);
   }
*/

//DO WHILE LOOP
/*
   int i;
   i=1;
   do
   {
      printf("%d \n",i);
      i=i+1;
   }
   while (i<=23);
*/

//WHILE LOOP
/*   
   int i;
   i=1;
   while(i<=5)
   {
      printf("%d \n",i);
      i=i+1;
   }
*/


// FOR LOOP
/*
   int i;
   for(i=1;i<=999999;i=i+1)
   {
      printf("hello world \n");
   }
*/

/*
   int i;
   for(i=1;i<=10;i=i+1)
   {
      printf("%d \n",i);
   }
*/

//NESTED SWITCH
/*
   int uni ;
   int depa ;
   printf("enter rank 1 to 2 : ");
   scanf("%d",&uni);
   switch(uni){
      case 1 : printf("iit bombay \n");
      printf("enter department order");
      scanf("%d",&depa);
      switch(depa)
      {
         case 1 : printf("cse \n");
         break;
         case 2 : printf("ec \n");
         break;

         default : printf("select valid branch");
      }
      break;

      case 2 : printf("iit kanpur \n");
      printf("enter department order");
      scanf("%d",&depa);
      switch(depa)
      {
         case 1 : printf("cse \n");
         break;
         case 2 : printf("ec \n");
         break;

         default : printf("select valid branch");
      }
      break;
      
      default : printf("not a valid rank");

}
*/

   //NESTED IF-ELSE
   /*
   int num;
    printf("enter your no :");
    scanf("%d", &num);
    if (num>=0){
        printf("positive number");
        if (num %2==0){
            printf("also a even number");
        }
        else{
            printf("also a odd number");
        }
    }
    else{
        printf("negative number");
    }
    */
   
   
   //SWITCH
   /*

   //CODE 2

   int prg,a,b,c,n,i;
    printf("enter your choice \n 1: For addition of 2 numbers\n 2: For even or odd number\n 3: for print n naturl number\n ");
    scanf("%d",&prg);
    switch(prg){

        case 1 : 
        printf("enter 2 numbers : ");
        scanf("%d%d",&a,&b);
        c=a+b;
        printf("sum of %d and %d is %d",a,b,c=a+b);
        break;

        case 2 : 
        printf("enter a number");
        scanf("%d",&a);
        if(a%2==0)
        {
            
            printf("even number");
        }
        else
        {
            printf("odd number");
        }
        break;

        case 3 : 
	    printf("Enter a number:");
	    scanf("%d",&n);
	    printf("First %d natural numbers are:\n",n);
	    for(i=1;i<=n;i++)
	    {
		    printf("%d ",i);
	    }

        break;

    
        default : printf("choose valid option");

}

//CODE1
   int day ;
   printf("enter day from 1 to 7 : ");
   scanf("%d",&day);
   switch(day){
      case 1 : printf("monday \n");
      break;
      case 2 : printf("tuesday \n");
      break;
      case 3 : printf("wednesday \n");
      break;
      case 4 : printf("thursday \n");
      break;
      case 5 : printf("friday \n");
      break;
      case 6 : printf("saturday \n");
      break;
      case 7 : printf("sunday \n");
      break;
      
      default : printf("not a valid day");

   }
   */


   //TERNARY OPERATOR
   //CODE2
   /*
   int age;
   printf("enter your age : ");
   scanf("%d",&age);
   age>=18 && age<=100 ? printf("you are an adult"):age>=13 && age<=18 ? 
   printf("you are a teenager"):age>=100? printf("tum jio hazaron saal") :
   printf("you are a baccha");
   */

   /*
   int age;
   printf("enter your age : ");
   scanf("%d",&age);
   age>=18 ? printf("you are an adult"):printf("you are not an adult");
   */


   //IF-ELSE,ELSE-IF
   /*
   int age ;
   printf("enter your age : ");
   scanf("%d",&age);
   if (age>=18 && age<=100){
      printf("you are adult");
   }
   else if (age>=13 && age<=18){
      printf("you are a teenager");
   }
   else if (age>=100){
      printf("tum jio hazaron saal ye hamari aarzoo");
   }
   else {
      printf("you are a baccha");
   }
   */
   
   
   //IF -ELSE
   /*
   int age;
   printf("enter your age : ");
   scanf("%d",&age);
   if (age>=18){
      printf("you are adult");
      }
   else{
         printf("you are not an adult");
         }
   */


   //DATA TYPE CONVERSION
   /*
   int a=(int)1.9999999999;
   printf("%d",a);
   */

   //INPUT AND OPERATION ON IT
   //DIVISION
   /*
   int n1,n2;
   printf("Enter No. : ");
   scanf("%d",&n1);
   printf("Enter No. Again : ");
   scanf("%d",&n2);
   printf("ANSWER IS : %d",n1/n2);
   */

   //MULTIPLICATION
   /*
   int n1,n2;
   printf("ENTER NO : ");
   scanf("%d",&n1);
   printf("Enter No. Again : ");
   scanf("%d",&n2);
   printf("ANSWER IS : %d", n1*n2);
   */

   //SUBTRATION
   /*
   int n1,n2;
   printf("ENTER NO : ");
   scanf("%d",&n1);
   printf("ENTER NO AGAIN : ");
   scanf("%d",&n2);
   printf("ANSWER IS : %d",n1-n2);
   */

   //ADDITION
   /*
   int n1,n2;
   printf("ENTER NO : ");
   scanf("%d",&n1);
   printf("ENTER NO AGAIN : ");
   scanf("%d",&n2);
   printf("ANSWER IS : %d",n1+n2);
   */


   //INPUT FROM USER AND PRINT 
   /*
   int age;
   printf("ENTER AGE :");
   scanf("%d",&age);
   printf("AGE IS :%d",age);
   */


   // CALL DATA STORE IN VARIABLE
   /*
   int age=45;
   printf("%d",age);
   */


   //NEW LINE
   /*
   printf("apple \n");
   printf("ball \n");
   */


   //STORE DATA TYPE
   /*
   int number=3;
   float fraction = 2.3;
   char special_character = '#';
   */



   return 0;
}
