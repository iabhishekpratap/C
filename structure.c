#include <stdio.h>
#include <string.h>

/*


//STRUCTURE IN FUNCTION

    struct student

    {

        char name [100];
        int roll;
        float cgpa;
    };

    //declare function
    void printinfo(struct student vidyarthi);

    //define function

    void printinfo(struct student vidyarthi){
        printf("student roll no : %d \n",vidyarthi.roll);

    }

    //calling funciton

    int main(){
        struct student vidyarthi={"abhi",44,2.3};

        printinfo(vidyarthi);
    }

*/

//STRUCTURE USING POINTER

/*

    struct student

    {

        char name [100];
        int roll;
        float cgpa;
    };

    int main(){
        struct student vidyarthi={"abhi",23,7.3};
        struct student *ptr=&vidyarthi;

        printf("student roll no : %d \n",(*ptr).roll);

        //arrow operator
        printf("student roll no : %d \n",ptr->roll); 

    }

*/

//ARRAY OF STRUCTURE

/*

//define structure

    struct student

    {

        char name [100];
        int roll;
        float cgpa;
    };

int main(){
    struct student it[100];
    it[0].roll=17;
    it[0].cgpa=8.3;
    strcpy(it[0].name, "abhi:");

    printf("name : %s \n cgpa : %f \n",it[0].name,it[0].cgpa);

    it[1].roll=18;
    it[1].cgpa=6.3;
    strcpy(it[1].name, "mnk:");

    printf("name : %s \n cgpa : %f \n",it[1].name,it[1].cgpa);

    return 0;
}

*/


/*


//CODE 2

    struct student

    {

        char name [100];
        int roll;
        float cgpa;
    };

//input and call structure data 

int main(){

    struct student 
    vidyarthi={"abhi",23,7.3}; //initialising structure

    printf("student roll no : %d \nstudent name : %s \n student cgpa : %f \n",
    vidyarthi.roll,vidyarthi.name,vidyarthi.cgpa);

    return 0;
}

*/

/*

#include <string.h> //use for copy value

//CREATE STRUCTURE 

//define structure

    struct student

    {

        char name [100];
        int roll;
        float cgpa;
    };
//input and call structure data 

int main(){

    struct student 
    vidyarthi; //define variable
    strcpy(vidyarthi.name,"abhi");
    //copy name in variable form namr string defined in structure
    vidyarthi.cgpa=6.3;
    vidyarthi.roll=12;

    printf("student roll no : %d \nstudent name : %s \n student cgpa : %f \n",
    vidyarthi.roll,vidyarthi.name,vidyarthi.cgpa);


    return 0;
}

*/