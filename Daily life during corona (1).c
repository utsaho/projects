include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

char sign_up();
char sign_in();

void newspaper();
void tv();
void main_menu();
void health();
void entertainment();
void news();
void others();
void aagain(int n);
void cpt();
void medical_contact();
void medical_report();
void bmi();
void urine_test();
void bmr();
void iq_test();
float area_of_triangle();
float area_of_parallel();
float area_of_quadrilateral();
float area_of_circle();
float tri_values();
void math_corner();
void physics_corner();
void theory();
float range_of_a_missile();
float the_roaming_time_of_a_missle();
float Determine_The_Power_of_Water_Pump();
float water_pump();
float Current_Bill();

void calcu();
int calcuAgain();
void factorial();
void root();
void cube_root();
void power();
void sum();
void sub();
void multiply();
void trigono();

int Converter_input();
int cAgain();
void main_converter(int c);
void main_operation();
void length_converter();
float l_converter(int first_in, int second_in, long double num);
void temp_converter();
long double t_converter(int f_in, int s_in, long double temp);
void mass_converter();
float m_converter(int first_in, int second_in, long double num);
void digital_storage();
float d_storage(int first_in, int second_in, long double num);
void area_converter();
float a_converter(int f_in, int s_in, long double num);
void frequency_converter();
float f_converter(int f_in, int s_in, long double num);

void main()
{

    int num;

    //char open[] = {"Welcome To Our Project\n"};

    //printf("\n\n\n\n\n\n\t\t\t\t\t");

    /*for(int i=0; i<=strlen(open); i++){
        printf("%c",open[i]);
        sleep(1);
    }
    */
    printf("\n\n\n\t\t\t\t\t1. Sign Up\n\n\t\t\t\t\t2. Sign In\n\n\t\t\t\t\tSelect your option : ");

    system("color 6");

    scanf("%d", &num);

    system("cls");

    if (num == 1)
    {

        sign_up();
    }

    else if (num == 2)
    {

        sign_in();
    }
    else
    {
        main();
    }
}

char sign_up()
{

    FILE *fp;

    char name[1000], pass[1000];

    printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\tUser Name : ");

    scanf("%s", name);

    system("cls");

    printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\tPassword : ");

    scanf("%s", pass);

    fp = fopen("sign_in.txt", "a+");

    fprintf(fp, name);

    fprintf(fp, "\n");

    fprintf(fp, pass);

    fprintf(fp, "\n");

    fclose(fp);

    system("cls");

    main();
}

char sign_in()
{

    char n[300], p[300];

    printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\tUsername : ");

    scanf("%s", &n);

    system("cls");

    printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\tPassword : ");

    scanf("%s", &p);

    system("cls");

    FILE *file;

    file = fopen("sign_in.txt", "r+");

    char name[300], pass[300];

    while (fscanf(file, "%s", name) != EOF)

    {
        fscanf(file, "%s", pass);

        if (strcmp(name, n) == 0 && strcmp(pass, p) == 0)
        {
            main_menu();
        }
        //else{ printf("Invalid Username or Password\n"); sign_in();
    }
    printf("\n\n\n\n\n\n\t\t\t\t\tInvalid Username or Password\n\n");
    main();

    system("cls");
}
/*
int main() {
    main_menu ();
    return 0;
}
*/
void main_menu()
{
    int op;
    printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\tMain Menu:\n");
    printf("\n\t\t\t\t\t1.Health.\n");
    printf("\n\t\t\t\t\t2.News.\n");
    printf("\n\t\t\t\t\t3.Entertainment.\n");
    printf("\n\t\t\t\t\t4.Others.\n");
    printf("\n\t\t\t\t\t5.Exit.\n");
    do
    {

        printf("\n\n\t\t\t\t\tSelect your option : ");
        scanf("%d", &op);
        system("cls");
        if (op == 5)
        {
            exit(0);
        }
        else if (op < 1 || op > 5)
        {
            printf("Invalid input!\ntry again: ");
        }
    } while (op < 1 || op > 5);
    if (op == 1)
    {
        health();
    }
    else if (op == 2)
    {
        news();
    }
    else if (op == 3)
    {
        entertainment();
    }
    else if (op == 4)
    {
        others();
    }
}

void health()
{
    int num;
    printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\tHealth Menu : \n");
    printf("\n\n\t\t\t\t\t1.BMI(Body Mass Index)\n\n\t\t\t\t\t2.Corona Possibility Test\n\n\t\t\t\t\t3.Analyzing Medical Report\n\n\t\t\t\t\t4.Analyzing Urine Test Report\n\n\t\t\t\t\t5.Medical Conact\n\n\t\t\t\t\t6.BMR Test\n\n\t\t\t\t\t7.Main Menu\n");
    do
    {

        printf("\n\t\t\t\t\tEnter you option : ");
        scanf("%d", &num);
        system("cls");
        if (num == 7)
        {
            main_menu();
        }
        else if (num < 1 || num > 7)
        {
            printf("Invalid input!\nTry again: ");
        }
    } while (num < 1 || num > 7);
    switch (num)
    {
    case 1:
        bmi();
        aagain(1);
        break;
    case 2:
        cpt();
        aagain(1);
        break;
    case 3:
        medical_report();
        aagain(1);
        break;
    case 4:
        urine_test();
        aagain(1);
        break;
    case 5:
        medical_contact();
        aagain(1);
        break;
    case 6:
        bmr();
        aagain(1);
        break;
    default:
        main_menu();
    }
}
void aagain(int n)
{
    int again;
    printf("\n\n\t\t\t\t\t1.Check Again\n\n\t\t\t\t\t0.main manu\n");
    do
    {

        printf("\n\t\t\t\t\tSelect your option : ");
        scanf("%d", &again);
        system("cls");
        if (again == 0)
        {
            main_menu();
        }
        else if (again == 1)
        {
            switch (n)
            {
            case 1:
                n = 0;
                health();
                break;
            case 2:
                n = 0;
                news();
                break;
            case 3:
                n = 0;
                entertainment();
                break;
            case 4:
                n = 0;
                others();
                break;
            default:
                main_menu();
            }
        }
        else
        {
            printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\tTry again: ");
            aagain(1);
        }
    } while (again < 1 || again > 2);
}

void entertainment()
{
    int en;
    printf("\n\n\n\n\n\n\t\t\t\t\tEntertainment\n");
    printf("\n\n\t\t\t\t\t1.IQ test\n\n\t\t\t\t\t2.Hangman Game\n\n\t\t\t\t\t0.Exit\n");
    do
    {
        printf("\n\n\t\t\t\t\tSelect your option : ");
        scanf("%d", &en);
        system("cls");
        if (en == 0)
        {
            main_menu();
        }
        else if (en < 1 || en > 2)
        {
            printf("\nInvalid Input\nTry again: ");
        }
    } while (en < 1 || en > 2);
    switch (en)
    {
    case 1:
        iq_test();
        aagain(3);
        break;
    case 2:
        hangman();
        //printf ("Line: 221. hangman()\n");
        aagain(3);
        break;
    default:
        main_menu();
    }
}

void news()
{
    int ne;
    printf("\n\n\n\n\n\n\n\n\t\t\t\t\tNews menu\n");
    printf("\n\n\t\t\t\t\t1.Newspaper\n\n\t\t\t\t\t2.TV\n\n\t\t\t\t\t0.Exit\n\n");
    do
    {

        printf("\n\n\t\t\t\t\tSelect your option : ");
        scanf("%d", &ne);
        system("cls");
        if (ne == 0)
        {
            main_menu();
        }
        else if (ne < 1 || ne > 2)
        {
            printf("Invalid input\nTry again: ");
        }
    } while (ne < 1 || ne > 2);
    switch (ne)
    {
    case 1:
        newspaper();
        //printf ("Line 220 : newspaper()\n");
        aagain(2);
        break;
    case 2:
        tv();
        //printf ("Line: 221. tv()\n");
        aagain(2);
        break;
    default:
        main_menu();
    }
}

void others()
{
    int nn;
    printf("\n\n\t\t\t\t\tOther menu\n");
    printf("\n\n\n\t\t\t\t\t1.Converter\n\n\t\t\t\t\t2.Calculator\n\n\t\t\t\t\t3.Math Corner\n\n\t\t\t\t\t4.Physics Corner\n\n\t\t\t\t\t0.Exit\n");
    do
    {
        printf("\n\t\t\t\t\tSelect your option : ");
        scanf("%d", &nn);
        system("cls");
        system("\n");
        if (nn == 0)
        {
            main_menu();
        }
        else if (nn < 1 || nn > 4)
        {
            printf("\n\t\t\t\t\tInvalid input\n\n\t\t\t\t\tTry again: ");
        }
    } while (nn < 1 || nn > 4);
    switch (nn)
    {
    case 1:
        main_converter(0);
        aagain(4);
        break;
    case 2:
        calcu();
        aagain(4);
        break;
    case 3:

        math_corner();
        aagain(4);
        break;
    case 4:
        physics_corner();
        aagain(4);
        break;
    default:
        main_menu();
    }
}

void bmi()
{

    float i, j, X;

    printf("\n\n\t\t\t\t\t   Welcome to BMI (Body Mass Index) Test");

    printf("\n\n\n\n\n\n\n\t\t\t\t\t Please enter your height in meter scale : ");
    scanf("%f", &i);

    system("cls");

    printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t Please enter your weight in kg scale : ");
    scanf("%f", &j);

    system("cls");

    X = j / (i * i);

    printf("\n\n\t\t\t\t\t\t Your BMI score is : %.2f\n", X);

    printf("\n\n\t\t\t\t\t\t\tSuggestions: \n");

    if (X < 18.5)
    {
        printf("\n\n\t\t\t\t\tYour BMI score represents underweight class.\n\n\t\t\t\t\tIt means that you are suffering from malnutrition.\n\n\t\t\t\t\tSo eat nutritious food to increase your BMI level.\n\n\n");
    }
    else if (X >= 18.5 && X <= 24.99)
    {
        printf("\n\n\t\t\t\t\tGood news!\n\n\t\t\t\t\tYour BMI score represents standard level or normal weight.\n\n\t\t\t\t\tTry to maintain it for a healthy life.\n\n\n");
    }
    else if (X >= 25.00 && X <= 29.99)
    {
        printf("\n\n\t\t\t\t\tYour BMI score illustrates overweight class.\n\n\t\t\t\t\tYou have some extra mass.\n\n\t\t\t\t\tDo some light exercise like - walking slowly, light jogging, fishing sitting.\n\n\n");
    }
    else if (X >= 30.00 && X <= 34.99)
    {
        printf("\n\n\t\t\t\t\tYour BMI score depicts class i obesity.\n\n\t\t\t\t\tIt means you are on the first stage of a fatty body.\n\n\t\t\t\t\tSo try to avoid fast food and oily food as well as do some mild exercise like - walking up stairs, bicycling, playing badminton.\n\n\n");
    }
    else if (X >= 35.00 && X <= 39.99)
    {
        printf("\n\n\t\t\t\t\tYour BMI score demonstrates class ii obesity.\n\n\t\t\t\t\tIt means you are on the second stage of a fatty body.\n\n\t\t\t\t\tSo you need to do regular exercise and avoid fast food and oily food as well as cold drinks.\n\n\n");
    }
    else if (X >= 40)
    {
        printf("\n\n\t\t\t\t\tSad news!\n\n\t\t\t\t\tYour BMI score falls on the class iii obesity.\n\n\t\t\t\t\tIt means you are on the third stage of a fatty body.\n\n\t\t\t\t\tSo you need to consult with a doctor as early as possible.\n\n\n");
    }
}
void urine_test()
{

    printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\tUrine Test\n\n");

    int val;

    printf("\n\n\t\t\t\t\tCrystals existence : \n\t\t\t\t\t\n\n\t\t\t\t\t1.Positive    2.Negative");

    printf("\n\n\t\t\t\t\tSelect your option : ");

    scanf("%d", &val);

    system("cls");

    if (val == 1)
    {

        printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\tA possible sign of kidney stones\n\n");
    }

    else if (val == 2)
    {

        printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\tReport Status : ok\n");
    }

    else
    {
        printf("\n\n\t\t\t\t\tInvalid Input\n");
    }

    printf("\n\n\t\t\t\t\tExistence of Protein : \n\n\t\t\t\t\t1.Positive\t2.Negative");

    printf("\n\n\t\t\t\t\tSelect your option : ");

    scanf("%d", &val);

    system("cls");

    if (val == 1)
    {

        printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\tThis can be a sign that your kidneys arenot working right. \n\t\t\t\t\tKidneys filter waste products out of your blood.\n\n");
    }

    else if (val == 2)
    {
        printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\tReport Status : ok\n");
    }

    else
    {
        printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\tInvalid Input\n\n");
    }

    printf("\n\n\t\t\t\t\tExistence of Glucose :\n\n\t\t\t\t\t1.Positive\t2.Negative\n\n");

    printf("\n\t\t\t\t\tSelect your option : ");

    scanf("%d", &val);

    system("cls");

    if (val == 1)
    {
        printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\tA high sugar content is a marker for diabetes.\n");
    }

    else if (val == 2)
    {
        printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\tReport Status : ok\n");
    }

    else
    {
        printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\tInvalid Input\n");
    }

    printf("\n\n\t\t\t\t\tExistence of White Blood Cells :\n\n\t\t\t\t\t1.Positive\t2.Negative\n");

    printf("\n\t\t\t\t\tSelect your option : ");

    scanf("%d", &val);

    system("cls");

    if (val == 1)
    {
        printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\tThese are a sign of infection or inflammation,\n\n\t\t\t\t\teither in the kidneys or anywhere else along your urinary tract.\n");
    }

    else if (val == 2)
    {
        printf("\n\n\t\t\t\t\tReport Status : ok\n");
    }

    else
    {
        printf("\n\t\t\t\t\tInvalid Input\n");
    }

    printf("\n\n\t\t\t\t\tExistence of Nitrites :\n\n\t\t\t\t\t1.Positive\t2.Negative\n");

    printf("\n\t\t\t\t\tSelect your option : ");

    scanf("%d", &val);

    system("cls");

    if (val == 1)
    {
        printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\tThis means that there is an infection with certain kinds of bacteria.\n");
    }

    else if (val == 2)
    {
        printf("\n\t\t\t\t\tReport Status : ok\n");
    }

    else
    {
        printf("\n\t\t\t\t\tInvalid Input\n");
    }

    printf("\n\n\t\t\t\t\tExistence of Bilirubin. :\n\n\t\t\t\t\t1.Positive\t2.Negative\n");

    printf("\n\t\t\t\t\tSelect your option : ");

    scanf("%d", &val);

    system("cls");

    if (val == 1)
    {
        printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\tIf this waste product, which is normally eliminated by your liver, \n\n\t\t\t\t\tshows up, it may mean your liver isn�t working properly.\n");
    }

    else if (val == 2)
    {
        printf("\n\t\t\t\t\tReport Status : ok\n");
    }

    else
    {
        printf("\n\t\t\t\t\tInvalid Input\n");
    }

    printf("\n\n\t\t\t\t\tExistence of Blood in urine :\n\t\t\t\t\t1.Positive\t2.Negative\n");

    printf("\n\t\t\t\t\tSelect your option : ");

    scanf("%d", &val);

    scanf("cls");

    if (val == 1)
    {
        printf("\n\n\t\t\t\t\tSometimes this is a sign of infections or certain illnesses.\n");
    }

    else if (val == 2)
    {
        printf("\n\n\t\t\t\t\tReport Status : ok\n");
    }

    else
    {
        printf("\n\n\t\t\t\t\tInvalid Input\n");
    }
}

