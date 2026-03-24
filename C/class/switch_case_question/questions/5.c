#include <stdio.h>

int main()
{

    //month number and month names with days it have
    
    int month_no;
    
    printf("Enter month number: ");
    scanf("%d", &month_no);
    
    switch(month_no){
        
        case 1:
        printf("Month name is January\n");
        printf("It has 31 days");
        break;
        
        case 2:
        printf("Month name is Febuary\n");
        printf("It has 28 days");
        break;
        
        case 3:
        printf("Month name is March\n");
        printf("It has 31 days");
        break;
        
        case 4:
        printf("Month name is April\n");
        printf("It has 30 days");
        break;
        
        case 5:
        printf("Month name is May\n");
        printf("It has 31 days");
        break;
        
        case 6:
        printf("Month name is June\n");
        printf("It has 30 days");
        break;
        
        case 7:
        printf("Month name is July\n");
        printf("It has 31 days");
        break;
        
        case 8:
        printf("Month name is August\n");
        printf("It has 31 days");
        break;
        
        case 9:
        printf("Month name is September\n");
        printf("It has 30 days");
        break;
        
        case 10:
        printf("Month name is October\n");
        printf("It has 31 days");
        break;
        
        case 11:
        printf("Month name is November\n");
        printf("It has 30 days");
        break;
        
        case 12:
        printf("Month name is December\n");
        printf("It has 31 days");
        break;
        
        default:
        printf("Not a valid Month\n");
        
    }

    //++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
    //Another way of checking month days using if else

    /*if(month_no == 1 || month_no == 3 || month_no == 5 || month_no == 7 || month_no == 8 || month_no == 10 || month_no == 12){
	//printf("It has 31 days");
    }
    else if(month_no == 4 || month_no == 6 || month_no == 9 || month_no == 11){
	printf("It has 30 days");
    }
    else if(month_no == 2){
	printf("It has 28 days");
    }
    else{
	printf("Not a valid month");
    }*/		

    //+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

    //using while 

    // switch(month_no){

    //     case 1:

    //     case 3:

    //     case 5:

    //     case 7:

    //     case 8:

    //     case 10:

    //     case 12:
    //         printf("Its has 31 days.");
    //         break;

    //     case 4:

    //     case 6:

    //     case 9:

    //     case 11:
    //         printf("It has 30 days.");
    //         break;

    //     case 2:
    //         printf("It has 28 days");
    //         break;

    //     default:
    //         printf("Not a valid month");

    // }

}
