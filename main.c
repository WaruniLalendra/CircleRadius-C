#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define PI 3.14159

//int menu();
//double diameter_to_radius(double);
//double random_value_generator(double,double);
//double area(double);
//double circumference(double);

int choice;
char unit[3];
char AorC;
double randnum;

int menu(){

    printf("Do you want to use radius or diameter for the calculation?\nEnter 1 for radius\nEnter 2 for diameter\nEnter -1 to exit\n");
    scanf("%d",&choice);

    if(choice==1 || choice==2 || choice==-1)
        return 0;
    else
        printf("Invalid choice, please try again\n");
        menu();
}

double diameter_to_radius(double diameter){
    return diameter/2;
}


double random_value_generator(double minimum, double maximum){
    double range = maximum - minimum;
    double div = RAND_MAX/range;
    return minimum + (rand()/div);
}

double area(double radius){
    return PI*radius*radius;
}


double circumference(double radius){
    return 2*PI*radius;
}




int main()
{   for(;;){
    srand(time(NULL));
    menu();

    if(choice==1){
        printf("Enter an option: 1 \n");
        for(;;){
            printf("Is your unit cm or m \n");
            scanf(" %s",unit);

            if(strcmp(unit,"m")==0 || strcmp(unit,"cm")==0)
                break;
            else
                continue;
        }
        randnum = random_value_generator(5.0,15.0);
        printf("The radius given by random generator is: %lf\n", randnum);

        for(;;){
            printf("Enter 'A' for area and 'C' for circumference\n");
            getchar();
            AorC=getchar();

            switch(AorC){
                case 'A':
                    break;
                case 'C':
                    break;
                default:
                    printf("Invalid choice. Try again");
                    continue;
            }
            break;
        }
            switch(AorC){
                case 'A':
                printf("The area of the circle with radius %lf is %lf %s \n",randnum,area(randnum),unit);
                break;

                case 'C':
                printf("The circumference of the circle with radius %lf is %lf %s \n",randnum,circumference(randnum),unit);
                break;
            }

    }else if(choice==2){
        printf("Enter an option: 2 \n");
        for(;;){
            printf("Is your unit cm or m \n");
            scanf(" %s",unit);

            if(strcmp(unit,"m")==0 || strcmp(unit,"cm")==0)
                break;
            else
                continue;
        }
        randnum = random_value_generator(15.0,30.0);
        printf("The radius given by random generator is: %lf\n", randnum);

        for(;;){
            printf("Enter 'A' for area and 'C' for circumference\n");
            getchar();
            AorC=getchar();

            switch(AorC){
                case 'A':
                    break;
                case 'C':
                    break;
                default:
                    printf("Invalid choice. Try again");
                    continue;
            }
            break;
        }
            switch(AorC){
                case 'A':
                printf("The area of the circle with diameter %lf is %lf %s \n",randnum,area(diameter_to_radius(randnum)),unit);
                break;

                case 'C':
                printf("The circumference of the circle with diameter %lf is %lf %s \n",randnum,circumference(diameter_to_radius(randnum)),unit);
                break;
            }

    }else{
        break;
    }
    AorC = NULL;
    strcpy(unit," ");
    choice = NULL;
    continue;
   }
   return 0;
}