void cpt()
{

    int num, psb = 0, frr[15] = {0}, wrong = 0, nnn = 0;
    for (int i = 0; i < 14; i++)
    {
        frr[i] = 1;
        if (i + 1 == 14)
        {
            frr[i + 1] = '\0';
        }
    }
    printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\tWhich covid symptoms do you have?\n");
    printf("\t\t\t\t\t1.fever\n\t\t\t\t\t2.dry cough\n\t\t\t\t\t3.tiredness\n\t\t\t\t\t4.aches and pains\n\t\t\t\t\t5.sore throat\n\t\t\t\t\t6.diarrhoea\n\t\t\t\t\t7.conjunctivitis\n\t\t\t\t\t8.headache\n\t\t\t\t\t9.loss of taste or smell\n\t\t\t\t\t10.a rash on skin, or discolouration of fingers or toes\n\t\t\t\t\t11.difficulty breathing or shortness of breath\n\t\t\t\t\t12.chest pain or pressure\n\t\t\t\t\t13.loss of speech or movement\n");

    printf("\t\t\t\t\tSelect 0 to EXIT\n\t\t\t\t\tEnter symptoms: ");
    while (scanf("%d", &num))
    {
        if ((num < 1 || num > 13) && num != 0)
        {
            printf("\t\t\t\t\tTry again!\n");
            wrong++;
            if (wrong == 10)
            {
                printf("\nIf you want to EXIT, Enter 0\nOtherwise continue\n");
                wrong = 0;
            }
            continue;
        }
        else if ((num == 1 && frr[1]) || (num == 2 && frr[2]) || (num == 3 && frr[3]) || (num == 11 && frr[11]) || (num == 12 && frr[12]) || (num == 13 && frr[13]))
        {
            nnn += num;
            psb += 10;
        }
        else if ((num == 4 && frr[4]) || (num == 5 && frr[5]) || (num == 6 && frr[6]) || (num == 7 && frr[7]))
        {
            nnn += num;
            psb += 5;
        }
        else if ((num == 9 && frr[9]) || (num == 10 && frr[10]))
        {
            nnn += num;
            psb += 6;
        }
        else if (num == 8 && frr[8])
        {
            nnn += num;
            psb += 8;
        }
        if (num == 0 || nnn == 91)
        {
            break;
        }
        if (num >= 1 && num <= 13)
        {
            frr[num] = 0;
        }
    }
    if (psb != 0)
        printf("\n\n\t\t\t\t\tCorona Possibity = %d\%%\n", psb);
}

void bmr()
{
    int c, a;
    double w, h, men_bmr, women_bmr;

    printf("\t\t\t\t\t\tWelcome to BMR Calculator\n\n\n");
    printf("\t\t\t\t\t\t\tMain menu\n\n");
    printf("\n\t\t\t\t1. Men BMR\n");
    printf("\n\t\t\t\t2. Women BMR\n");
    printf("\n\t\t\t\t3. Exit\n\n");

    do
    {
        printf("\n\n\t\t\t\tEnter choice: ");
        scanf("%d", &c);
        if (c == 3)
        {
            health();
        }
        else if (c < 1 || c > 2)
        {
            printf("\n\n\n\t\t\t\t\t\t\tInvalid choice, try again!\n\n");
        }
    } while (c < 1 || c > 3);

    if (c == 1)
    {
        printf("\n\n\t\t\t\t\t\t  Enter weight in kg: ");
        scanf("%lf", &w);
        printf("\n\n\t\t\t\t\t\t  Enter height in cm: ");
        scanf("%lf", &h);
        printf("\n\n\t\t\t\t\t\t  Enter age in years: ");
        scanf("%d", &a);
        men_bmr = (10 * w) + (6.25 * h) - (5 * a) + 5;
        printf("\n\n\t\t\t\t\t\t  Your BMR score is : %.1lf\n", men_bmr);
        printf("\n\n\n\n\t\t\t    Ways you may follow to increase your BMR (in case of low BMR) : \n\n");
        printf("\n\n\t\t\t\t\t 1. Eat plenty of protein at every meal.\n\n\t\t\t\t\t 2. Drink more cold water.\n\n\t\t\t\t\t 3. Do a high-intensity workout.\n\n\t\t\t\t\t 4. Lift heavy things.\n\n\t\t\t\t\t 5. Stand up more.");
        printf("\n\n\t\t\t\t\t 6. Drink green tea or oolong tea.\n\n\t\t\t\t\t 7. Eat spicy foods.\n\n\t\t\t\t\t 8. Get a good night's sleep.\n\n\t\t\t\t\t 9. Drink coffee.\n\n\t\t\t\t\t 10. Replace cooking fats with coconut oil.\n");
        printf("\n\n\n\n\t\t\t    Ways you may follow to decrease your BMR (in case of high BMR) : \n\n");
        printf("\n\n\t\t\t\t\t 1. Skip meals.\n\n\t\t\t\t\t 2. Take big naps.\n\n\t\t\t\t\t 3. Dress warmly.\n\n\t\t\t\t\t 4. Lie still.\n\n\t\t\t\t\t 5. Do not drink cold water.");
        printf("\n\n\t\t\t\t\t 6. Meditate.\n\n\t\t\t\t\t 7. Replace simple carbohydrates with complex carbohydrates.\n\n\t\t\t\t\t 8. Avoid the sun or use sunscreens obsessively.\n\n\t\t\t\t\t 9. Less daily activities may help to reduce BMR.\n\n\t\t\t\t\t 10. Loss of muscle mass leads to reduced BMR.\n\n\n");
    }

    else if (c == 2)
    {
        printf("\n\n\t\t\t\t\t\t  Enter weight in kg: ");
        scanf("%lf", &w);
        printf("\n\n\t\t\t\t\t\t  Enter height in cm: ");
        scanf("%lf", &h);
        printf("\n\n\t\t\t\t\t\t  Enter age in years: ");
        scanf("%d", &a);
        women_bmr = (10 * w) + (6.25 * h) - (5 * a) - 161;
        printf("\n\n\t\t\t\t\t\t  Your BMR score is : %.1lf\n", women_bmr);
        printf("\n\n\n\n\t\t\t    Ways you may follow to increase your BMR (in case of low BMR) : \n\n");
        printf("\n\n\t\t\t\t\t 1. Eat plenty of protein at every meal.\n\n\t\t\t\t\t 2. Drink more cold water.\n\n\t\t\t\t\t 3. Do a high-intensity workout.\n\n\t\t\t\t\t 4. Lift heavy things.\n\n\t\t\t\t\t 5. Stand up more.");
        printf("\n\n\t\t\t\t\t 6. Drink green tea or oolong tea.\n\n\t\t\t\t\t 7. Eat spicy foods.\n\n\t\t\t\t\t 8. Get a good night's sleep.\n\n\t\t\t\t\t 9. Drink coffee.\n\n\t\t\t\t\t 10. Replace cooking fats with coconut oil.\n");
        printf("\n\n\n\n\t\t\t    Ways you may follow to decrease your BMR (in case of high BMR) : \n\n");
        printf("\n\n\t\t\t\t\t 1. Skip meals.\n\n\t\t\t\t\t 2. Take big naps.\n\n\t\t\t\t\t 3. Dress warmly.\n\n\t\t\t\t\t 4. Lie still.\n\n\t\t\t\t\t 5. Do not drink cold water.");
        printf("\n\n\t\t\t\t\t 6. Meditate.\n\n\t\t\t\t\t 7. Replace simple carbohydrates with complex carbohydrates.\n\n\t\t\t\t\t 8. Avoid the sun or use sunscreens obsessively.\n\n\t\t\t\t\t 9. Less daily activities may help to reduce BMR.\n\n\t\t\t\t\t 10. Loss of muscle mass leads to reduced BMR.\n\n\n");
    }
}

void medical_contact()
{

    int division_no;
    printf("\n\t\t\t\t\t\t   Welcome to Helpline\n\n\n");
    printf("\n\t\t\t\t\t\t    List of Division\n");
    printf("\n\n\t\t\t\t\t1. Dhaka\n");
    printf("\n\t\t\t\t\t2. Chittagong\n");
    printf("\n\t\t\t\t\t3. Rajshahi\n");
    printf("\n\t\t\t\t\t4. Rangpur\n");
    printf("\n\t\t\t\t\t5. Khulna\n");
    printf("\n\t\t\t\t\t6. Barisal\n");
    printf("\n\t\t\t\t\t7. Sylhet\n");
    printf("\n\t\t\t\t\t8. Mymensingh\n");
    printf("\n\t\t\t\t\t9. Exit\n");

    do
    {
        printf("\n\n\n\t\t\t\t\tChoose your division : ");
        scanf("%d", &division_no);

        if (division_no == 9)
        {
            health();
        }
        else if (division_no > 8 || division_no < 1)
        {
            printf("\n\n\n\t\t\t\t\t\tInvalid choice, try again!\n");
        }
    } while (division_no > 8 || division_no < 1);

    switch (division_no)
    {
    case 1:
        printf("\n\n\n\t\t\t\t\t1. Name: Dhaka Medical College (DMC), Dhaka.\n\n\t\t\t\t\tContact: 0255165001 \n\n\t\t\t\t\tWebsite: www.dmc.gov.bd \n");
        printf("\n\t\t\t\t\t2. Name: Sir Salimullah Medical College (SSMC), Dhaka.\n\n\t\t\t\t\tContact: 57315076 \n\n\t\t\t\t\tWebsite: www.ssmcbd.net \n");
        printf("\n\t\t\t\t\t3. Name: Shaheed Suhrawardy Medical College (ShSMC), Dhaka.\n\n\t\t\t\t\tContact: 028144048 \n\n\t\t\t\t\tWebsite: www.shsmc.gov.bd \n");
        printf("\n\t\t\t\t\t4. Name: Faridpur Medical College (FMC), Faridpur.\n\n\t\t\t\t\tContact: 063163331 \n\n\t\t\t\t\tWebsite: www.fmcgov.edu.bd \n");
        printf("\n\t\t\t\t\t5. Name: Shahid Syed Nazrul Islam Medical College (SSNIMC), Kishoreganj.\n\n\t\t\t\t\tContact: 094161068 \n\n\t\t\t\t\tWebsite: www.ssnimc.gov.bd \n");
        printf("\n\t\t\t\t\t6. Name: Sheikh Sayera Khatun Medical College (SSKMC), Gopalganj.\n\n\t\t\t\t\tContact: 026681103 \n");
        printf("\n\t\t\t\t\t7. Name: Shaheed Tajuddin Ahmad Medical College (STAMC), Gazipur.\n\n\t\t\t\t\tContact: 9261281 \n");
        printf("\n\t\t\t\t\t8. Name: Sheikh Hasina Medical College (SHMCT), Tangail.\n");
        printf("\n\t\t\t\t\t9. Name: Colonel Malek Medical College (CMMC), Manikganj.\n\n\t\t\t\t\tContact: 01711960552 \n\n\t\t\t\t\tWebsite: www.cmmc.gov.bd \n");
        printf("\n\t\t\t\t\t10. Name: Mugda Medical College (MuMC), Dhaka.\n\n\t\t\t\t\tContact: +88027276032 \n\n\t\t\t\t\tWebsite: www.mumc.gov.bd \n");
        printf("\n\t\t\t\t\t11. Name: Armed Forces Medical College (AFMC), Dhaka Cantonment.\n\n\t\t\t\t\tContact: 01976560678 \n\n\t\t\t\t\tWebsite: www.afmc.edu.bd \n\n\n");
        break;

    case 2:
        printf("\n\n\n\t\t\t\t\t1. Name: Chittagong Medical College Hospital (CMCH), Chittagong.\n\n\t\t\t\t\tContact: 031630179 \n\n\t\t\t\t\tWebsite: www.cmch.gov.bd \n");
        printf("\n\t\t\t\t\t2. Name: Cumilla Medical College Hospital (CuMCH), Cumilla.\n\n\t\t\t\t\tContact: 08165401 \n\n\t\t\t\t\tWebsite: www.comch.gov.bd \n");
        printf("\n\t\t\t\t\t3. Name: Abdul Malek Ukil Medical College & Hospital (AMUMCH), Noakhali.\n\n\t\t\t\t\tContact: 032154300 \n");
        printf("\n\t\t\t\t\t4. Name: Cox's Bazar Medical College and Hospital (CoxMCH), Cox's Bazar.\n\n\t\t\t\t\tContact: 034151300 \n\n\t\t\t\t\tWebsite: www.coxmc.edu.bd \n");
        printf("\n\t\t\t\t\t5. Name: Rangamati Medical College (RmMC), Rangamati.\n\n\t\t\t\t\tContact: 035163821 \n\n\t\t\t\t\tWebsite: www.rangamatimc.edu.bd \n");
        printf("\n\t\t\t\t\t6. Name: Chandpur Medical College (ChMC), Chandpur.\n\n\t\t\t\t\tContact: 084167042 \n\n\t\t\t\t\tWebsite: www.chandpurmc.edu.bd \n");
        printf("\n\t\t\t\t\t7. Name: Army Medical College Chittagong (AMCC), Chittagong Cantonment.\n\n\t\t\t\t\tContact: 0312580425 \n\n\t\t\t\t\tWebsite: www.amcc.edu.bd \n");
        printf("\n\t\t\t\t\t8. Name: Army Medical College Cumilla (AMCCu), Cumilla Cantonment.\n\n\t\t\t\t\tContact: 08180138 \n\n\t\t\t\t\tWebsite: www.amccomilla.edu.bd \n\n\n");
        break;

    case 3:
        printf("\n\n\n\t\t\t\t\t1. Name: Rajshahi Medical College Hospital (RMCH), Rajshahi.\n\n\t\t\t\t\tContact: 0721772150 \n\n\t\t\t\t\tWebsite: www.rmc.gov.bd \n");
        printf("\n\t\t\t\t\t2. Name: Shaheed Ziaur Rahman Medical College (SZMC), Bogra.\n\n\t\t\t\t\tContact: 05169965 \n\n\t\t\t\t\tWebsite: www.szmc.gov.bd \n");
        printf("\n\t\t\t\t\t3. Name: Pabna Medical College (PMC), Pabna.\n\n\t\t\t\t\tContact: 073162002 \n\n\t\t\t\t\tWebsite: www.medicalcollege.pabna.gov.bd \n");
        printf("\n\t\t\t\t\t4. Name: Shaheed M. Monsur Ali Medical College (SMMAMC), Sirajganj.\n\n\t\t\t\t\tContact: 075164244 \n\n\t\t\t\t\tWebsite: www.smmamc.gov.bd \n");
        printf("\n\t\t\t\t\t5. Name: Naogaon Medical College Hospital (NaMCH), Naogaon.\n\n\t\t\t\t\tContact: 01711730447 \n\n\t\t\t\t\tWebsite: www.naogaonmedical.naogaon.gov.bd \n");
        printf("\n\t\t\t\t\t6. Name: Army Medical College Bogra (AMCB), Bogra Cantonment.\n\n\t\t\t\t\tContact: 01769115939 \n\n\t\t\t\t\tWebsite: www.amcbogra.edu.bd \n\n\n");
        break;

    case 4:
        printf("\n\n\n\t\t\t\t\t1. Name: Rangpur Medical College Hospital (RpMCH), Rangpur.\n\n\t\t\t\t\tContact: 052163630 \n\n\t\t\t\t\tWebsite: www.rcmc.com.bd \n");
        printf("\n\t\t\t\t\t2. Name: M Abdur Rahim Medical College (MARMC), Dinajpur.\n\n\t\t\t\t\tContact: 053152320 \n\n\t\t\t\t\tWebsite: www.marmcd.edu.bd \n");
        printf("\n\t\t\t\t\t3. Name: Nilphamari Medical College (NpMC), Nilphamari.\n");
        printf("\n\t\t\t\t\t4. Name: Rangpur Army Medical College (RAMC) , Rangpur Cantonment.\n\n\t\t\t\t\tContact: 01769665656 \n\n\t\t\t\t\tWebsite: www.ramcbd.com \n\n\n");
        break;

    case 5:
        printf("\n\n\n\t\t\t\t\t1. Name: Khulna Medical College (KMC), Khulna.\n\n\t\t\t\t\tContact: +88041760350 \n");
        printf("\n\t\t\t\t\t2. Name: Jessore Medical College (JMC), Jessore.\n\n\t\t\t\t\tContact: 042162300 \n");
        printf("\n\t\t\t\t\t3. Name: Satkhira Medical College & Hospital (SMCH), Satkhira.\n\n\t\t\t\t\tContact: 01718550966 \n");
        printf("\n\t\t\t\t\t4. Name: Kushtia Medical College (KuMC), Kushtia.\n\n\t\t\t\t\tContact: 55545786332 \n\n\t\t\t\t\tWebsite: www.kushtiamc.com \n");
        printf("\n\t\t\t\t\t5. Name: Magura Medical College (MaMC), Magura.\n\n\t\t\t\t\tContact: 01700977037 \n\n\t\t\t\t\tWebsite: www.maguramc.edu.bd \n");
        printf("\n\t\t\t\t\t6. Name: Army Medical College Jessore (AMCJ), Jessore Cantonment.\n\n\n");
        break;

    case 6:
        printf("\n\n\n\t\t\t\t\t1. Name: Sher-e-Bangla Medical College Hospital (SBMCH), Barisal.\n\n\t\t\t\t\tContact: 43164519 \n");
        printf("\n\t\t\t\t\t2. Name: Patuakhali Medical College Hospital (PkMCH), Patuakhali.\n\n\t\t\t\t\tContact: +044165325 \n\n\t\t\t\t\tWebsite: www.patuakhali-medical-college.simplesite.com \n\n\n");
        break;

    case 7:
        printf("\n\n\n\t\t\t\t\t1. Name: Sylhet MAG Osmani Medical College Hospital (SOMCH), Sylhet.\n\n\t\t\t\t\tContact: 0821714613 \n\n\t\t\t\t\tWebsite: www.magosmanimedical.com \n");
        printf("\n\t\t\t\t\t2. Name: Sheikh Hasina Medical College & Hospital (SHMCH), Habiganj.\n\n\t\t\t\t\tWebsite: www.habiganjmedicalcollege.firebaseapp.com \n\n\n");
        break;

    case 8:
        printf("\n\n\n\t\t\t\t\t1. Name: Mymensingh Medical College Hospital (MMCH), Mymensingh.\n\n\t\t\t\t\tContact: 01768027015 \n\n\t\t\t\t\tWebsite: www.mmch.gov.bd \n");
        printf("\n\t\t\t\t\t2. Name: Sheikh Hasina Medical College (SHMCJ), Jamalpur.\n");
        printf("\n\t\t\t\t\t3. Name: Netrokona Medical College (NMC), Netrokona.\n\n\n");
        break;

    case 9:
        break;

    default:
        medical_contact();
    }
}

