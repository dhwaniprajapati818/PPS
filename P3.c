#include<stdio.h>

int main()
{
  int choic;
  int num, n1, n2, n3;
  int sum, reminder;
  do
  {
      printf("------------------- MENU ---------------------------\n");
      printf("1. Check Even Or Odd \n");
      printf("2. Check Positive Or Negative \n");
      printf("3. Find Greatest Of Three Numbers \n");
      printf("4. Sum Of Digits\n");
      printf("5. Exit The Program\n");
      printf("Enter your choice: \n ");
      scanf("%d", &choic);

      switch(choic)
      {
            case 1:

            printf("Enter A Number:");
            scanf("%d", &num);

              if (num % 2 == 0)
              {
                  printf("The Number Is Even \n");              
              }
              else
              {
                  printf("The Number Is Odd \n");
              }
              break;

            case 2:

            printf("Enter A Number: \n");
            scanf("%d", &num);

              if (num > 0)
              {
                  printf("The Number Is Positive \n");              
              }
              else if (num < 0)
              {
                  printf("The Number Is Negative \n");
              }
              else 
                  printf("The Number Is Zero \n");
              break;

              case 3:

              printf("Enter three numbers: ");
               scanf("%d %d %d", &n1, &n2, &n3);

             if (n1 == n2 && n2 == n3) 
            {
               printf("All three numbers are equal.");
            }
           else if (n1 == n2 ||  n2== n3 || n1 == n3)
            {
             printf("Two numbers are equal.");
            }
           else if (n1 > n2 && n1 > n3) 
           {
           printf("%d is the maximum number.", n1);
           }
           else if ( n2 > n1 && n2 > n3) 
           {
            printf("%d is the maximum number.", n2);
           }
           else 
          {
            printf("%d is the maximum number.", n3);
          }
         break;

         case 4:
         printf("Enter The Number: ");
         scanf("%d", &num);

         sum = 0;    

         while(num != 0)
         {

             reminder = num % 10;
             sum = sum + reminder;
             num = num/10;
         }
             printf("Sum Of Digits = %d\n", sum);
             break;

       case 5:
       printf("Exiting The Program........\n");
       break;

       defult:
       printf("Invalid Choic!");
       }
    }
    while (choic != 5);
    return 0;
}