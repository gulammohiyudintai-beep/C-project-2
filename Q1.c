#include <stdio.h>

int main()
{

    char grade;
    int score;
    printf("enter your score :");
    scanf("%d", & score);

    (score >= 90) ? printf("Your grade is A \n") : (score >= 80) ? printf("Your grade is B \n") : (score >= 60) ? printf("Your grade is C \n") : (score >= 40) ? printf("Your grade is D \n") : (score >= 33) ? printf("Your grade is E \n") : printf("Your grade is f \n");

    if (score >= 90)
        grade = 'A';

    else if (score >= 80)
        grade = 'B';

    else if (score >= 60)
        grade = 'C';

    else if (score >= 40)
        grade = 'D';

    else if (score >= 33)
        grade = 'E';

    else
        grade= 'F';
    

    
    switch(grade)
    {
        case 'A':
        printf("Excellent work.\n");
        break;

        case 'B':
        printf("Well done.\n");
        break;

        case 'C':
        printf("Good job.\n");
        break;

        case 'D':
        printf("You passed, but you could do better.\n");
        break;

        case 'E':
        printf("Passed with added mark.\n");
        break;

        case 'F':
        printf("Sorry, you failed.\n");
        break;
    }


    if(grade = 'A','B','c','d')
    {
        printf("Congratulation! You are eligible for next level");
    }
    else
    {
        printf("Please try again next time.");
    }


    return 0;
}