void iq_test()
{

    printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t1,3,5,7,8,9,11-Which one doesn't belong to this series?\n");

    int num, count = 0;

    printf("\n\t\t\t\t\tAns : ");

    scanf("%d", &num);

    system("cls");

    if (num == 8)
    {
        count += 1;
    }

    printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t29, 27, 24, 20, 15....What is next?\n");

    printf("\n\t\t\t\t\tAns : ");

    scanf("%d", &num);

    system("cls");

    if (num == 9)
    {
        count += 1;
    }

    printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t2, 10, 12, 60, 62, 310.....What is next?\n");

    printf("\n\t\t\t\t\tAns : ");

    scanf("%d", &num);

    system("cls");

    if (num == 312)
    {
        count += 1;
    }

    else
    {
        count += 0;
    }

    printf("\n\n\n\n\n\t\t\t\t\tIf you rearrange the letters 'ANICH' you would have the name of a/an :\n\n\t\t\t\t\t1.Country\n\n\t\t\t\t\t2.Ocean\n\n\t\t\t\t\t3.State\n\n\t\t\t\t\t4.City\n\n\t\t\t\t\t5.Animal\n\n");

    printf("\t\t\t\t\tAns : ");

    scanf("%d", &num);

    system("cls");

    if (num == 1)
    {
        count += 1;
    }

    else
    {
        count += 0;
    }

    printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t1. The word 'racecar' is spelled the same forwards and backwards.\n");

    printf("\n\t\t\t\t\t1.True\n\n\t\t\t\t\t2.False\n");

    printf("\n\t\t\t\t\tAns : ");

    scanf("%d", &num);

    system("cls");

    if (num == 1)
    {
        count++;
    }

    else
    {
        count += 0;
    }

    printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\tIf you rearrange the letters 'BARBIT,' you would have the name of a:\n\n\t\t\t\t\t1.Ocean\n\n\t\t\t\t\t2.Country\n\n\t\t\t\t\t3.State\n\n\t\t\t\t\t4.City\n\n\t\t\t\t\t5.Animal\n\n");

    printf("\n\t\t\t\t\tAns : ");

    scanf("%d", &num);

    system("cls");

    if (num == 5)
    {
        count++;
    }

    else
    {
        count += 0;
    }

    printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\tNia,12 years old, is three times as old as her sister.\n\t\t\t\t\tHow old will Nia be when she is twice as old as her sister?\n\n\t\t\t\t\t1.15\n\n\t\t\t\t\t2.18\n\n\t\t\t\t\t3.16\n\n\t\t\t\t\t4.20\n\n\t\t\t\t\t5.21\n");

    printf("\n\t\t\t\t\tAns : ");

    scanf("%d", &num);

    system("cls");

    if (num == 3)
    {
        count++;
    }

    else
    {
        count += 0;
    }

    printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\tSOLICITOR is to ADVISOR as SYCOPHANT is to : \n\n\t\t\t\t\t1.Blackmailer\n\n\t\t\t\t\t2.Fawner\n\n\t\t\t\t\t3.Flautist\n\n\t\t\t\t\t4.Nobleman\n\n\t\t\t\t\t5.Ruffian\n");

    printf("\n\t\t\t\t\tAns : ");

    scanf("%d", &num);

    system("cls");

    if (num == 2)
    {
        count++;
    }

    else
    {
        count += 0;
    }

    printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\tYour Score : %d\n", count);
}

void medical_report()
{

    printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t1.Analyze BP Report\n\n\t\t\t\t\t2.Analyze Oxygen Level Report\n\n\t\t\t\t\t3.Analyze Diabetes Report\n\n\t\t\t\t\t4.Analyze Body Temperature \n\n\t\t\t\t\t5.Analyze Pulse Level\n\n\t\t\t\t\t6.Exit\n");

    while (1)
    {

        printf("\n\t\t\t\t\tSelect Your Option : ");

        int num;

        scanf("%d", &num);

        if (num == 6)
        {
            break;
            void health();
        }

        else if (num == 1)
        {

            int sys, dia;

            printf("\n\n\t\t\t\t\tSystolic mmHg : ");

            scanf("%d", &sys);

            printf("\n\n\t\t\t\t\tDiastolic mmHg : ");

            scanf("%d", &dia);

            if (sys < 100 && dia < 60)
            {

                printf("\n\n\t\t\t\t\tLow Blood Pressure\n");
            }

            else if (sys == 120 && dia == 80)
            {
                printf("\n\n\t\t\t\t\tNormal\n");
            }

            else if (sys < 120 && dia < 80)
            {

                printf("\n\n\t\t\t\t\tNormal\n");
            }

            else if ((sys >= 120 && sys <= 129) && (dia < 80))
            {

                printf("\n\n\t\t\t\t\tElevated\n");
            }

            else if ((sys >= 130 && sys <= 139) && (dia >= 80 && dia <= 89))
            {

                printf("\n\n\t\t\t\t\tHypertension(stage 1)\n");
            }

            else if ((sys >= 140 && sys < 180) && (dia >= 90 && dia < 120))
            {

                printf("\n\n\t\t\t\t\tHypertension(stage 2)\n");
            }

            else if (sys > 180 && dia > 120)
            {

                printf("\n\n\t\t\t\t\tHypertensive Crisis\n");
            }

            medical_report();
        }

        else if (num == 2)
        {

            int Oxy_lvl;

            printf("\n\n\t\t\t\t\tOxygen Level : ");

            scanf("%d", &Oxy_lvl);

            if (Oxy_lvl >= 95 && Oxy_lvl <= 100)
            {

                printf("\n\n\t\t\t\t\tNormal\n");
            }

            else if (Oxy_lvl < 90)
            {

                printf("\n\n\t\t\t\t\tAlarming Situation\n");
            }

            else if (Oxy_lvl >= 90 && Oxy_lvl < 95)
            {

                printf("\n\n\t\t\t\t\tOxygen Level Dropped\n");
            }
        }

        else if (num == 3)
        {

            float b_meal, a_meal;

            printf("\n\n\t\t\t\t\tSugar Level Before Meal__mmol/L : ");

            scanf("%f", &b_meal);

            printf("\n\n\t\t\t\t\tSugar Level after Meal__mmol/L : ");

            scanf("%f", &a_meal);

            if ((b_meal >= 4.0 && b_meal <= 5.9) && (a_meal <= 7.8))
            {

                printf("\n\n\t\t\t\t\tNon Diabetic\n");
            }

            else if ((b_meal > 4.0 && b_meal <= 7.0) && (a_meal > 7.8 && a_meal < 8.5))
            {

                printf("\n\n\t\t\t\t\tTyope 2 Diabetes\n");
            }

            else if ((b_meal > 4.0 && b_meal <= 7.0) && (a_meal >= 8.5 && a_meal < 9.0))
            {

                printf("\n\n\t\t\t\t\tType 2 Diabetes\n");
            }

            else if (b_meal < 5.0 && a_meal < 6.5)
            {

                printf("\n\n\t\t\t\t\tDiabetes Level Decreased\n");
            }
        }

        else if (num == 4)
        {

            float temp;

            printf("\n\n\t\t\t\t\tBody Temperature_�F : ");

            scanf("%f", &temp);

            if (temp >= 97 && temp <= 99)
            {

                printf("\n\n\t\t\t\t\tNormal\n");
            }

            else if (temp > 99)
            {

                printf("\n\n\t\t\t\t\tYou have a fever caused by an infection or illness.\n");
            }

            else if (temp < 97)
            {

                printf("\n\n\t\t\t\t\tBody Temperature is low.\n");
            }
        }

        else if (num == 5)
        {

            int pulse;

            printf("\n\n\t\t\t\t\tPulse Rate : ");

            scanf("%d", &pulse);

            if (pulse >= 60 && pulse <= 120)
            {

                printf("\n\n\t\t\t\t\tNormal\n");
            }

            else
            {
                printf("\n\n\t\t\t\t\tNot Normal\n");
            }
        }
    }
}

void math_corner()
{
    printf("\n\t\t\t\t\t\tWelcome To Math Corner\n\n");
    printf("\n\n\t\t\t\t\t1. Area of Triangle\n\n\t\t\t\t\t2. Area of Parallelogram\n\n\t\t\t\t\t3. Area of Quadrilateral\n\n\t\t\t\t\t4. Area of Circle\n\n\t\t\t\t\t5. Trigonometric Values\n\n ");

    int opt;

    printf("\n\n\t\t\t\t\tSelect your option : ");

    scanf("%d", &opt);

    if (opt == 1)
    {
        area_of_triangle();
    }
    else if (opt == 2)
    {
        area_of_parallel();
    }
    else if (opt == 3)
    {
        area_of_quadrilateral();
    }
    else if (opt == 4)
    {
        area_of_circle();
    }
    else if (opt == 5)
    {
        tri_values();
    }
}

float area_of_triangle()
{

    float i, j, A;
    printf("\n\n");

    printf("\n\t\t\t\t\tInput the value of base of triangle:  ");
    scanf("%f", &i);
    printf("\n");
    printf("\n\t\t\t\t\tInput the value of height of triangle:  ");
    scanf("%f", &j);

    A = 0.5 * i * j;
    printf("\n\n\t\t\t\t\tThe Total Area of Triangle is: %.2f\n\n", A);
}

float area_of_parallel()
{

    float i, j, Area;
    printf("\n\n");

    printf("\n\t\t\t\t\tInput the value of base of parallelogram:  ");
    scanf("%f", &i);

    printf("\n");

    printf("\n\t\t\t\t\tInput the value of height of parallelogram:  ");
    scanf("%f", &j);

    Area = i * j;
    printf("\n\n\t\t\t\t\tThe Total Area of Parallelogram is: %.2f\n\n", Area);
}

float area_of_quadrilateral()
{

    float i, j, A;
    printf("\n\n");

    printf("\n\t\t\t\t\tInput the value of length of quadrilateral:  ");
    scanf("%f", &i);
    printf("\n");

    printf("\n\t\t\t\t\tInput the value of width of quadrilateral:  ");
    scanf("%f", &j);

    A = i * j;
    printf("\n\n\t\t\t\t\tThe Total Area of Quadrilateral  is: %.2f\n\n", A);
}

float area_of_circle()
{

    float i, A;

    printf("\n\n");

    printf("\n\t\t\t\t\tInput the value of radius (in meter):  ");
    scanf("%f", &i);

    printf("\n");

    A = 3.1416 * i;
    printf("\n\t\t\t\t\tThe Area of The Circle is: %.2f meter\n\n", A);
}

