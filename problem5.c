// program to initialize members of structure and display them.

#include<stdio.h>

int main(int argc, char const *argv[])
{
    // Declaring the structure.
    struct class{
        char name[20];
        int roll_no;
        double age;
    };

    // Initialising the structure.

    struct class class5;
    strcpy(class5.name,"Alok");
    class5.age = 23.5;
    class5.roll_no = 5;

    // Displaying the members of structure.

    puts(class5.name);
    printf("Age is %f\n",class5.age);
    printf("Roll Number is %d\n",class5.roll_no);

    return 0;
}

