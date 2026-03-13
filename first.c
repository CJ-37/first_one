#include<stdio.h>
#include<conio.h>


void vote(int age)
    {
    //int age;
    //printf("Enter your age : \n");
    //scanf("%d",&age);

    if(age>18 && age<101)
    {
        printf("Yes, you are eligible for voting...😄\n");
    }
    else if(age>101 || age<0)
    {
        printf("Don't play with us buddy...😡\n");
    }
    else{
        printf("No, you are still a kid dude wait for sometime...\n");
    }

    }

void main()
{
    
   /* char name[25];
    printf("Enter your name : \n");
    scanf("%s",&name);
    printf("Hello, %s ",name); */

   vote(105);
   vote(25);
   vote(75);
   vote(-10);


   int x;
   printf("%s%n","Hello",&x);
   printf("\n%d",x);
}