float tri_values()
{

    int i;
    double x;
    double result;
    float a;

    printf("\n\n");
    printf("\t\t\t\t\t1) Sin(x)\n\n\t\t\t\t\t2) Cos(x)\n\n\t\t\t\t\t3) Tan(x)\n\n\t\t\t\t\t4) Cot(x)\n\n\t\t\t\t\t5) Sec(x)\n\n\t\t\t\t\t6) Cosec(x)\n\n\n");
    printf("\n\n\t\t\t\t\tWhich function you want to use?");
    printf("\n\n\n\t\t\t\t\t\tChoose option: ");
    scanf("%d", &i);

    if (i == 1)
    {
        printf("\n\n\n\t\t\t\t\tInput the value of angle (in degree): ");
        scanf("%f", &a);
        x = (a * 0.0174532925);
        result = sin(x);
        printf("\n\n\t\t\t\t\tValue of this function is: %.2f\n\n", result);
    }

    else if (i == 2)
    {
        printf("\n\n\n\t\t\t\t\tInput the value of angle (in degree): ");
        scanf("%f", &a);
        x = (a * 0.0174532925);
        result = cos(x);
        printf("\n\n\t\t\t\t\tValue of this function is: %.2f\n\n", result);
    }

    else if (i == 3)
    {
        printf("\n\n\n\t\t\t\t\tInput the value of angle (in degree): ");
        scanf("%f", &a);
        if (a == 90)
        {
            printf("\n\n\t\t\t\t\t\tMath Error!\n\n");
        }
        else
        {
            x = (a * 0.0174532925);
            result = tan(x);
            printf("\n\n\t\t\t\t\tValue of this function is: %.2f\n\n", result);
        }
    }

    else if (i == 4)
    {
        printf("\n\n\n\t\t\t\t\tInput the value of angle (in degree): ");
        scanf("%f", &a);
        if (a == 0)
        {
            printf("\n\n\t\t\t\t\t\tMath Error!\n\n");
        }
        else
        {
            x = (a * 0.0174532925);
            result = 1 / tan(x);
            printf("\n\n\t\t\t\t\tValue of this function is: %.2f\n\n", result);
        }
    }

    else if (i == 5)
    {
        printf("\n\n\n\t\t\t\t\tInput the value of angle (in degree): ");
        scanf("%f", &a);
        if (a == 90)
        {
            printf("\n\n\t\t\t\t\tMath Error!\n\n");
        }
        else
        {
            x = (a * 0.0174532925);
            result = 1 / cos(x);
            printf("\n\n\t\t\t\t\tValue of this function is: %.2f\n\n", result);
        }
    }

    else if (i == 6)
    {
        printf("\n\n\n\t\t\t\t\tInput the value of angle (in degree): ");
        scanf("%f", &a);
        if (a == 0)
        {
            printf("\n\n\t\t\t\t\t\tMath Error!\n\n");
        }
        else
        {
            x = (a * 0.0174532925);
            result = 1 / sin(x);
            printf("\n\n\t\t\t\t\tValue of this function is: %.2f\n\n", result);
        }
    }

    else
    {
        printf("\n\n\t\t\t\t\t\tInvalid Selection!\n\n");
    }
}

void physics_corner()
{

    int opt;

    printf("\n\n\n\t\t\t\t\t1. Daily life problem solving\n\n");

    printf("\t\t\t\t\t2. Some theories\n\n");

    printf("\n\n\t\t\t\t\t\tSelect your option : ");

    scanf("%d", &opt);

    if (opt == 1)
    {

        int op;

        printf("\n\n\t\t\t\t\t1. Range of a missile\n\n\t\t\t\t\t2. Roaming time of a missile\n\n\t\t\t\t\t3. Power of water pump\n\n\t\t\t\t\t4. Efficiency of water pump\n\n\t\t\t\t\t5. Electricity bill\n\n");

        printf("\n\n\n\t\t\t\t\tSelect your option : ");

        scanf("%d", &op);

        if (op == 1)
        {

            range_of_a_missile();
        }

        else if (op == 2)
        {

            the_roaming_time_of_a_missle();
        }

        else if (op == 3)
        {

            Determine_The_Power_of_Water_Pump();
        }

        else if (op == 4)
        {

            water_pump();
        }

        else if (op == 5)
        {

            Current_Bill();
        }

        else
        {
            printf("Wrong Input\n");
            main();
        }
    }

    else if (opt == 2)
    {

        theory();
    }

    else
    {
        printf("\nWrong Input\n\n");
        main();
    }
}

float range_of_a_missile()
{

    float v, a, r;
    float g = 9.8;
    double x;
    double result;

    printf("\n\n\n\t\t\t\t\t1. Determine the range of a missile");
    printf("\n\n\n");

    printf("\t\t\t\t\tInput the value of initial velocity of missile (in m/s): ");
    scanf("%f", &v);

    printf("\n");

    printf("\n\t\t\t\t\tInput the value of throwing angle (in degree): ");
    scanf("%f", &a);

    x = (2 * a * 0.0174532925);
    result = sin(x);
    r = (v * v * result) / g;

    printf("\n\n\n\t\t\t\t\tThe Range of This Missile is: %.2f meter\n\n", r);
}

float the_roaming_time_of_a_missle()
{
    float v, a, t;
    float g = 9.8;
    double x;
    double result;

    printf("\n\n\n\t\t\t\t\t2. Determine the roaming time of a missile");
    printf("\n\n");

    printf("\n\n\t\t\t\t\tInput the value of initial velocity of missile (in m/s): ");
    scanf("%f", &v);

    printf("\n");

    printf("\n\t\t\t\t\tInput the value of throwing angle (in degree): ");
    scanf("%f", &a);

    x = (2 * a * 0.0174532925);
    result = sin(x);
    t = (2 * v * result) / g;

    printf("\n\n\n\t\t\t\t\tThe Missile Roaming Time is: %.2f sec\n\n", t);
}

float water_pump()
{

    float m, h, t, p, x, n;
    float g = 9.8;

    printf("\n\n\n\t\t\t\t\t4. Efficiency of a water pump");
    printf("\n\n\n\n");

    printf("\t\t\t\t\tHow many liter you want to pump? ");
    scanf("%f", &m);

    printf("\n\n\t\t\t\t\tWhat is the height of your house roof (in meter)? ");
    scanf("%f", &h);

    printf("\n\n\t\t\t\t\tTotal time motor need to pump all water (in minute): ");
    scanf("%f", &t);

    printf("\n\n\t\t\t\t\tWhat is the power of your pump (in watt)? ");
    scanf("%f", &p);

    x = (m * g * h) / (t * 60);
    n = (x / p) * 100;

    printf("\n\n\n\t\t\t\t\tThe Efficiency of Your Water Pump is: %.2f percent\n\n", n);
}

float Determine_The_Power_of_Water_Pump()
{

    float m, h, t, p, x;
    float g = 9.8;

    printf("\n\n\n\t\t\t\t\t3. Determine the power of a water pump");
    printf("\n\n\n\n");

    printf("\t\t\t\t\tHow many liter you want to pump? ");
    scanf("%f", &m);

    printf("\n\n\t\t\t\t\tWhat is the height of your house roof (in meter)? ");
    scanf("%f", &h);

    printf("\n\n\t\t\t\t\tTotal time motor need to pump all water (in minute): ");
    scanf("%f", &t);

    p = (m * g * h) / (t * 60);
    x = p / 746;

    printf("\n\n\n\t\t\t\t\tThe Power of Water Pump Is: %.2f watt or %.2f H.P.\n\n", p, x);
}

float Current_Bill()
{

    int i, j;
    float a, b, c, d, e, x, y, U, rate, Bill;

    printf("\n");

    printf("\n\n\t\t\t\t\t5. Electricity bill section");
    printf("\n\n");

    printf("\n\n\t\t\t\t\tHow many electric bulb are there in your house? ");
    scanf("%d", &i);
    printf("\n\n\t\t\t\t\tPower of per bulb : ");
    scanf("%f", &a);

    printf("\n\n\t\t\t\t\tHow much time they remain switched on in a day?(in hour) ");
    scanf("%f", &b);

    printf("\n\n\t\t\t\t\tHow many ceiling fan are there in your house? ");
    scanf("%d", &j);
    printf("\n\n\t\t\t\t\tHow much time they remain switched on in a day?(in hour) ");
    scanf("%f", &c);

    printf("\n\n\t\t\t\t\tWhat is the power of your water pump?(in H.P.) ");
    scanf("%f", &d);
    printf("\n\n\t\t\t\t\tHow much time it remain switched on in a day?(in hour) ");
    scanf("%f", &e);

    printf("\n\n\t\t\t\t\tInput the power of others device (in watt) : ");
    scanf("%f", &x);
    printf("\n\n\t\t\t\t\tHow much time they remain switched on in a day? ");
    scanf("%f", &y);

    printf("\n\n\t\t\t\t\tInput the price per unit: ");
    scanf("%f", &rate);

    U = ((a * i * b) / 1000) + ((65 * j * c) / 1000) + ((d * 746 * e) / 1000) + ((x * y) / 1000);
    Bill = rate * U * 30;

    printf("\n\n\n\t\t\t\t\tThe Electricity Bill of Your House is: %.2f Tk\n\n\n", Bill);
}

void theory()
{
    int i;
    //printf("II)Physics Theory.\n\n\n");

    printf("\n\n\t\t\t\t\t1) Newton's First Law of Motion\n\n\t\t\t\t\t2) Newton's Second Law Of Motion\n\n\t\t\t\t\t3) Newton's Third Law Of Motion");
    printf("\n\n\t\t\t\t\t4) Newton's Law Of Gravitation\n\n\t\t\t\t\t5) Faraday's First Law Of Electro-Magnetic Induction\n\n\t\t\t\t\t6) Faraday's Second Law Of Electro-Magnetic Induction\n\n\t\t\t\t\t7) Theory of Relativity by Einstein\n\n");

    printf("\n\n\n\t\t\t\t\tWhich Law You Want To Know?");
    printf("\n\n\n\t\t\t\t\tChoose input : ");
    scanf("%d", &i);

    if (i == 1)
    {
        printf("\n\n\t\t\t\t\t1) Newton's First Law of Motion : \n\n\n'An object at rest stays at rest and an object in motion stays in motion with the same speed and in the same direction unless acted upon by an unbalanced force.'\n\n");
    }

    else if (i == 2)
    {
        printf("\n\n\t\t\t\t\t2) Newton's Second Law of Motion : \n\n\n'Rate of change of momentum of a body is proportional to applied force on the body and the direction along which the force acts,the change of momentum also occurs along that direction.'\n\n");
    }

    else if (i == 3)
    {
        printf("\n\n\t\t\t\t\t3) Newton's Third Law of Motion : \n\n\n\t\t\t\t'Every action has it's equal and opposite reaction.'\n\n");
    }

    else if (i == 4)
    {
        printf("\n\n\t\t\t\t\t4) Newton's Law Of Gravitation : \n\n\n'Any two particle in the universe attracts each other with a force varying directly proportional to the product of their masses and inversely as the square of the distance between them.This force acts along the line joining the two particles or objects.'\n\n");
    }

    else if (i == 5)
    {
        printf("\n\n\t\t\t\t\t5) Faraday's First Law Of Electro-Magnetic Induction : \n\n\n'Whenever there is a change of number of magnetic lines of induction or magnetic flux in a closed loop,then an electromotive force is induced in that loop.'\n\n");
    }

    else if (i == 6)
    {
        printf("\n\n\t\t\t\t\t6) Faraday's Second Law Of Electro-Magnetic Induction : \n\n\n'The value of the induced electromotive force in the coil is directly proportional to the rate of change of number of magnetic field lines or magnetic flux.'\n\n");
    }

    else if (i == 7)
    {
        printf("\n\n\t\t\t\t\ta) First Law Of Relativity : \n\n\n'The first law of special relativity states that the laws of physics may be expressed in equations having the same from in all frames of reference moving at constant velocity with respect to one another.'\n");
        printf("\n\n\t\t\t\t\tb) Second Law Of Relativity : \n\n\n'In vacuum the speed of light,measured in any internal reference frame,always has the same value to all observers. This speed does not depend on the direction of transmission of light and relative velocity of the sourse and observer.'\n\n");
    }

    else
        printf("\n\n\n\t\t\t\t\tWrong input! Try Again!\n\n");
}
int calcuAgain()
{
    int m;
    printf("\n\n\t\t\t\t\t\t   1. Calculate Again\n\n\t\t\t\t\t\t   2. Calculator Menu\n\n\t\t\t\t\t\t   0. Exit\n");
    printf("\n\n\t\t\t\t\t  Choose again to continue : ");
    scanf("%d", &m);
    if (m == 1)
    {
        return 1;
    }
    else if (m == 2)
    {
        return 2;
    }
    else if (m == 0)
    {
        others();
    }
    else
    {
        printf("\n");
        calcuAgain();
    }
}

void calcu()
{
    long double num, result = 0;
    int inp, bb;
    printf("\n\t\t\t\t\t  WELCOME TO SCIENTIFIC CALCULATOR\n");
    printf("\n\n\n\t\t\t\t\t\tTell me what to do?\n");
    printf("\n\n\t\t\t\t\t\t   1. Factorial\n\n\t\t\t\t\t\t   2. Root\n\n\t\t\t\t\t\t   3. Cube Root\n\n\t\t\t\t\t\t   4. Power\n\n\t\t\t\t\t\t   5. Sum\n\n\t\t\t\t\t\t   6. Sub\n\n\t\t\t\t\t\t   7. Multiply\n\n\t\t\t\t\t\t   8. Trigonometric Ratio\n\n\t\t\t\t\t\t   0.Exit\n");
    do
    {
        printf("\n\n\n\t\t\t\t\t\tChoose option : ");
        scanf("%d", &inp);
        if (inp == 0)
        {
            others();
        }
        else if (inp < 1 || inp > 8)
        {
            printf("\n\n\t\t\t\t\t\t    Try again!");
        }
    } while (inp < 1 || inp > 8);

    switch (inp)
    {
    case 1:
    calcuCase1:
        factorial();
        bb = 0;
        bb = calcuAgain();
        if (bb == 1)
        {
            goto calcuCase1;
        }
        else if (bb == 2)
        {
            calcu();
        }
        break;
    case 2:
    calcuCase2:
        root();
        bb = 0;
        bb = calcuAgain();
        if (bb == 1)
        {
            goto calcuCase2;
        }
        else if (bb == 2)
        {
            calcu();
        }
        break;
    case 3:
    calcuCase3:
        cube_root();
        bb = 0;
        bb = calcuAgain();
        if (bb == 1)
        {
            goto calcuCase3;
        }
        else if (bb == 2)
        {
            calcu();
        }
        break;
    case 4:
    calcuCase4:
        power();
        bb = 0;
        bb = calcuAgain();
        if (bb == 1)
        {
            goto calcuCase4;
        }
        else if (bb == 2)
        {
            calcu();
        }
        break;
    case 5:
    calcuCase5:
        sum();
        bb = 0;
        bb = calcuAgain();
        if (bb == 1)
        {
            goto calcuCase5;
        }
        else if (bb == 2)
        {
            calcu();
        }
        break;
    case 6:
    calcuCase6:
        sub();
        bb = 0;
        bb = calcuAgain();
        if (bb == 1)
        {
            goto calcuCase6;
        }
        else if (bb == 2)
        {
            calcu();
        }
        break;
    case 7:
    calcuCase7:
        multiply();
        bb = 0;
        bb = calcuAgain();
        if (bb == 1)
        {
            goto calcuCase7;
        }
        else if (bb == 2)
        {
            calcu();
        }
        break;
    case 8:
    calcuCase8:
        trigono();
        bb = 0;
        bb = calcuAgain();
        if (bb == 1)
        {
            goto calcuCase8;
        }
        else if (bb == 2)
        {
            calcu();
        }
        break;
    }
}

