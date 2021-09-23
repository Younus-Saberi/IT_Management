// IT COMPANY MANAGEMENT SYSTEM /////// It's a short representation of how IT company management system how does it work and all

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
char *randomPasswordGeneration(int, char *);
void passwords(int);
// DECLARATION OF VARIABLES
typedef struct form
{
    char dashindExp[100];
    char dashQuali[50];
    char dashPersonal[30];
    char dashContri[50];
    char username[10][30];
    char fullname[60];
    char fname[20];
    char sname[20];
    char surname[20];
    char email[30];
    char dob[8];
    int Mobile_no, passout_year, Exp_salary;
    char whatsapp_no[10];
    char Experience_Record[100];
    char Project_Details[200];
    char comments[100];
    char skills[200];
    char name[10][30];
    char password[10][11];
    char suffix[20];
} form;
form A_D = {.suffix = "@google.com"};
// DECLARATION OF FUNCTIONS
int checkacc(char uname[20]);
void display(int *, int);
// FUNCTION FOR DECLARATION OF APPLICATION FORM
void display(int *a, int i)
{
    printf("--------------------------------------------------------------------------------------------------------------\n");
    printf("||||||||||||||||||||||                COPY OF YOUR APPLICATION FORM:                  ||||||||||||||||||||||||\n");
    printf("--------------------------------------------------------------------------------------------------------------\n");
    printf("FIRST NAME:%s\t\t        \tSECOND NAME:%s \n", A_D.fname, A_D.sname);
    printf("SURNAME:%s \t\t          \tEMAILID:%s \n", A_D.surname, A_D.email);
    printf("MOBILE NO:%d \t\t            \t\tWHATSAPP NO:%s\n", A_D.Mobile_no, A_D.whatsapp_no);
    printf("PASSOUT YEAR:%d \t\t           \t\tDATE OF BIRTH:%s \n", A_D.passout_year, A_D.dob);
    printf("EXPERIENCE:%s\n", A_D.Experience_Record);
    printf("PROJECT DETAILS:%s\n", A_D.Project_Details);
    printf("SKILL SETS:%s\n", A_D.skills);
    printf("COMMENTS:%s\n", A_D.comments);
    if (*a == 1)
    {
        printf("You application for the post of Backend Developer has been Recorded\n Our HR will get back to you within one week\n");
    }
    else if (*a == 2)
    {
        printf("You application for the post of Frontend Developer has been Recorded\n Our HR will get back to you within one week\n");
    }
    else
    {
        printf("You application for the post of Software Tester has been Recorded\n Our HR will get back to you within a week\n");
    }
}
void dashboard(int *, int);
// FUNCTION FOR DASHBOARD
void dashboard(int *a, int i)
{

    printf("----------------------------------------------------------------------------------------------------------------------\n");
    printf("||||||||||||||||||||||                USER DASHBOARD FOR PROTON ENTERPRISES:                  ||||||||||||||||||||||||\n");
    printf("----------------------------------------------------------------------------------------------------------------------\n");
    printf("Full Name : ");
    puts(A_D.fullname);
    printf("Username : ");
    puts(A_D.username[i]);
    printf("Qualification : ");
    puts(A_D.dashQuali);
    printf("Experience : ");
    puts(A_D.dashindExp);
    printf("Personal : ");
    puts(A_D.dashPersonal);
    printf("Contribution and progress : ");
    puts(A_D.dashContri);

    if (*a == 1)
    {
        printf("Roles in the company : #BackendDeveloper\n");
    }
    else if (*a == 2)
    {
        printf("Roles in the company : #FrontendDeveloper\n");
    }
    else
    {
        printf("Roles in the company : #SoftwareTester\n");
    }
    printf("1.account details     2.searching  ");
}
void applicationform(int *, int);
// FUNCTION FOR APPLICATION FORM
void applicationform(int *a, int i)
{
    int b;
    printf("--------------------------------------------------------------------------------------------------------------\n");
    printf("||||||||||||||||||||||                       APPLICATION FORM:                        ||||||||||||||||||||||||\n");
    printf("--------------------------------------------------------------------------------------------------------------\n");
    printf("Enter your first name:   ");
    scanf("%s", A_D.fname);
    strcat(A_D.username[i], A_D.fname);
    strcat(A_D.username[i], "@google.com");
    printf("Enter your second name:   ");
    scanf("%s", A_D.sname);
    printf("Enter your surname:   ");
    scanf("%s", A_D.surname);
    strcat(A_D.fullname, A_D.fname);
    strcat(A_D.fullname, A_D.surname);
    printf("Enter your Email ID:   ");
    scanf("%s", A_D.email);
    printf("Enter your Mobile no:   ");
    scanf("%d", &A_D.Mobile_no);
    printf("Enter your whatsapp no:   ");
    scanf("%s", A_D.whatsapp_no);
    printf("Enter your Passout year:   ");
    scanf("%d", &A_D.passout_year);
    printf("Enter your Date of Birth as ddmmyyyy:   ");
    scanf("%s", A_D.dob);
    strcat(A_D.dashPersonal, A_D.whatsapp_no);
    strcat(A_D.dashPersonal, A_D.dob);
    printf("Enter your industrial  Experience Details:   ");
    fflush(stdin);
    fgets(A_D.Experience_Record, 200, stdin);
    strcpy(A_D.dashindExp, A_D.Experience_Record);
    printf("Enter your Project Details:   ");
    fgets(A_D.Project_Details, 200, stdin);
    strcat(A_D.dashContri, A_D.Project_Details);
    printf("Enter your Skill Sets:   ");
    fgets(A_D.skills, 200, stdin);
    strcpy(A_D.dashQuali, A_D.skills);
    printf("Enter your Expected salary : ");
    scanf("%d", &A_D.Exp_salary);
    fflush(stdin);
    printf("Enter your Comment:   ");
    fgets(A_D.comments, 200, stdin);
    printf("\t\t\t\t VACANCIES\n\nEnter 1 for Backend Developer[10]\nEnter 2 for Frontend Developer[5]\nEnter 3 for SoftwareTester[4]\n\n\n");
    scanf("%d", &b);
    // CODE TO DISPLAY DATE AND TIME
    time_t t;
    t = time(NULL);
    struct tm tm = *localtime(&t);
    printf("Current Date: %d-%d-%d\n", tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900);
    time_t ti;
    ti = time(NULL);
    struct tm tn;
    tn = *localtime(&ti);
    printf("Current Time: %d:%d:%d\n\n", tn.tm_hour, tn.tm_min, tn.tm_sec);
}
void interview(int i);
// FUNCTION FOR INTERVIEW QUESTIONS
void interview(int i)
{
    printf("\n/_____________________________________________________////////////_________________________________________________________________/ \n");
    printf("\n|>|>|>|>|>|>|>|>|>|>|>|>|>|>|>|>|>|>|>|>|>|>|>|>|>| PROTON ENTERPRISES  |<|<|<|<|<|<|<|<|<|<|<|<|<|<|<|<|<|<|<|<|<|<|<|<|<|<|<|<|<|<|<|");
    printf("\n|_____________________________________________________________________________________________________________________________________|\n");

    printf("\n############################################## ----- WELCOME TO PROTON PORTAL ----- ######################################################      \n\n\n\t\t\t\t\t\t.......Let's test your knowladge......");
    printf(" \n\n _________________________________________________________________________________________\n");
    printf("|                                                                                              |\n");
    printf("| | Marking Cretria | :    |  NOTE : Minimum 60 percent is required to pass the aptitude       |\n"
           "| # Correct Answer = +1    |                                                                   |\n"
           "| # Wrong Answer   = 0     |                     All the best !                                |\n");
    printf("|______________________________________________________________________________________________|\n");

    int score = 0;
    char Q1[10000];
    char Q2[10000];
    char Q3[10000];
    char Q4[10000];
    char Q5[10000];
    char Q6[10000];
    char Q7[10000];
    char Q8[10000];
    char Q9[10000];
    char Q10[10000];
    // VARIABLES FOR ANSWERS
    int ans1[10];
    int ans2[10];
    int ans3[10];
    int ans4[10];
    int ans5[10];
    int ans6[10];
    int ans7[10];
    int ans8[10];
    int ans9[10];
    int ans10[10];

    char Terminate[1];

    // ---------------------------------------Q.1------------------------------------------

    printf("\nQ1.What is lambda function in python?\n\n"
           "1.Connective Function\n"
           "2.Anonymous Function\n"
           "3.Defining Function\n"
           "4.Linking Function\n");
    printf("\nEnter correct option : ");
    scanf("%d", ans1);

    if (*ans1 == 2)
    {

        score = score + 1;

        printf("\t\t\t\t\t| Correct Answer...! |  \t\t\t\t\t | Your score | : %i\n", score);
    }
    else
    {
        printf("\t\t\t\t\t| Incorrect Answer...! |\t\t\t\t\t | Your score | : %i\n", score);
    }

    // -----------------------------------------Q.2----------------------------------------

    printf("\nQ2.Python is ____ Language\n\n"
           "1.Compiled Language\n"
           "2.Interpreted Language\n"
           "3.Markup language\n"
           "4.None of these\n");
    printf("\nEnter correct option : ");
    scanf("%d", ans2);

    if (*ans2 == 2)
    {
        score = score + 1;
        printf("\t\t\t\t\t| Correct Answer...! |  \t\t\t\t\t | Your score | : %i\n", score);
    }
    else
    {
        printf("\t\t\t\t\t| Incorrect Answer...! |\t\t\t\t\t | Your score | : %i\n", score);
    }

    // --------------------------------------Q.3-------------------------------------------

    printf("\nQ3.What do we use to define a block of code in Python language?\n\n"
           "1.key\n"
           "2.Brackets\n"
           "3.Indentation\n"
           "4.None of these\n");
    printf("\nEnter correct option : ");
    scanf("%d", ans3);

    if (*ans3 == 3)
    {
        score = score + 1;
        printf("\t\t\t\t\t| Correct Answer...! |  \t\t\t\t\t | Your score | : %i\n", score);
    }
    else
    {
        printf("\t\t\t\t\t| Incorrect Answer...! |\t\t\t\t\t | Your score | : %i\n", score);
    }

    // -----------------------------------------Q.4----------------------------------------

    printf("\nQ4.Which of the following concept is correct regarding the object oriented concept in python.\n\n"
           "1.Classes are real world interties while objects are not real world entities\n"
           "2.Objects are real world interties while classes are not real world entities\n"
           "3.Objects are used in procedural programming languages \n"
           "4.All of the above\n");
    printf("\nEnter correct option : ");
    scanf("%d", ans4);

    if (*ans4 == 2)
    {
        score = score + 1;
        printf("\t\t\t\t\t| Correct Answer...! |  \t\t\t\t\t | Your score | : %i\n", score);
    }
    else
    {
        printf("\t\t\t\t\t| Incorrect Answer...! |\t\t\t\t\t | Your score | : %i\n", score);
    }

    // ---------------------------------------Q.5------------------------------------------

    printf("\nQ5.The Exceptional handeling in python uses __&__ key words.\n\n"
           "1.try,else\n"
           "2.try,break\n"
           "3.try,except\n"
           "4.except,else\n");
    printf("\nEnter correct option : ");
    scanf("%d", ans5);

    if (*ans5 == 3)
    {
        score = score + 1;
        printf("\t\t\t\t\t| Correct Answer...! |  \t\t\t\t\t | Your score | : %i\n", score);
    }
    else
    {
        printf("\t\t\t\t\t| Incorrect Answer...! |\t\t\t\t\t | Your score | : %i\n", score);
    }

    // ---------------------------------------Q.6------------------------------------------

    printf("\nQ6.What is the function called inside the class in python?\n\n"
           "1.Class Function\n"
           "2.Class def Function\n"
           "3.Class Attribute\n"
           "4.Method\n");
    printf("\nEnter correct option : ");
    scanf("%d", ans6);

    if (*ans6 == 4)
    {
        score = score + 1;
        printf("\t\t\t\t\t| Correct Answer...! |  \t\t\t\t\t | Your score | : %i\n", score);
    }
    else
    {
        printf("\t\t\t\t\t| Incorrect Answer...! |\t\t\t\t\t | Your score | : %i\n", score);
    }

    // ---------------------------------------Q.7-------------------------------------------

    printf("\nQ.7Which of the following is not a key word in python?\n\n"
           "1.val\n"
           "2.raise\n"
           "3.yield\n"
           "4.finally\n");
    printf("\nEnter correct option : ");
    scanf("%d", ans7);

    if (*ans7 == 1)
    {
        score = score + 1;
        printf("\t\t\t\t\t| Correct Answer...! |  \t\t\t\t\t | Your score | : %i\n", score);
    }
    else
    {
        printf("\t\t\t\t\t| Incorrect Answer...! |\t\t\t\t\t | Your score | : %i\n", score);
    }

    // ---------------------------------------Q.8------------------------------------------

    printf("\nQ8.In python,which of the following has highest precedence in expression?\n\n"
           "1.Division\n"
           "2.Addition\n"
           "3.Substraction\n"
           "4.Parentheses\n");
    printf("\nEnter correct option : ");
    scanf("%d", ans8);

    if (*ans8 == 4)
    {
        score = score + 1;
        printf("\t\t\t\t\t| Correct Answer...! |  \t\t\t\t\t | Your score | : %i\n", score);
    }
    else
    {
        printf("\t\t\t\t\t| Incorrect Answer...! |\t\t\t\t\t | Your score | : %i\n", score);
    }

    // ----------------------------------------Q.9-----------------------------------------

    printf("\nQ.9What will be the output of these function :\n"
           "\t\tround(4.567)\n\n"
           "1.4\n"
           "2.4.5\n"
           "3.0\n"
           "4.5\n");
    printf("\nEnter correct option : ");
    scanf("%d", ans9);

    if (*ans9 == 4)
    {
        score = score + 1;
        printf("\t\t\t\t\t| Correct Answer...! |  \t\t\t\t\t | Your score | : %i\n", score);
    }
    else
    {
        printf("\t\t\t\t\t| Incorrect Answer...! |\t\t\t\t\t | Your score | : %i\n", score);
    }

    // ---------------------------------------Q.10-----------------------------------------

    printf("\nQ10.What will be the output of following code : \n"
           "\t\ti = 0\n"
           " \t\twhile i < 1 :\n"
           "\t\t\tI += 1\n"
           "\t\t\tprint('Proton Enterprises') \n\n"
           "1.Proton Enterprises \n"
           "2.Infinite loop will execute\n"
           "3.Error\n"
           "4.proton Enterprises\n");
    printf("\nEnter correct option : ");
    scanf("%d", ans10);

    if (*ans10 == 3)
    {
        score = score + 1;
        printf("\t\t\t\t\t| Correct Answer...! |  \t\t\t\t\t | Your score | : %i\n", score);
    }
    else
    {
        printf("\t\t\t\t\t| Incorrect Answer...! |\t\t\t\t\t | Your score | : %i\n", score);
    }

    // ---------------------------------- Displaying Subbmission ----------------------------

    if (1)
    {
        printf("\n\n\t\t\t\t\tYou have successfully completed all questions.\n\n");
    }

    // --------------------------------- Displaying Results ---------------------------------

    if (score >= 6)
    {
        printf("\n\n\t\t\t\t      Congratulations...! You have successfully completed the exam with %i0 percent score...\n\n\n", score);
        passwords(i);
    }

    else if (score < 6)
    {
        printf("\n\n\t\t\t\t\tTry again next time....your score is only %i0 percent...\n\n\n", score);
        printf("press Q+Entet to terminate session");
        scanf("%s", Terminate);
        exit(1);
    }
}
// FUNCTION FOR USER ID GENERATION AND PASSWORD OVERWRITE
void passwords(int i)
{

    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t-----------------------------\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t|WELCOME TO PROTON ENTERPRISES|\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t--------------------------\n\n\n");
    printf("You are one step away to be part of this company\n");
    printf("Enter your name\n");
    scanf("%s", A_D.username[i]);
    strcpy(A_D.name[i], A_D.username[i]);
    printf("%s\n", A_D.name[i]);
    strcat(A_D.username[i], A_D.suffix);
    printf("%s\n", A_D.username[i]);

    int N = 10;
    char password[11];
    randomPasswordGeneration(N, password);
    strcpy(A_D.password[i], password);
    printf("%s\n", A_D.password[i]);

    // CODE TO DISPLAY AND STORE OR CHANGE PASSWORD

    printf("User Id:%s\n", A_D.username[i]);
    printf("Pass:%s\n", A_D.password[i]);
    printf("Do you want to change your password enter 1->yes 0->No\n");

    int a;
    scanf("%d", &a);
    if (a == 1)
    {
        char s[11];
        printf("Enter your new password : ");
        scanf("%s", s);
        strcpy(A_D.password[i], s);
        printf("%s\n", A_D.password[i]);
    }
}
// FUNCTION FOR RANDOM PASSWORD GENERATION
char *randomPasswordGeneration(int N, char password[])
{
    int i = 0;
    int randomizer = 0;
    //PASSWORD WILL BE DIFFERENT EACH TIME
    srand((unsigned int)(time(NULL)));
    //Array of numbers
    char numbers[] = "0123456789";
    //Array of small alphabets
    char letter[] = "abcdefghijklmnoqprstuvwyzx";
    //Array of capital alphabets
    char LETTER[] = "ABCDEFGHIJKLMNOQPRSTUYWVZX";
    //Array of all the special symbols
    char symbols[] = "!@#$^&*?";
    //Stores the random password
    for (i = 0; i < N; i++)
    {
        if (randomizer == 1)
        {
            password[i] = numbers[rand() % 10];
            randomizer = rand() % 4;
        }
        else if (randomizer == 2)
        {
            password[i] = symbols[rand() % 8];
            randomizer = rand() % 4;
        }
        else if (randomizer == 3)
        {
            password[i] = LETTER[rand() % 26];
            randomizer = rand() % 4;
        }
        else
        {
            password[i] = letter[rand() % 26];
            randomizer = rand() % 4;
        }
    }
    return password;
}
// FUNCTION FOR AUTHENTICATION OF USER
int checkacc(char uname[20])
{
    int i, flag, k;
    char pass[20];
    for (i = 0; i <= 5; i++)
    {
        if (strcmp(uname, A_D.username[i]) == 0)
            flag = 1;
    }

    if (flag == 1)
    {
        printf("name found\n");
        printf("Enter the password\n");
        scanf("%s", pass);
        for (i = 0; i <= 5; i++)
        {
            if (strcmp(pass, A_D.password[i]) == 0)
                k = 1;
            if (k == 1)
                break;
        }
    }
    if (k == 1)
        return i;
    else
    {
        printf("wrong password\n");
        return -1;
    }
}
// MAIN FUNCTION OF THE IT MANAGEMENT
int main()
{
    while (1)
    {
        int i, flag, k;
        strcpy(A_D.username[0], "Gaurav");
        strcpy(A_D.username[1], "Aditya");
        strcpy(A_D.username[2], "younus");
        strcpy(A_D.username[3], "arslaan");
        strcpy(A_D.username[4], "Rohit");
        strcpy(A_D.password[0], "Gaurav@123");
        strcpy(A_D.password[1], "Aditya@123");
        strcpy(A_D.password[2], "younus@123");
        strcpy(A_D.password[3], "arslaan@123");
        strcpy(A_D.password[4], "Rohit@123");

        int a, ch;
        char uname[30];
        printf("1.Apply for job \n2.Existing Employee \n3.logout\n");
        printf("Enter your choice : ");
        scanf("%d", &ch);
        printf("\n");
        switch (ch)
        {

        case 1:
            applicationform(&a, 5);
            interview(5);
            display(&a, 5);
            break;
        case 2:
            printf("-------------------------------------------------------------------------------------------------------\n"
                   "|                                           LOGIN PAGE                                                |\n"
                   "-------------------------------------------------------------------------------------------------------\n");
            printf("Enter the username: ");
            scanf("%s", uname);
            int j;
            j = checkacc(uname);
            if (j == -1)
                continue;
            else
                dashboard(&a, j);
            break;

        case 3:
            exit(1);
            break;
        default:
            printf("invalid choice");
        }
    }
    return 0;
}
// REGARDS TEAM PROTON