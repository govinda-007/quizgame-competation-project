#include<stdio.h>
#include<stdlib.h>

struct play {
        char name[20];
        int score;
        
}p;

int ch;
void help();
void start();
int main()
{

    ch=0;
   
    printf("************************Govind QUIZ GAME COMPETATION****************************");

    printf("\n\t\t\t\t1 to start the game\n\t\t\t\t2 to see game help\n\t\t\t\t3 to exit\n\t\t\t\tPress your choice:   ");
    scanf("%d",&ch);

    switch(ch)
    {
    case 1:
        start();
        break;

    case 2:
         help();
        break;

    case 3:
        exit(0);
         break;
 return 0;
    }

}

void help()
{
     int ch;

     printf("\n\n ************************* GAME HELP *************************");
     printf("\n -------------------------------------------------------------------------");
     printf("\n .................... C program Quiz Game...........\n");
     printf("\n >> There will be a total of 10 questions");
     printf("\n >> You will be given 4 options and you have to press 1, 2 ,3 or 4 for the");
     printf("\n    right option");
     printf("\n >> Each question will carry 10 points");
     printf("\n >> You will be asked questions continuously.");
     printf("\n >> There is no negative marking for wrong answer");

    printf("\n\n ************************* BEST OF LUCK *************************\n\n");


    printf("\nContinue playing ? (1/0) :  ");
    scanf("%d",&ch);

    if(ch==1)
    {
    start();
    }
    else
    {
    exit(1);
    }
}
void start()
{
       int ans;
      int count=0;
      char rating[20];

    printf("\nPlease enter your name: ");
    scanf("%s",p.name);

    printf("******************* Welcome \" %s \"  to C Quiz Game *********************** \n\n", p.name);

  printf("Q(1).The smallest element of an array's index is called its\n1. Lower bound. \n2. Upper bound. \n3. Range. \n4. Extraction. \n\n");

    printf("Your answer: ");
    scanf("%d",&ans);

    if(ans==1)
    {
        printf("Correct! +10 points\n\n");
        ++count;

    }
    else
    {
        printf("Wrong answer! Correct answer is 1.Lower Bound\n\n");
    }

  printf("Q(2).The extra key inserted at the end of the array is called a,.....\n1. End key. \n2. Stop key. \n3. Sentinel. \n4. Transposition. \n\n");

    printf("Your answer: ");
    scanf("%d",&ans);

    if(ans==3)
    {
        printf("Correct! +10 points\n\n");
        ++count;

    }
    else
    {
        printf("Wrong answer! Correct answer is 3.Sentinel\n\n");
    }

  printf("Q(3)..The largest element of an array index is called its\n1. lower bound. \n2. range. \n3. upper bound. \n4. All of these. \n\n");

    printf("Your answer: ");
    scanf("%d",&ans);

    if(ans==3)
    {
        printf("Correct! +10 points\n\n");
        ++count;

    }
    else
    {
        printf("Wrong answer! Correct answer is 3.Upper Bound\n\n");
    }

  printf("Q(4). Each array declaration need not give, implicitly or explicitly, the information about\n1. the name of array \n2. the data type of array \n3. the first data from the set to be stored \n4. the index set of the array \n\n");

    printf("Your answer: ");
    scanf("%d",&ans);

    if(ans==3)
    {
        printf("Correct! +10 points\n\n");
        ++count;

    }
    else
    {
        printf("Wrong answer! Correct answer is 3.The First Data From The Set To Be Stored\n\n");
    }

  printf("Q(5).The elements of an array are stored successively in memory cells because\n1. by this way computer can keep track only the address of the first element and the addresses of other elements can be calculated \n2. the architecture of computer memory does not allow arrays to store other than serially \n3. both of above \n4. none of above \n\n");

    printf("Your answer: ");
    scanf("%d",&ans);

    if(ans==1)
    {
        printf("Correct! +10 points\n\n");
        ++count;

    }
    else
    {
        printf("Wrong answer! Correct answer is 1. by this way computer can keep track only the address of the first element and the addresses of other elements can be calculated\n\n");
    }

  printf("Q(6). You want to find the nth element of a set of numbers. If you store the numbers in\n1. Finding the nth element is slower if it was stored in an array \n2. Finding the nth element is faster if it was stored in an array \n3. Finding the nth element takes the same amount of time across all data structures \n4. Finding the nth element is slower if it was stored in a hash table \n\n");

    printf("Your answer: ");
    scanf("%d",&ans);

    if(ans==2)
    {
        printf("Correct! +10 points\n\n");
        ++count;

    }
    else
    {
        printf("Wrong answer! Correct answer is 2. Finding the nth element is faster if it was stored in an array \n\n");
    }

  printf("Q(7).What does the following function do if S is an array used to implement a stack   "
"\nfloat peep (float S[], int *t, int i)\n"
"{\n"
"float val;\n"
"if( (*t-i+1) > 0)\n"
"{\n"
"val = S[*t-i+1];\n"
"return val;\n"
"}\n"
"} ?\n"

"1. Returns the ith value from top of the stack \n"
"2. Returns the value at the top of the stack \n"
"3. It gives a compilation error \n"
"4. Returns the value at the ith postion of the array \n\n");

    printf("Your answer: ");
    scanf("%d",&ans);

    if(ans==1)
    {
        printf("Correct! +10 points\n\n");
        ++count;

    }
    else
    {
        printf("Wrong answer! Correct answer is 1. Returns the ith value from top of the stack \n\n");
    }

  printf("Q(8).Arrays are best data structures for\n1. relatively permanent collections of data \n2. the size of the structure and the data in the structure are constantly changing \n3. both of above situation \n4. none of above situation \n\n");

    printf("Your answer: ");
    scanf("%d",&ans);

    if(ans==1)
    {
        printf("Correct! +10 points\n\n");
        ++count;

    }
    else
    {
        printf("Wrong answer! Correct answer is 1. relatively permanent collections of data\n\n");
    }

  printf("Q(9).Two dimensional arrays are also called\n1. tables arrays \n2. matrix arrays \n3. both of the above \n4. none of the above \n\n");

    printf("Your answer: ");
    scanf("%d",&ans);

    if(ans==3)
    {
        printf("Correct! +10 points\n\n");
        ++count;

    }
    else
    {
        printf("Wrong answer! Correct answer is 3. both of the above\n\n");
    }

  printf("Q(10).10. Fibonacci sequence is the sequence of integers\n1. 1,3,5,7,9,11,13 \n2. 0, 1,2,3,5,8, 13,21,54 .... \n3. 0, 1, 3, 4, 7, 11, 18, 29, 47 ... \n4. 0, 1, 3, 7, 15 ... \n\n");

    printf("Your answer: ");
    scanf("%d",&ans);

    if(ans==2)
    {
        printf("Correct! +10 points\n\n");
        ++count;

    }
    else
    {
        printf("Wrong answer! Correct answer is 2. 0, 1,2,3,5,8, 13,21,54 ....\n\n");
    }
    printf("*******************Score Card**************\n");
    if(count > 0)
    {
        printf("Thanks for playing, Your scored: %d points \t", count*10);

        p.score=count*10;

        if(p.score >= 80)
        {
            printf("Rating: * * * * *");

        }
        else if(p.score >= 60 && p.score < 80)
        {
            printf("Rating:* * * *");
    
        }
        else if(p.score >= 40 && p.score < 60)
        {
            printf("Rating:* * *");
    
        }
        else if(p.score >= 20 && p.score < 40)
        {
            printf("Rating:* *");
         
        }
        else if(p.score < 20)
        {
            printf("Rating:*");
    
        }
        return;
    }

}