void factorial()
{
    int num, fNum;
    unsigned long long int result = 1;
    printf("\n\n\n\t\t\t\t\t\t  ***FACTORIAL***\n\n\n\n\t\t\t\t\t\tEnter a number: ");
    scanf("%d", &num);
    if (num < 0)
    {
        fNum = -(num);
    }
    else
    {
        fNum = num;
    }
    for (int i = fNum; i > 0; i--)
    {
        result *= i;
    }
    if (num >= 0)
    {
        printf("\n\n\t\t\t\t\t\tThe factorial is : %llu\n", result);
    }
    else
    {
        printf("\n\n\t\t\t\t\t\tThe factorial is : -%llu\n", result);
    }
}

void root()
{
    long long int num;
    long double result;
    printf("\n\n\n\t\t\t\t\t\t***ROOT***\n");
    printf("\n\n\n\t\t\t\t\t\tEnter a positive number: ");
    do
    {
        scanf("%lld", &num);
        if (num < 0)
        {
            printf("\n\n\t\t\t\t\t\t    Try Again!");
        }
    } while (num < 0);
    result = sqrt(num);
    printf("\n\n\t\t\t\t\t\tThe result is : %.2Lf\n", result);
}

void cube_root()
{
    long long int num, f = 0;
    long double result;
    printf("\n\n\n\t\t\t\t\t\t***CUBE ROOT***\n");
    printf("\n\n\n\t\t\t\t\t\tEnter a number: ");
    scanf("%lld", &num);
    if (num < 0)
    {
        num = -(num);
        f = 1;
    }
    result = pow(num, 0.3333333333);
    if (f)
    {
        printf("\n\n\t\t\t\t\t\tThe result is : -%.2Lf\n", result);
    }
    else
    {
        printf("\n\n\t\t\t\t\t\tThe result is : %.2Lf\n", result);
    }
}

void power()
{
    long double num, exp, result;
    printf("\n\n\n\t\t\t\t\t\t***POWER***\n");
    printf("\n\n\n\t\t\t\t\t\tEnter a number: ");
    scanf("%Lf", &num);
    printf("\n\n\t\t\t\t\t\tEnter exponent: ");
    scanf("%Lf", &exp);
    result = pow(num, exp);
    if (num < 0 && (exp < 0))
    {
        printf("\n\n\t\t\t\t\t\tThe result is : -%.9Lf\n", result);
    }
    else if (num > 0 && exp < 0)
    {
        printf("\n\n\t\t\t\t\t\tThe result is : %.9Lf\n", result);
    }
    else
    {
        printf("\n\n\t\t\t\t\t\tThe result is : %.2Lf\n", result);
    }
}

void sum()
{
    long double num, result = 0, arr[1000] = {0};
    int i = 0;
    printf("\n\n\n\t\t\t\t\t\t***SUMMATION***\n\n\n\t\t\t\t\t\tKeep entering number for result.\n\n\n\t\t\t\t***NOTE: If you want to see the result, ENTER 0 (ZERO).***\n\n\n");
    do
    {
        scanf("%Lf", &num);
        arr[i++] = num;
        if (num != 0)
        {
            result += num;
        }
    } while (num != 0);
    printf("\n");
    for (int k = 0; k < i; k++)
    {
        if ((k == 0) || (arr[k] < 0))
        {
            printf("%.2Lf", arr[k]);
        }
        else if (arr[k] > 0)
        {
            printf("+%.2Lf", arr[k]);
        }
    }
    printf(" = %.2Lf\n", result);
}

void multiply()
{
    long double num, result = 1, arr[1000] = {0};
    int i = 0;
    printf("\n\n\n\t\t\t\t\t\t***MULTIPLY***\n");
    printf("\n\n\n\t\t\t\t\t\tKeep entering number for result.\n\n\n\t\t\t\t***NOTE: If you want to see the result, ENTER 0 (ZERO)***\n\n\n");
    do
    {
        scanf("%Lf", &num);
        if (num != 0)
        {
            arr[i++] = num;
            result *= num;
        }
        else if (arr[0] == 0)
        {
            result = 0;
        }
    } while (num != 0);
    printf("\n");
    for (int k = 0; k < i; k++)
    {
        if (k == (i - 1))
        {
            printf("%.2Lf", arr[k]);
        }
        else
        {
            printf("%.2Lf*", arr[k]);
        }
    }
    printf(" = %.2Lf\n", result);
}

void sub()
{
    long double num, result = 0, arr[1000] = {0}, he;
    int i = 0;
    printf("\n\n\n\t\t\t\t\t\t***SUBTRACT***\n\n\n\t\t\t\t\t\tSubtract from which number: ");
    scanf("%Lf", &he);
    result = he;
    printf("\n\n\t\t\t\t\t\tKeep entering number for result.\n\n\n\t\t\t\t***NOTE: If you want to see the result, ENTER 0 (ZERO)***\n\n\n");
    do
    {
        scanf("%Lf", &num);
        arr[i++] = num;
        if (num != 0)
        {
            result -= num;
        }
    } while (num != 0);
    printf("\n%.2Lf-(", he);
    for (int k = 0; k < i; k++)
    {
        if ((k == 0) || (arr[k] < 0))
        {
            printf("%.2Lf", arr[k]);
        }
        else if (arr[k] > 0)
        {
            printf("+%.2Lf", arr[k]);
        }
    }
    printf(") = %.2Lf\n", result);
}
#define PI 3.14159265

void trigono()
{
    int nn;
    double val, angle;
    char ch[10], si[] = "sin", co[] = "cos", ta[] = "tan", se[] = "sec", cott[] = "cot", cose[] = "cosec";
    val = PI / 180;
    printf("\n\n\n\t\t\t\t[FORMAT: Trigonometric_ratio_name angle. Example: sin 30]\n\n\n");
    printf("\t\t\t\t\t\tEnter ratio with angle: ");
    scanf("%s", ch);
    scanf("%lf", &angle);
    if (strcmp(ch, si) == 0)
    {
        printf("\n\n\t\t\t\t\t\t%s(%.2lf) = %.5lf\n\n", ch, angle, sin(angle * val));
    }
    else if (strcmp(ch, co) == 0)
    {
        printf("\n\n\t\t\t\t\t\t%s(%.2lf) = %.5lf\n\n", ch, angle, cos(angle * val));
    }
    else if (strcmp(ch, ta) == 0)
    {
        if (angle != 90)
        {
            printf("\n\n\t\t\t\t\t\t%s(%.2lf) = %.5lf\n", ch, angle, tan(angle * val));
        }
        else
        {
            printf("\n\n\t\t\t\t\t\t%s(%.2lf) = undefined\n", ch, angle);
        }
    }
    else if (strcmp(ch, cose) == 0)
    {
        if (angle != 0)
        {
            printf("\n\n\t\t\t\t\t\t%s(%.2lf) = %.5lf\n", ch, angle, (1 / (sin(angle * val))));
        }
        else
        {
            printf("\n\n\t\t\t\t\t\t%s(%.2lf) = undefined\n", ch, angle);
        }
    }
    else if (strcmp(ch, cott) == 0)
    {
        if (angle != 0)
        {
            printf("\n\n\t\t\t\t\t\t%s(%.2lf) = %.5lf\n", ch, angle, (1 / (tan(angle * val))));
        }
        else
        {
            printf("\n\n\t\t\t\t\t\t%s(%.2lf) = undefined\n", ch, angle);
        }
    }
    else if (strcmp(ch, se) == 0)
    {
        if (angle != 90)
        {
            printf("\n\n\t\t\t\t\t\t%s(%.2lf) = %.5lf\n", ch, angle, (1 / (cos(angle * val))));
        }
        else
        {
            printf("\n\n\t\t\t\t\t\t%s(%.2lf) = undefined\n", ch, angle);
        }
    }
    else
    {
        printf("\n\n\t\t\t\t\t\tWrong Format!\n\n\t\t\t\t\t\t1. Again\n\n\t\t\t\t\t\t2. Exit\n");
        do
        {
            scanf("%d", &nn);
        } while (nn < 1 || nn > 2);
        if (nn == 1)
        {
            trigono();
        }
        else
        {
            calcu();
        }
    }
}

void main_converter(int c)
{
    int cInput;
    if (c == 0)
    {
        printf("\n\t\t\t\t\t\tWelcome to Converter\n\n");
    }
    else
    {
        printf("\n\t\t\t\t\t\tWelcome Again to Converter\n\n");
    }
    printf("\n\t\t\t\t\t\t1. Length Converter\n\n\t\t\t\t\t\t2. Temperature Converter\n\n\t\t\t\t\t\t3. Mass Converter\n\n\t\t\t\t\t\t4. Area Converter\n\n\t\t\t\t\t\t5. Digital Storage Converter\n\n\t\t\t\t\t\t6. Frequency Converter\n\n\t\t\t\t\t\t0. Exit\n\n\n");
    do
    {
        printf("\n\t\t\t\t\t\tChoose input: ");
        scanf("%d", &cInput);
        system("cls");
        if (cInput == 0)
        {
            others();
        }
        else if (cInput < 1 || cInput > 6)
        {
            printf("\n\n\n\t\t\t\t\t\tTry Again!\n\n\n");
        }
        else
        {
            main_operation(cInput);
        }
    } while (cInput < 1 || cInput > 6);
}

int cAgain()
{
    int n;
    printf("\n\n\t\t\t\t\t\t1. Convert Again\n\n\t\t\t\t\t\t2. Converter Menu\n\n\t\t\t\t\t\t0. Exit\n");
    printf("\n\n\t\t\t\t\t\tChoose option: ");
    scanf("%d", &n);
    if (n == 1)
    {
        return 1;
    }
    else if (n == 2)
    {
        return 2;
    }
    else if (n == 0)
    {
        others();
    }
    else
    {
        printf("\n");
        cAgain();
    }
}

void main_operation(int cInput)
{
    int aa;
    switch (cInput)
    {
    case 1:
    case1:
        length_converter();
        aa = 0;
        aa = cAgain();
        if (aa == 2)
        {
            main_converter(1);
        }
        else if (aa == 1)
        {
            goto case1;
        }
        break;
    case 2:
    case2:
        temp_converter();
        aa = 0;
        aa = cAgain();
        if (aa == 2)
        {
            main_converter(1);
        }
        else if (aa == 1)
        {
            goto case2;
        }
        break;
    case 3:
    case3:
        mass_converter();
        aa = 0;
        aa = cAgain();
        if (aa == 2)
        {
            main_converter(1);
        }
        else if (aa == 1)
        {
            goto case3;
        }
        break;
    case 4:
    case4:
        area_converter();
        aa = 0;
        aa = cAgain();
        if (aa == 2)
        {
            main_converter(1);
        }
        else if (aa == 1)
        {
            goto case4;
        }
        break;
    case 5:
    case5:
        digital_storage();
        aa = 0;
        aa = cAgain();
        if (aa == 2)
        {
            main_converter(1);
        }
        else if (aa == 1)
        {
            goto case5;
        }
        break;
    case 6:
    case6:
        frequency_converter();
        aa = 0;
        aa = cAgain();
        if (aa == 2)
        {
            main_converter(1);
        }
        else if (aa == 1)
        {
            goto case6;
        }
        break;
    }
}

void length_converter()
{
    long double result, num;
    int first_in, second_in;
    printf("\n\n\t\t\t\t\t\t***LENGTH CONVERTER***");
    printf("\n\n\n\t\t\t\t\t\tEnter length: ");
    do
    {
        scanf("%Lf", &num);
        if (num <= 0)
        {
            printf("\n\n\t\t\t\t\t\tTry with a non-zero positive number.");
        }
    } while (num <= 0);
    printf("\n\n\t\t\t\t\t\tGiven format: \n");
    printf("\n\n\t\t\t\t1. Kilometre\n\n\t\t\t\t2. Meter \n\n\t\t\t\t3. Centimeter\n\n\t\t\t\t4. Millimetre\n\n\t\t\t\t5. Micrometre\n\n\t\t\t\t6. Nanometre\n\n\t\t\t\t7. Mile\n\n\t\t\t\t8. Yard\n\n\t\t\t\t9. Foot\n\n\t\t\t\t10. Inch\n\n\t\t\t\t11. Nautical Mile\n");
    do
    {
        printf("\n\n\t\t\t\t\t\tChoose format: ");
        scanf("%d", &first_in);
        if (first_in < 1 || first_in > 11)
        {
            printf("\nTry Again: ");
        }

    } while (first_in < 1 || first_in > 11);

    printf("\n\n\t\t\t\t\t\tConvert To: \n");
    printf("\n\n\t\t\t\t1. Kilometre\n\n\t\t\t\t2. Meter\n\n\t\t\t\t3. Centimeter\n\n\t\t\t\t4. Millimetre\n\n\t\t\t\t5.Micrometre\n\n\t\t\t\t6. Nanometre\n\n\t\t\t\t7. Mile\n\n\t\t\t\t8. Yard\n\n\t\t\t\t9. Foot\n\n\t\t\t\t10. Inch\n\n\t\t\t\t11. Nautical Mile\n\n");
    do
    {
        printf("\n\n\t\t\t\t\t\tChoose option: ");
        scanf("%d", &second_in);
        if (second_in < 1 || second_in > 11)
        {
            printf("\n\n\n\t\t\t\t\t\tTry Again!");
        }

    } while (second_in < 1 || second_in > 11);
    result = l_converter(first_in, second_in, num);
    if (result > 0)
    {
        printf("\n\n\t\t\t\t\t\tThe approximate result is: %.10Lf ", result);
        switch (second_in)
        {
        case 1:
            printf("k.m\n");
            break;
        case 2:
            printf("m\n");
            break;
        case 3:
            printf("c.m\n");
            break;
        case 4:
            printf("m.m\n");
            break;
        case 5:
            printf("micro.m\n");
            break;
        case 6:
            printf("n.m\n");
            break;
        case 7:
            printf("mile\n");
            break;
        case 8:
            printf("yard\n");
            break;
        case 9:
            printf("foot\n");
            break;
        case 10:
            printf("inch\n");
            break;
        case 11:
            printf("na.m\n");
            break;
        }
    }
    else
    {
        printf("\n\n\n\t\t\t\t\t\tThe result is too much small.\n");
    }
}

void temp_converter()
{
    long double temp, t_result;
    int f_in, s_in;
    printf("\n\n\t\t\t\t\t\t***TEMPERATURE CONVERTER***\n");
    printf("\n\n\t\t\t\t\t\tEnter temperature: ");
    scanf("%Lf", &temp);
    printf("\n\n\t\t\t\t\t\tGiven format:\n");
    printf("\n\t\t\t\t1. �C\n\n\t\t\t\t2. �F\n\n\t\t\t\t3. �K\n");
    do
    {
        printf("\n\n\t\t\t\t\t\tChoose format: ");
        scanf("%d", &f_in);
        if (f_in < 1 || f_in > 3)
        {
            printf("\n\n\n\t\t\t\t\t\tTry again!");
        }
    } while (f_in < 1 || f_in > 3);
    printf("\n\n\t\t\t\t\t\tConvert To: ");
    printf("\n\n\t\t\t\t1. �C\n\n\t\t\t\t2. �F\n\n\t\t\t\t3. �K\n\n\n");
    do
    {
        printf("\n\n\t\t\t\t\t\tChoose option: ");
        scanf("%d", &s_in);
        if (s_in < 1 || s_in > 3)
        {
            printf("\n\n\n\t\t\t\t\t\tTry again!");
        }
    } while (s_in < 1 || s_in > 3);
    t_result = t_converter(f_in, s_in, temp);
    printf("\n\n\t\t\t\t\t\tThe converted temperature is: %.4Lf ", t_result);
    switch (s_in)
    {
    case 1:
        printf("�C\n");
        break;
    case 2:
        printf("�F\n");
        break;
    case 3:
        printf("�K\n");
        break;
    }
}

