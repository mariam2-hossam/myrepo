#include <stdio.h>
#include <stdlib.h>

int main()
{ int choice ;
int task ;
    printf("Minions Task Manager\n");
    printf ("1.Add Task\n");
    printf("2.View Task\n");
    printf ("3.Remove Task\n");
    printf ("4.Exit\n");
    printf ("ENTER YOUR CHOICE\n");
    scanf ("%d",&choice);

    switch (choice)
{ case 1 :
    printf("Enter task_1 descripition");
    char task_1[50] ;
    char task_2[50] ;
    scanf ("%s",&task_1);
    printf("task added successfully!\n");
    printf("Enter task_2 descripition\n");
    scanf ("%s",&task_2);
    printf("task added successfully!\n");
    printf ("ENTER YOUR CHOICE\n");
    scanf ("%d",&choice);

 case 2 :
     printf("current tasks:\n");
      printf("%s\n",task_1);
      printf("%s\n",task_2);
      printf ("ENTER YOUR CHOICE\n");
    scanf ("%d",&choice);
case 3 :
 printf("Enter task ID to remove:");
    scanf("%d\n",&task);
if (task==1)
{
        printf("task1 removed");

}
else
 {
  printf("task2 removed ");

 }
  printf ("ENTER YOUR CHOICE\n");
  scanf ("%d",&choice);
case 4 :
    printf("Exiting Minions Task Manager\n");
    printf("Have a great day!");











}
    return 0;
}
