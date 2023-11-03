#include <stdio.h>
#include <stdlib.h>

/*

//REALLOCATE SIZE OF MEMORY from 5 to 10

int main(){
    int *ptr;
    ptr =(int *)calloc (5,sizeof(int));

    ptr[0]=1;
    ptr[1]=2;
    ptr[2]=3;
    ptr[3]=4;
    ptr[4]=5;

    for(int i=0;i<5;i=i+1){
        printf("%d \n",ptr [i]);
    }


    printf("after increasing size \n");

    ptr=realloc(ptr,10); 

    for(int i=0;i<10;i=i+1){
        printf("%d \n",ptr [i]);
    }

}

*/

/*

//MAKE MEMORY FREE BY free() 

int main(){
    int *ptr;
    ptr =(int *)calloc (5,sizeof(int));

    ptr[0]=1;
    ptr[1]=2;
    ptr[2]=3;
    ptr[3]=4;
    ptr[4]=5;
    

    for(int i=0;i<5;i=i+1){
        printf("%d \n",ptr [i]);
    }

    free(ptr);

    ptr =(int *)calloc (5,sizeof(int));
    for(int i=0;i<5;i=i+1){
        printf("%d \n",ptr [i]);
    }

    
    return 0;
    
}

*/

/*

   //MEMORY ALLOCATION

int main(){
    int *ptr;
    ptr =(int *)malloc (5*sizeof(int));

    ptr[0]=1;
    ptr[1]=2;
    ptr[2]=3;
    ptr[3]=4;
    ptr[4]=5;
    

    for(int i=0;i<5;i=i+1){
        printf("%d \n",ptr [i]);
    }
    
    return 0;

}

*/