float l_converter(int first_in, int second_in, long double num)
{
    long double result;
    switch (first_in)
    {
    case 1:
        switch (second_in)
        {
        case 2:
            result = num * 1000;
            return result;
            break;
        case 3:
            result = num * 100000;
            return result;
            break;
        case 7:
            result = num / 1.609;
            return result;
            break;
        case 8:
            result = num * 1093.61;
            return result;
            break;
        case 9:
            result = num * 3280.84;
            return result;
            break;
        case 10:
            result = num * 39370.1;
            return result;
            break;
        case 11:
            result = num / 1.852;
            return result;
            break;
        case 4:
            result = num * (1e+6);
            return result;
            break;
        case 5:
            result = num * (1e+9);
            return result;
            break;
        case 6:
            result = num * (1e+12);
            return result;
            break;
        default:
            return num;
        }
        break;
    case 2:
        switch (second_in)
        {
        case 1:
            result = num / 1000;
            return result;
            break;
        case 3:
            result = num * 100;
            return result;
            break;
        case 4:
            result = num * 1000;
            return result;
            break;
        case 5:
            result = num * (1e+6);
            return result;
            break;
        case 6:
            result = num * (1e+9);
            return result;
            break;
        case 7:
            result = num / 1609;
            return result;
            break;
        case 8:
            result = num * 1.09361;
            return result;
            break;
        case 9:
            result = num * 3.28084;
            return result;
            break;
        case 10:
            result = num * 39.37;
            return result;
            break;
        case 11:
            result = num / 1852;
            return result;
            break;
        default:
            return num;
        }
        break;
    case 3:
        switch (second_in)
        {
        case 1:
            result = num / 100000;
            return result;
            break;
        case 2:
            result = num / 100;
            return result;
            break;
        case 4:
            result = num * 10;
            return result;
            break;
        case 5:
            result = num * 10000;
            return result;
            break;
        case 6:
            result = num * (1e+7);
            return result;
            break;
        case 7:
            result = num / 160934;
            return result;
            break;
        case 8:
            result = num / 91.44;
            return result;
            break;
        case 9:
            result = num / 30.48;
            return result;
            break;
        case 10:
            result = num / 2.54;
            return result;
            break;
        case 11:
            result = num / 185200;
            return result;
            break;
        default:
            return num;
        }
        break;
    case 4:
        switch (second_in)
        {
        case 1:
            result = num / (1e+6);
            return result;
            break;
        case 2:
            result = num / 1000;
            return result;
            break;
        case 3:
            result = num / 10;
            return result;
            break;
        case 5:
            result = num * 1000;
            return result;
            break;
        case 6:
            result = num * (1e+6);
            return result;
            break;
        case 7:
            result = num / (1.609e+6);
            return result;
            break;
        case 11:
            result = num / (1.852e+6);
            return result;
            break;
        case 8:
            result = num / 914;
            return result;
            break;
        case 9:
            result = num / 305;
            return result;
            break;
        case 10:
            result = num / 25.4;
            return result;
            break;
        default:
            return num;
        }
        break;
    case 5:
        switch (second_in)
        {
        case 1:
            result = num / (1e+9);
            return result;
            break;
        case 2:
            result = num / (1e+6);
            return result;
            break;
        case 7:
            result = num / (1.609e+9);
            return result;
            break;
        case 11:
            result = num / (1.852e+9);
            return result;
            break;
        case 3:
            result = num / 10000;
            return result;
            break;
        case 4:
            result = num / 1000;
            return result;
            break;
        case 6:
            result = num * 1000;
            return result;
            break;
        case 8:
            result = num / 914400;
            return result;
            break;
        case 9:
            result = num / 304800;
            return result;
            break;
        case 10:
            result = num / 25400;
            return result;
            break;
        default:
            return num;
        }
        break;
    case 6:
        switch (second_in)
        {
        case 1:
            result = num / (1e+12);
            return result;
            break;
        case 2:
            result = num / (1e+9);
            return result;
            break;
        case 3:
            result = num / (1e+7);
            return result;
            break;
        case 4:
            result = num / (1e+6);
            return result;
            break;
        case 5:
            result = num / 1000;
            return result;
            break;
        case 7:
            result = num / (1.609e+12);
            return result;
            break;
        case 8:
            result = num / (9.144e+8);
            return result;
            break;
        case 9:
            result = num / (3.048e+8);
            return result;
            break;
        case 10:
            result = num / (2.54e+7);
            return result;
            break;
        case 11:
            result = num / (1.852e+12);
            return result;
            break;
        default:
            return num;
        }
        break;
    case 7:
        switch (second_in)
        {
        case 1:
            result = num * 1.609;
            return result;
            break;
        case 2:
            result = num * 1609;
            return result;
            break;
        case 3:
            result = num * 160934;
            return result;
            break;
        case 4:
            result = num * (1.609e+6);
            return result;
            break;
        case 5:
            result = num * (1.609e+9);
            return result;
            break;
        case 6:
            result = num * (1.609e+12);
            return result;
            break;
        case 8:
            result = num * 1760;
            return result;
            break;
        case 9:
            result = num * 5280;
            return result;
            break;
        case 10:
            result = num * 63360;
            return result;
            break;
        case 11:
            result = num / 1.151;
            return result;
            break;
        default:
            return num;
        }
        break;
    case 8:
        switch (second_in)
        {
        case 1:
            result = num / 1094;
            return result;
            break;
        case 2:
            result = num / 1.094;
            return result;
            break;
        case 3:
            result = num * 91.44;
            return result;
            break;
        case 4:
            result = num * 914;
            return result;
            break;
        case 5:
            result = num * 914400;
            return result;
            break;
        case 6:
            result = num * (9.144e+8);
            return result;
            break;
        case 7:
            result = num / 1760;
            return result;
            break;
        case 9:
            result = num * 3;
            return result;
            break;
        case 10:
            result = num * 36;
            return result;
            break;
        case 11:
            result = num / 2025;
            return result;
            break;
        default:
            return num;
        }
        break;
    case 9:
        switch (second_in)
        {
        case 1:
            result = num / 3281;
            return result;
            break;
        case 2:
            result = num / 3.281;
            return result;
            break;
        case 3:
            result = num * 30.48;
            return result;
            break;
        case 4:
            result = num * 305;
            return result;
            break;
        case 5:
            result = num * 304800;
            return result;
            break;
        case 6:
            result = num * (3.048e+8);
            return result;
            break;
        case 7:
            result = num / 5280;
            return result;
            break;
        case 8:
            result = num / 3;
            return result;
            break;
        case 10:
            result = num * 12;
            return result;
            break;
        case 11:
            result = num / 6076;
            return result;
            break;
        default:
            return num;
        }
        break;
    case 10:
        switch (second_in)
        {
        case 1:
            result = num / 39370;
            return result;
            break;
        case 2:
            result = num / 39.37;
            return result;
            break;
        case 3:
            result = num * 2.54;
            return result;
            break;
        case 4:
            result = num * 25.4;
            return result;
            break;
        case 5:
            result = num * 25400;
            return result;
            break;
        case 6:
            result = num * (2.54e+7);
            return result;
            break;
        case 7:
            result = num / 63360;
            return result;
            break;
        case 8:
            result = num / 36;
            return result;
            break;
        case 9:
            result = num / 12;
            return result;
            break;
        case 11:
            result = num / 72913;
            return result;
            break;
        default:
            return num;
        }
        break;
    case 11:
        switch (second_in)
        {
        case 1:
            result = num * 1.852;
            return result;
            break;
        case 2:
            result = num * 1852;
            return result;
            break;
        case 3:
            result = num * 185200;
            return result;
            break;
        case 4:
            result = num * (1.852e+6);
            return result;
            break;
        case 5:
            result = num * (1.852e+9);
            return result;
            break;
        case 6:
            result = num * (1.852e+12);
            return result;
            break;
        case 7:
            result = num * 1.151;
            return result;
            break;
        case 8:
            result = num * 2025;
            return result;
            break;
        case 9:
            result = num * 6076;
            return result;
            break;
        case 10:
            result = num * 72913;
            return result;
            break;
        default:
            return num;
        }
        break;
    default:
        return num;
    }
}

long double t_converter(int f_in, int s_in, long double temp)
{
    long double result;
    switch (f_in)
    {
    case 1:
        switch (s_in)
        {
        case 2:
            result = (temp * 9 / 5) + 32;
            return result;
            break;
        case 3:
            result = (temp + 273.15);
            return result;
            break;
        default:
            return temp;
            break;
        }
        break;
    case 2:
        switch (s_in)
        {
        case 1:
            result = ((temp - 32) * 5 / 9);
            return result;
            break;
        case 3:
            result = ((temp - 32) * 5 / 9 + 273.15);
            return result;
            break;
        default:
            return temp;
            break;
        }
        break;
    case 3:
        switch (s_in)
        {
        case 1:
            result = (temp - 273.15);
            return result;
            break;
        case 2:
            result = ((temp - 273.15) * 9 / 5 + 32);
            return result;
            break;
        default:
            return temp;
            break;
        }
        break;
    default:
        return temp;
    }
}

void mass_converter()
{
    long double result, num;
    int first_in, second_in;
    printf("\n\n\t\t\t\t\t\t***MASS CONVERTER***");
    printf("\n\n\t\t\t\t\t\tEnter mass: ");
    do
    {
        scanf("%Lf", &num);
        if (num <= 0)
        {
            printf("\n\n\t\t\t\t\t\tTry again with a non-zero positive number.");
        }
    } while (num <= 0);
    printf("\n\n\t\t\t\t\t\tGiven format: ");
    printf("\n\n\t\t\t\t1. Tonne\n\n\t\t\t\t2. Kilogram\n\n\t\t\t\t3. Gram\n\n\t\t\t\t4. Milligram\n\n\t\t\t\t5. Microgram\n\n\t\t\t\t6. Imperial Ton\n\n\t\t\t\t7. US Ton\n\n\t\t\t\t8. Stone\n\n\t\t\t\t9. Pound\n\n\t\t\t\t10. Ounce\n\n\n");
    do
    {
        printf("\n\n\t\t\t\t\t\tChoose format: ");
        scanf("%d", &first_in);
        if (first_in < 1 || first_in > 10)
        {
            printf("\n\n\n\t\t\t\t\t\tTry again!");
        }

    } while (first_in < 1 || first_in > 10);

    printf("\n\n\t\t\t\t\t\tConvert To: \n");
    printf("\n\n\t\t\t\t1. Tonne\n\n\t\t\t\t2. Kilogram\n\n\t\t\t\t3. Gram\n\n\t\t\t\t4. Milligram\n\n\t\t\t\t5. Microgram\n\n\t\t\t\t6. Imperial Ton\n\n\t\t\t\t7. US Ton\n\n\t\t\t\t8. Stone\n\n\t\t\t\t9. Pound\n\n\t\t\t\t10. Ounce\n\n\n");
    do
    {
        printf("\n\n\t\t\t\t\t\tChoose option: ");
        scanf("%d", &second_in);
        if (second_in < 1 || second_in > 10)
        {
            printf("\n\n\n\t\t\t\t\t\tTry Again!");
        }

    } while (second_in < 1 || second_in > 10);
    result = m_converter(first_in, second_in, num);
    if (result > 0)
    {
        printf("\n\n\t\t\t\t\t\tThe approximate result is: %.8Lf ", result);
        switch (second_in)
        {
        case 1:
            printf("t\n");
            break;
        case 2:
            printf("kg\n");
            break;
        case 3:
            printf("g\n");
            break;
        case 4:
            printf("mg\n");
            break;
        case 5:
            printf("micro.g\n");
            break;
        case 6:
            printf("it\n");
            break;
        case 7:
            printf("US t\n");
            break;
        case 8:
            printf("stone\n");
            break;
        case 9:
            printf("lb\n");
            break;
        case 10:
            printf("oz\n");
            break;
        }
    }
    else
    {
        printf("\n\n\n\t\t\t\t\tThe result is too much small.\n");
    }
}

void digital_storage()
{
    long double result, num;
    int first_in, second_in;
    printf("\n\n\t\t\t\t\t\t***DIGITAL STORAGE CONVERTER***");
    printf("\n\n\t\t\t\t\t\tEnter storage size: ");
    do
    {
        scanf("%Lf", &num);
        if (num <= 0)
        {
            printf("\n\n\n\t\t\t\t\t\tTry again with a positive number: ");
        }
    } while (num <= 0);
    printf("\n\n\t\t\t\t\t\tGiven format:\n");
    printf("\n\n\t\t\t\t1. Bit\n\n\t\t\t\t2. Kilobit\n\n\t\t\t\t3. Megabit\n\n\t\t\t\t4. Gigabit\n\n\t\t\t\t5. Terabit\n\n\t\t\t\t6. Petabit\n\n\t\t\t\t7. Byte\n\n\t\t\t\t8. Kilobyte\n\n\t\t\t\t9. Megabyte\n\n\t\t\t\t10.Gigabyte \n\n\t\t\t\t11. Terabyte\n\n\t\t\t\t12. Petabyte\n\n");
    do
    {
        printf("\n\n\t\t\t\t\t\tChoose option: ");
        scanf("%d", &first_in);
        if (first_in < 1 || first_in > 12)
        {
            printf("\n\n\n\t\t\t\t\t\tTry Again!");
        }

    } while (first_in < 1 || first_in > 12);

    printf("\n\n\t\t\t\t\t\tConvert To: \n");
    printf("\n\n\t\t\t\t1.Bit\n\n\t\t\t\t2. Kilobit\n\n\t\t\t\t3. Megabit\n\n\t\t\t\t4. Gigabit\n\n\t\t\t\t5. Terabit\n\n\t\t\t\t6. Petabit\n\n\t\t\t\t7. Byte\n\n\t\t\t\t8. Kilobyte\n\n\t\t\t\t9. Megabyte\n\n\t\t\t\t10. Gigabyte\n\n\t\t\t\t11. Terabyte\n\n\t\t\t\t12. Petabyte\n\n");
    do
    {
        printf("\n\n\t\t\t\t\t\tChoose option: ");
        scanf("%d", &second_in);
        if (second_in < 1 || second_in > 12)
        {
            printf("\n\n\n\t\t\t\t\t\tTry Again!");
        }

    } while (second_in < 1 || second_in > 12);
    result = d_storage(first_in, second_in, num);
    if (result > 0)
    {
        printf("\n\n\t\t\t\t\t\tThe approximate result is: %.6Lf ", result);
        switch (second_in)
        {
        case 1:
            printf("Bit\n");
            break;
        case 2:
            printf("KBit\n");
            break;
        case 3:
            printf("MBit\n");
            break;
        case 4:
            printf("GBit\n");
            break;
        case 5:
            printf("TBit\n");
            break;
        case 6:
            printf("PBit\n");
            break;
        case 7:
            printf("B\n");
            break;
        case 8:
            printf("KB\n");
            break;
        case 9:
            printf("MB\n");
            break;
        case 10:
            printf("GB\n");
            break;
        case 11:
            printf("TB\n");
            break;
        case 12:
            printf("PB\n");
            break;
        }
    }
    else
    {
        printf("\n\n\n\t\t\t\t\t\tThe result is too much small.\n");
    }
}

