#include<stdio.h>

// ARRAY IN FUNCTION CALLING

void printnum(int arr[],int n);

void printnum(int arr[],int n){
    for (int i=0;i<n;i=i+1){
        printf("%d \t",arr[i]);
    }
}

int main(){
    int arr[]={1,2,3,4,5};
    printnum(arr,5);

    return 0;
}
//FUNCTION CALL - VALUE :

/*

void square(int n);


void square(int n) {
n = n * n;
printf("square is : %d\n", n);
}


int main() {
int number = 4;
square(number);

printf("n is : %d\n", number);

return 0;
}

*/


//FUNCTION CALL - BY REFERENCE (BY POINTER)

/*

void sqr(int *n);


void sqr(int *n){
    *n=(*n)*(*n);

    printf("square is %d \n", *n);
}

int main (){
    int number=4;
    sqr(&number);
    
    printf("number is %d \n", number);

    return 0;
}
*/


//PRINT HELLO WORLD 5 TIMES USING RECURSIVE FUNCTION

/*

void phw(int count);

void phw(int count){
    if (count==0){  //base case             
        return;      
    }
    else
    {
    printf("hello world \n");
    phw(count-1);
    }
    
}   

int main(){
    phw(6);
    
    return 0;
}

*/


/*

//SUM OF TWO NUMBERS

//DECLARATION
int add (int a,int b);

//DEFINATION 
int add (int a ,int b){
    return a+b;
    
}

//CALLING
int main (){
    int a,b;
    printf("enter number :");
    scanf("%d",&a);
    printf("enter another number :");
    scanf("%d",&b);
    printf("sum is : %d",add(a,b));
    
    return 0;

}

*/

/*

//SQUARE OF A NUMBER

//DECLARATION
int calsq(int n); 
//n|parameter or formal parameter


//DEFINATION
int calsq(int n) {
return n * n;
}

//CALLING
int main() {
int n;
printf("enter number : ");
scanf("%d", &n);
printf("square is : %d", calsq(n)); //n|argument or actual parameter
return 0;
}

*/


/*
//FUNCTION CREATE AND CALL

void firstcode();
//function declaration 



void firstcode()
{
printf("hello world ");
}
//function defination



int main(){
    firstcode();
    return 0;
}
//function calling
*/