void area_converter()
{
    long double num;
    long double result;
    int f_in, s_in;
    printf("\n\n\t\t\t\t\t\t***AREA CONVERTER***\n");
    printf("\n\n\t\t\t\t\t\tEnter area: ");
    do
    {
        scanf("%Lf", &num);
        if (num <= 0)
        {
            printf("\n\n\n\t\t\t\t\t\tTry with a non-zero positive number!");
        }
    } while (num <= 0);
    printf("\n\n\t\t\t\t\t\tGiven format: ");
    printf("\n\n\n\t\t\t\t1. Square kilometer\n\n\t\t\t\t2. Square meter\n\n\t\t\t\t3. Square mile\n\n\t\t\t\t4. Square yard\n\n\t\t\t\t5. Square foot\n\n\t\t\t\t6. Square inch\n\n\t\t\t\t7. Hectare\n\n\t\t\t\t8. Acre\n\n");
    do
    {
        printf("\n\n\t\t\t\t\t\tChoose format: ");
        scanf("%d", &f_in);
        if (f_in < 1 || f_in > 8)
        {
            printf("\n\n\n\t\t\t\t\t\tTry again!");
        }
    } while (f_in < 1 || f_in > 8);
    printf("\n\n\t\t\t\t\t\tConvert To: ");
    printf("\n\n\n\t\t\t\t1. Square kilometer\n\n\t\t\t\t2. Square meter\n\n\t\t\t\t3. Square mile\n\n\t\t\t\t4. Square yard\n\n\t\t\t\t5. Square foot\n\n\t\t\t\t6. Square inch\n\n\t\t\t\t7. Hectare\n\n\t\t\t\t8. Acre\n\n");
    do
    {
        printf("\n\n\t\t\t\t\t\tChoose option: ");
        scanf("%d", &s_in);
        if (s_in < 1 || s_in > 8)
        {
            printf("\n\n\n\t\t\t\t\t\tTry again!");
        }
    } while (s_in < 1 || s_in > 8);
    result = a_converter(f_in, s_in, num);
    printf("\n\n\t\t\t\t\t\tThe converted area is: %.5Lf ", result);
    switch (s_in)
    {
    case 1:
        printf("km^2\n");
        break;
    case 2:
        printf("m^2\n");
        break;
    case 3:
        printf("mi^2\n");
        break;
    case 4:
        printf("yd^2\n");
        break;
    case 5:
        printf("ft^2\n");
        break;
    case 6:
        printf("in^2\n");
        break;
    case 7:
        printf("ha\n");
        break;
    case 8:
        printf("acres\n");
        break;
    default:
        printf("\n");
    }
}

void frequency_converter()
{
    printf("\n\n\t\t\t\t\t\t***FREQUENCY CONVERTER***\n");
    long double num, result = 0;
    int f_in, s_in;
    printf("\n\n\t\t\t\t\t\tEnter frequency: ");
    do
    {
        scanf("%Lf", &num);
        if (num < 0)
        {
            printf("\n\n\t\t\t\t\t\tEnter positive frequency: ");
        }
    } while (num < 0);
    printf("\n\n\t\t\t\t\t\tGiven format: \n\n\t\t\t\t1. Hertz\n\n\t\t\t\t2. Kilohertz\n\n\t\t\t\t3. Megahertz\n\n\t\t\t\t4. Gigahertz\n\n");
    do
    {
        printf("\n\n\t\t\t\t\t\tChoose format: ");
        scanf("%d", &f_in);
        if (f_in < 1 || f_in > 4)
        {
            printf("\n\n\n\t\t\t\t\t\tTry again!");
        }
    } while (f_in < 1 || f_in > 4);
    printf("\n\n\t\t\t\t\t\tConvert To: \n\n\t\t\t\t1. Hertz\n\n\t\t\t\t2. Kilohertz\n\n\t\t\t\t3. Megahertz\n\n\t\t\t\t4. Gigahertz\n\n");
    do
    {
        printf("\n\n\t\t\t\t\t\tChoose option: ");
        scanf("%d", &s_in);
        if (s_in < 1 || s_in > 4)
        {
            printf("\n\n\n\t\t\t\t\t\tTry again!");
        }
    } while (s_in < 1 || s_in > 4);
    result = f_converter(f_in, s_in, num);
    printf("\n\n\t\t\t\t\t\tThe approximate result is: %.8Lf ", result);
    switch (s_in)
    {
    case 1:
        printf("Hz\n");
        break;
    case 2:
        printf("KHz\n");
        break;
    case 3:
        printf("MHz\n");
        break;
    case 4:
        printf("GHz\n");
        break;
    }
}

float m_converter(int first_in, int second_in, long double num)
{
    long double result;
    switch (first_in)
    {
    case 1:
        switch (second_in)
        {
        case 2:
            result = num * 1000;
            return result;
            break;
        case 3:
            result = num * (1e+6);
            return result;
            break;
        case 4:
            result = num * (1e+9);
            return result;
            break;
        case 5:
            result = num * (1e+12);
            return result;
            break;
        case 6:
            result = num / 1.016;
            return result;
            break;
        case 7:
            result = num * 1.10231;
            return result;
            break;
        case 8:
            result = num * 157.473;
            return result;
            break;
        case 9:
            result = num * 2204.62;
            return result;
            break;
        case 10:
            result = num * 35274;
            return result;
            break;
        default:
            return num;
        }
        break;
    case 2:
        switch (second_in)
        {
        case 1:
            result = num / 1000;
            return result;
            break;
        case 3:
            result = num * 1000;
            return result;
            break;
        case 4:
            result = num * (1e+6);
            return result;
            break;
        case 5:
            result = num * (1e+9);
            return result;
            break;
        case 6:
            result = num / 1016;
            return result;
            break;
        case 7:
            result = num / 907;
            return result;
            break;
        case 8:
            result = num / 6.35;
            return result;
            break;
        case 9:
            result = num * 2.20462;
            return result;
            break;
        case 10:
            result = num * 35.274;
            return result;
            break;
        default:
            return num;
        }
        break;
    case 3:
        switch (second_in)
        {
        case 1:
            result = num / (1e+6);
            return result;
            break;
        case 2:
            result = num / 1000;
            return result;
            break;
        case 4:
            result = num * 1000;
            return result;
            break;
        case 5:
            result = num * (1e+6);
            return result;
            break;
        case 6:
            result = num / (1.016e+6);
            return result;
            break;
        case 7:
            result = num / 907185;
            return result;
            break;
        case 8:
            result = num / 6350;
            return result;
            break;
        case 9:
            result = num / 454;
            return result;
            break;
        case 10:
            result = num / 28.35;
            return result;
            break;
        default:
            return num;
        }
        break;
    case 4:
        switch (second_in)
        {
        case 1:
            result = num / (1e+9);
            return result;
            break;
        case 2:
            result = num / (1e+6);
            return result;
            break;
        case 3:
            result = num / 1000;
            return result;
            break;
        case 5:
            result = num * 1000;
            return result;
            break;
        case 6:
            result = num / (1.016e+9);
            return result;
            break;
        case 7:
            result = num / (9.072e+8);
            return result;
            break;
        case 8:
            result = num / (6.35e+6);
            return result;
            break;
        case 9:
            result = num / 453592;
            return result;
            break;
        case 10:
            result = num / 28350;
            return result;
            break;
        default:
            return num;
        }
        break;
    case 5:
        switch (second_in)
        {
        case 1:
            result = num / (1e+12);
            return result;
            break;
        case 2:
            result = num / (1e+9);
            return result;
            break;
        case 3:
            result = num / (1e+6);
            return result;
            break;
        case 4:
            result = num / 1000;
            return result;
            break;
        case 6:
            result = num / (1.016e+12);
            return result;
            break;
        case 7:
            result = num / (9.072e+11);
            return result;
            break;
        case 8:
            result = num / (6.35e+9);
            return result;
            break;
        case 9:
            result = num / (4.536e+8);
            return result;
            break;
        case 10:
            result = num / (2.835e+7);
            return result;
            break;
        default:
            return num;
        }
        break;
    case 6:
        switch (second_in)
        {
        case 1:
            result = num * 1.016;
            return result;
            break;
        case 2:
            result = num * 1016.05;
            return result;
            break;
        case 3:
            result = num * (1.016e+6);
            return result;
            break;
        case 4:
            result = num * (1.016e+9);
            return result;
            break;
        case 5:
            result = num * (1.016e+12);
            return result;
            break;
        case 7:
            result = num * 1.12;
            return result;
            break;
        case 8:
            result = num * 160;
            return result;
            break;
        case 9:
            result = num * 2240;
            return result;
            break;
        case 10:
            result = num * 35840;
            return result;
            break;
        default:
            return num;
        }
        break;
    case 7:
        switch (second_in)
        {
        case 1:
            result = num / 1.102;
            return result;
            break;
        case 2:
            result = num * 907.185;
            return result;
            break;
        case 3:
            result = num * 907185;
            return result;
            break;
        case 4:
            result = num * (9.072e+8);
            return result;
            break;
        case 5:
            result = num * (9.072e+11);
            return result;
            break;
        case 6:
            result = num / 1.12;
            return result;
            break;
        case 8:
            result = num * 142.857;
            return result;
            break;
        case 9:
            result = num * 2000;
            return result;
            break;
        case 10:
            result = num * 32000;
            return result;
            break;
        default:
            return num;
        }
        break;
    case 8:
        switch (second_in)
        {
        case 1:
            result = num / 157.47;
            return result;
            break;
        case 2:
            result = num * 6.35029;
            return result;
            break;
        case 3:
            result = num * 6350.29;
            return result;
            break;
        case 4:
            result = num / (6.35e+6);
            return result;
            break;
        case 5:
            result = num / (6.35e+9);
            return result;
            break;
        case 6:
            result = num / 160;
            return result;
            break;
        case 7:
            result = num / 142.8;
            return result;
            break;
        case 9:
            result = num * 14;
            return result;
            break;
        case 10:
            result = num * 224;
            return result;
            break;
        default:
            return num;
        }
        break;
    case 9:
        switch (second_in)
        {
        case 1:
            result = num / 2205;
            return result;
            break;
        case 2:
            result = num / 2.205;
            return result;
            break;
        case 3:
            result = num * 453.592;
            return result;
            break;
        case 4:
            result = num * 453592;
            return result;
            break;
        case 5:
            result = num * (4.536e+8);
            return result;
            break;
        case 6:
            result = num / 2240;
            return result;
            break;
        case 7:
            result = num / 2000;
            return result;
            break;
        case 8:
            result = num / 14;
            return result;
            break;
        case 10:
            result = num * 16;
            return result;
            break;
        default:
            return num;
        }
        break;
    case 10:
        switch (second_in)
        {
        case 1:
            result = num / 35274;
            return result;
            break;
        case 2:
            result = num / 35.274;
            return result;
            break;
        case 3:
            result = num * 28.3495;
            return result;
            break;
        case 4:
            result = num * 28349.5;
            return result;
            break;
        case 5:
            result = num * (2.835e+7);
            return result;
            break;
        case 6:
            result = num / 35840;
            return result;
            break;
        case 7:
            result = num / 32000;
            return result;
            break;
        case 8:
            result = num / 224;
            return result;
            break;
        case 9:
            result = num / 16;
            return result;
            break;
        default:
            return num;
        }
        break;
    default:
        return num;
    }
}

float d_storage(int first_in, int second_in, long double num)
{
    long double result;
    switch (first_in)
    {
    case 1:
        switch (second_in)
        {
        case 2:
            result = num / 1000;
            return result;
            break;
        case 3:
            result = num / (1e+6);
            return result;
            break;
        case 4:
            result = num / (1e+9);
            return result;
            break;
        case 5:
            result = num / (1e+12);
            return result;
            break;
        case 6:
            result = num / (1e+15);
            return result;
            break;
        case 7:
            result = num / 8;
            return result;
            break;
        case 8:
            result = num / 8000;
            return result;
            break;
        case 9:
            result = num / (8e+6);
            return result;
            break;
        case 10:
            result = num / (8e+9);
            return result;
            break;
        case 11:
            result = num / (8e+12);
            return result;
            break;
        case 12:
            result = num / (8e+15);
            return result;
            break;
        default:
            return num;
        }
        break;
    case 2:
        switch (second_in)
        {
        case 1:
            result = num * 1000;
            return result;
            break;
        case 3:
            result = num / 1000;
            return result;
            break;
        case 4:
            result = num / (1e+6);
            return result;
            break;
        case 5:
            result = num / (1e+9);
            return result;
            break;
        case 6:
            result = num / (1e+12);
            return result;
            break;
        case 7:
            result = num * 125;
            return result;
            break;
        case 8:
            result = num / 8;
            return result;
            break;
        case 9:
            result = num / 8000;
            return result;
            break;
        case 10:
            result = num / (8e+6);
            return result;
            break;
        case 11:
            result = num / (8e+9);
            return result;
            break;
        case 12:
            result = num / (8e+12);
            return result;
            break;
        default:
            return num;
        }
        break;
    case 3:
        switch (second_in)
        {
        case 1:
            result = num * (1e+6);
            return result;
            break;
        case 2:
            result = num * 1000;
            return result;
            break;
        case 4:
            result = num / 1000;
            return result;
            break;
        case 5:
            result = num / (1e+6);
            return result;
            break;
        case 6:
            result = num / (1e+9);
            return result;
            break;
        case 7:
            result = num * 125000;
            return result;
            break;
        case 8:
            result = num * 125;
            return result;
            break;
        case 9:
            result = num / 8;
            return result;
            break;
        case 10:
            result = num / 8000;
            return result;
            break;
        case 11:
            result = num / (8e+6);
            return result;
            break;
        case 12:
            result = num / (8e+9);
            return result;
            break;
        default:
            return num;
        }
        break;
    case 4:
        switch (second_in)
        {
        case 1:
            result = num * (1e+9);
            return result;
            break;
        case 2:
            result = num * (1e+6);
            return result;
            break;
        case 3:
            result = num * 1000;
            return result;
            break;
        case 5:
            result = num / 1000;
            return result;
            break;
        case 6:
            result = num / (1e+6);
            return result;
            break;
        case 7:
            result = num * (1.25e+8);
            return result;
            break;
        case 8:
            result = num * 125000;
            return result;
            break;
        case 9:
            result = num * 125;
            return result;
            break;
        case 10:
            result = num / 8;
            return result;
            break;
        case 11:
            result = num / 8000;
            return result;
            break;
        case 12:
            result = num / (8e+6);
            return result;
            break;
        default:
            return num;
        }
        break;
    case 5:
        switch (second_in)
        {
        case 1:
            result = num * (1e+12);
            return result;
            break;
        case 2:
            result = num * (1e+9);
            return result;
            break;
        case 3:
            result = num * (1e+6);
            return result;
            break;
        case 4:
            result = num * 1000;
            return result;
            break;
        case 6:
            result = num / 1000;
            return result;
            break;
        case 7:
            result = num * (1.25e+11);
            return result;
            break;
        case 8:
            result = num * (1.25e+8);
            return result;
            break;
        case 9:
            result = num * 125000;
            return result;
            break;
        case 10:
            result = num * 125;
            return result;
            break;
        case 11:
            result = num / 8;
            return result;
            break;
        case 12:
            result = num / 8000;
            return result;
            break;
        default:
            return num;
        }
        break;
    case 6:
        switch (second_in)
        {
        case 1:
            result = num * (1e+15);
            return result;
            break;
        case 2:
            result = num * (1e+12);
            return result;
            break;
        case 3:
            result = num * (1e+9);
            return result;
            break;
        case 4:
            result = num * (1e+6);
            return result;
            break;
        case 5:
            result = num * 1000;
            return result;
            break;
        case 7:
            result = num * (1.25e+14);
            return result;
            break;
        case 8:
            result = num * (1.25e+11);
            return result;
            break;
        case 9:
            result = num * (1.25e+8);
            return result;
            break;
        case 10:
            result = num * 125000;
            return result;
            break;
        case 11:
            result = num * 125;
            return result;
            break;
        case 12:
            result = num / 8;
            return result;
            break;
        default:
            return num;
        }
        break;
    case 7:
        //Byte
        switch (second_in)
        {
        case 1:
            result = num * 8;
            return result;
            break;
        case 2:
            result = num / 125;
            return result;
            break;
        case 3:
            result = num / 125000;
            return result;
            break;
        case 4:
            result = num / (1.25e+8);
            return result;
            break;
        case 5:
            result = num / (1.25e+11);
            return result;
            break;
        case 6:
            result = num / (1.25e+14);
            return result;
            break;
        case 8:
            result = num / 1000;
            return result;
            break;
        case 9:
            result = num / (1e+6);
            return result;
            break;
        case 10:
            result = num / (1e+9);
            return result;
            break;
        case 11:
            result = num / (1e+12);
            return result;
            break;
        case 12:
            result = num / (1e+15);
            return result;
            break;
        default:
            return num;
        }
        break;
    case 8:
        switch (second_in)
        {
        case 1:
            result = num * 8000;
            return result;
            break;
        case 2:
            result = num * 8;
            return result;
            break;
        case 3:
            result = num / 125;
            return result;
            break;
        case 4:
            result = num / 125000;
            return result;
            break;
        case 5:
            result = num / (1.25e+8);
            return result;
            break;
        case 6:
            result = num / (1.25e+11);
            return result;
            break;
        case 7:
            result = num * 1000;
            return result;
            break;
        case 9:
            result = num / 1000;
            return result;
            break;
        case 10:
            result = num / (1e+6);
            return result;
            break;
        case 11:
            result = num / (1e+9);
            return result;
            break;
        case 12:
            result = num / (1e+12);
            return result;
            break;
        }
        break;
    case 9:
        switch (second_in)
        {
        case 1:
            result = num * (8e+6);
            return result;
            break;
        case 2:
            result = num * 8000;
            return result;
            break;
        case 3:
            result = num * 8;
            return result;
            break;
        case 4:
            result = num / 125;
            return result;
            break;
        case 5:
            result = num / 125000;
            return result;
            break;
        case 6:
            result = num / (1.25e+8);
            return result;
            break;
        case 7:
            result = num * (1e+6);
            return result;
            break;
        case 8:
            result = num * 1000;
            return result;
            break;
        case 10:
            result = num / 1000;
            return result;
            break;
        case 11:
            result = num / (1e+6);
            return result;
            break;
        case 12:
            result = num / (1e+9);
            return result;
            break;
        default:
            return num;
        }
        break;
    case 10:
        switch (second_in)
        {
        case 1:
            result = num * (8e+9);
            return result;
            break;
        case 2:
            result = num * (8e+6);
            return result;
            break;
        case 3:
            result = num * 8000;
            return result;
            break;
        case 4:
            result = num * 8;
            return result;
            break;
        case 5:
            result = num / 125;
            return result;
            break;
        case 6:
            result = num / 125000;
            return result;
            break;
        case 7:
            result = num * (1e+9);
            return result;
            break;
        case 8:
            result = num * (1e+6);
            return result;
            break;
        case 9:
            result = num * 1000;
            return result;
            break;
        case 11:
            result = num / 1000;
            return result;
            break;
        case 12:
            result = num / (1e+6);
            return result;
            break;
        default:
            return num;
        }
        break;
    case 11:
        switch (second_in)
        {
        case 1:
            result = num * (8e+12);
            return result;
            break;
        case 2:
            result = num * (8e+9);
            return result;
            break;
        case 3:
            result = num * (8e+6);
            return result;
            break;
        case 4:
            result = num * 8000;
            return result;
            break;
        case 5:
            result = num * 8;
            return result;
            break;
        case 6:
            result = num / 125;
            return result;
            break;
        case 7:
            result = num * (1e+12);
            return result;
            break;
        case 8:
            result = num * (1e+9);
            return result;
            break;
        case 9:
            result = num * (1e+6);
            return result;
            break;
        case 10:
            result = num * 1000;
            return result;
            break;
        case 12:
            result = num / 1000;
            return result;
            break;
        default:
            return num;
        }
        break;
    case 12:
        switch (second_in)
        {
        case 1:
            result = num * (8e+15);
            return result;
            break;
        case 2:
            result = num * (8e+12);
            return result;
            break;
        case 3:
            result = num * (8e+9);
            return result;
            break;
        case 4:
            result = num * (8e+6);
            return result;
            break;
        case 5:
            result = num * 8000;
            return result;
            break;
        case 6:
            result = num * 8;
            return result;
            break;
        case 7:
            result = num * (1e+15);
            return result;
            break;
        case 8:
            result = num * (1e+12);
            return result;
            break;
        case 9:
            result = num * (1e+9);
            return result;
            break;
        case 10:
            result = num * (1e+6);
            return result;
            break;
        case 11:
            result = num * 1000;
            return result;
            break;
        default:
            return num;
        }
        break;
    default:
        return num;
    }
}

float a_converter(int f_in, int s_in, long double num)
{
    long double result;
    switch (f_in)
    {
    case 1:
        switch (s_in)
        {
        case 2:
            result = num * (1e+6);
            return result;
            break;
        case 3:
            result = num / 2.59;
            return result;
            break;
        case 4:
            result = num * (1.196e+6);
            return result;
            break;
        case 5:
            result = num * (1.076e+7);
            return result;
            break;
        case 6:
            result = num * (1.55e+9);
            return result;
            break;
        case 7:
            result = num * 100;
            return result;
            break;
        case 8:
            result = num * 247.105;
            return result;
            break;
        default:
            return num;
        }
        break;
    case 2:
        switch (s_in)
        {
        case 1:
            result = num / (1e+6);
            return result;
            break;
        case 3:
            result = num / (2.59e+6);
            return result;
            break;
        case 4:
            result = num * 1.196;
            return result;
            break;
        case 5:
            result = num * 10.764;
            return result;
            break;
        case 6:
            result = num * 1550;
            return result;
            break;
        case 7:
            result = num / 10000;
            return result;
            break;
        case 8:
            result = num / 4046.8;
            return result;
            break;
        default:
            return num;
        }
        break;
    case 3:
        switch (s_in)
        {
        case 1:
            result = num * 2.5899;
            return result;
            break;
        case 2:
            result = num * (2.59e+6);
            return result;
            break;
        case 4:
            result = num * (3.098e+6);
            return result;
            break;
        case 5:
            result = num * (2.788e+7);
            return result;
            break;
        case 6:
            result = num * (4.014e+9);
            return result;
            break;
        case 7:
            result = num * 258.999;
            return result;
            break;
        case 8:
            result = num * 640;
            return result;
            break;
        default:
            return num;
        }
        break;
    case 4:
        switch (s_in)
        {
        case 1:
            result = num / (1.196e+6);
            return result;
            break;
        case 2:
            result = num / 1.196;
            return result;
            break;
        case 3:
            result = num / (3.098e+6);
            return result;
            break;
        case 5:
            result = num * 9;
            return result;
            break;
        case 6:
            result = num * 1296;
            return result;
            break;
        case 7:
            result = num / 11960;
            return result;
            break;
        case 8:
            result = num / 4840;
            return result;
            break;
        default:
            return num;
        }
        break;
    case 5:
        switch (s_in)
        {
        case 1:
            result = num / (1.076e+7);
            return result;
            break;
        case 2:
            result = num / 10.764;
            return result;
            break;
        case 3:
            result = num / (2.788e+7);
            return result;
            break;
        case 4:
            result = num / 9;
            return result;
            break;
        case 6:
            result = num * 144;
            return result;
            break;
        case 7:
            result = num / 107639;
            return result;
            break;
        case 8:
            result = num / 43560;
            return result;
            break;
        default:
            return num;
        }
        break;
    case 6:
        switch (s_in)
        {
        case 1:
            result = num / (1.55e+9);
            return result;
            break;
        case 2:
            result = num / 1550;
            return result;
            break;
        case 3:
            result = num / (4.014e+9);
            return result;
            break;
        case 4:
            result = num / 1296;
            return result;
            break;
        case 5:
            result = num / 144;
            return result;
            break;
        case 7:
            result = num / (1.55e+7);
            return result;
            break;
        case 8:
            result = num / (6.273e+6);
            return result;
            break;
        default:
            return num;
        }
        break;
    case 7:
        switch (s_in)
        {
        case 1:
            result = num / 100;
            return result;
            break;
        case 2:
            result = num * 10000;
            return result;
            break;
        case 3:
            result = num / 259;
            return result;
            break;
        case 4:
            result = num * 11959.9;
            return result;
            break;
        case 5:
            result = num * 107639;
            return result;
            break;
        case 6:
            result = num * (1.55e+7);
            return result;
            break;
        case 8:
            result = num * 2.471;
            return result;
            break;
        default:
            return num;
        }
        break;
    case 8:
        switch (s_in)
        {
        case 1:
            result = num / 247;
            return result;
            break;
        case 2:
            result = num * 4046.86;
            return result;
            break;
        case 3:
            result = num / 640;
            return result;
            break;
        case 4:
            result = num * 4840;
            return result;
            break;
        case 5:
            result = num * 43560;
            return result;
            break;
        case 6:
            result = num * (6.273e+6);
            return result;
            break;
        case 7:
            result = num / 2.471;
            return result;
            break;
        default:
            return num;
        }
        break;
    default:
        return num;
    }
}

float f_converter(int f_in, int s_in, long double num)
{
    long double result;
    switch (f_in)
    {
    case 1:
        switch (s_in)
        {
        case 2:
            result = num / 1000;
            return result;
            break;
        case 3:
            result = num / (1e+6);
            return result;
            break;
        case 4:
            result = num / (1e+9);
            return result;
            break;
        default:
            return num;
        }
        break;
    case 2:
        switch (s_in)
        {
        case 1:
            result = num * 1000;
            return result;
            break;
        case 3:
            result = num / 1000;
            return result;
            break;
        case 4:
            result = num / (1e+6);
            return result;
            break;
        default:
            return num;
        }
        break;
    case 3:
        switch (s_in)
        {
        case 1:
            result = num * (1e+6);
            return result;
            break;
        case 2:
            result = num * 1000;
            return result;
            break;
        case 4:
            result = num / 1000;
            return result;
            break;
        default:
            return num;
        }
        break;
    case 4:
        switch (s_in)
        {
        case 1:
            result = num * (1e+9);
            return result;
            break;
        case 2:
            result = num * (1e+6);
            return result;
            break;
        case 3:
            result = num * 1000;
            return result;
            break;
        default:
            return num;
        }
        break;
    default:
        return num;
    }
}

void tv()
{

    FILE *pointer;

    pointer = fopen("TV_Channels.txt", "a+");

    if (pointer == NULL)
    {
        printf("Unable to detect file\n");
    }

    else
    {

        printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t1.Somoy TV : https://youtu.be/KgiwN7ddb2U\n\n\t\t\t\t\t2.Channel 24 : https://youtu.be/bj9EPDNrejs\n\n\t\t\t\t\t3.Al Jazeera : https://youtu.be/_dsWF2prkR8\n\n\t\t\t\t\t4.BTV : https://youtu.be/zmiJY5_47Cg\n\n\t\t\t\t\t5.CNN : https://youtu.be/uPP0t8a0q0M\n\n");

        fclose(pointer);
    }
}

void newspaper()
{

    FILE *pointer;

    pointer = fopen("newspaper.txt", "a+");

    if (pointer == NULL)
    {
        printf("Unable to detect file\n");
    }

    else
    {

        printf("\n\n\n\n\n\t\t\t\t\t1.Prothom Alo : https://www.prothomalo.com/\n\n\t\t\t\t\t2.Bangladesh Pratidin : https://www.bd-pratidin.com/\n\n\t\t\t\t\t3.KalerKantho : https://www.kalerkantho.com/\n\n\t\t\t\t\t4.Sylheter Dak : https://sylheterdak.com.bd/\n\n\t\t\t\t\t5.Jugantor : https://www.jugantor.com/\n\n\t\t\t\t\t6.Daily Jaijaidin : https://www.jaijaidinbd.com/\n\n\t\t\t\t\t7.Daily Ittefaq : https://www.ittefaq.com.bd/\n\n\t\t\t\t\t8.Amar Desh 24 : https://amar-desh24.com/bangla/\n\n\t\t\t\t\t9.The Daily Star : https://www.thedailystar.net/\n\n\t\t\t\t\t10.The Financial Express : https://thefinancialexpress.com.bd/\n\n");

        fclose(pointer);
    }
}

void hangman()
{

    printf("\n\n\n\n\n\t\t\t\t\tHangman Game\n\n\n\n");

    printf("\t\t\t\t\t--------------|\n");

    printf("\t\t\t\t\t--------------|\n");

    printf("\t\t\t\t\t--------------|\n");

    printf("\t\t\t\t\t              O\n");

    printf("\t\t\t\t\t-------------/|\\\n");

    printf("\t\t\t\t\t--------------|\n");

    printf("\t\t\t\t\t--------------|\n");

    printf("\t\t\t\t\t-------------/ \\\n");

    int nn, n1 = 1, n2 = 3, n3 = 7, count = 0;

    for (int i = 0; i < 7; i++)
    {

        printf("\t\t\t\t\tGuess a number from 1 to 10  : ");

        scanf("%d", &nn);

        if (count == 2)
        {

            printf("\t\t\t\t\t--------------|\n");

            printf("\t\t\t\t\t--------------|\n");

            printf("\t\t\t\t\t--------------|\n");

            printf("\t\t\t\t                      O\n");

            printf("\t\t\t\t\t-------------/ \\\n");

            printf("\t\t\t\t\t--------------|\n");

            printf("\t\t\t\t\t--------------|\n");

            printf("\t\t\t\t\t-------------/ \\\n");

            printf("\t\t\t\t\tThanks for help \n");

            break;
        }

        else if (nn == n1)
        {
            count++;
            printf("\t\t\t\t\tHelp Me\n");
        }

        else if (nn == n2)
        {
            count++;
            printf("\t\t\t\t\tHelp Me\n");
        }

        else if (nn == n3)
        {
            count++;
            printf("\t\t\t\t\tHelp Me\n");
        }

        else
        {
            printf("\t\t\t\t\tHelp Me\n");
        }
    }

    void
    aagain();
}
