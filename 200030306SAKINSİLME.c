#include <stdio.h>
#include <stdlib.h>
int main() {
	
	int day,month,year;
		
	printf("\t*******SIMPLE CALENDER*********\n\n");
	
	printf("\n(Please enter your date in form of:18 03 2018)");
	
	while(1)
	{
		printf("\n\nEnter a date (0 0 0 to quit):");
		scanf("%d %d %d",&day,&month,&year);
		if(day==0 && month==0 && year==0)
		{
			
			//break;
			printf("Thanks for using our calendar!");
			return 0;
			
		}
		if(day<=31 && month<=12 && month>0 && year>0 && day>0)
		{
	     if(month==1) //month==1
	     {
	     	if(day==31)
	     		printf("The next day of %d.01.%d is 01.02.%d",day,year,year);
	     	if(day<31)
	     		printf("The next day of %d.01.%d is %d.01.%d",day,year,(day+1),year);
		 }
		 if(month==2)  //month==2
		 {
		 	if(day<28)
		 		printf("The next day of %d.02.%d is %d.02.%d",day,year,(day+1),year);
		 	if(day==28)
		 	{
		 		if(year%4==0)
		 			printf("The next day of %d.02.%d is %d.02.%d",day,year,(day+1),year);
		 		if(year%4!=0)
		 			printf("The next day of %d.02.%d is 01.03.%d",day,year,year);
			}
			if(day==29)
			{
				if(year%4==0)
					printf("The next day of %d.02.%d is 01.03.%d",day,year,year);
				if(year%4!=0)
					printf("This is not a valid date!");
				
			}
			if(day==30)
				printf("This is not a valid date!");
			if(day==31)
				printf("This is not a valid date!");
		 }
		 if(month==3) //month==3
		 {
	     	if(day==31)
	     		printf("The next day of %d.03.%d is 01.04.%d",day,year,year);
	     	if(day<31)
	     		printf("The next day of %d.03.%d is %d.03.%d",day,year,(day+1),year);
		 }
		 if(month==4) //month==4
		 {
		 	if(day==31)
	     		printf("This is not a valid date!");
	     	if(day==30)
	     		printf("The next day of %d.04.%d is 01.05.%d",day,year,year);
	     	if(day<30)
	     		printf("The next day of %d.04.%d is %d.04.%d",day,year,(day+1),year);	
		 }
		 if(month==5)  //month==5
		 {
	     	if(day==31)
	     		printf("The next day of %d.05.%d is 01.06.%d",day,year,year);
	     	if(day<31)
	     		printf("The next day of %d.05.%d is %d.05.%d",day,year,(day+1),year);
		 }
		 if(month==6) //month==6
		 {
		 	if(day==31)
	     		printf("This is not a valid date!");
	     	if(day==30)
	     		printf("The next day of %d.06.%d is 01.07.%d",day,year,year);
	     	if(day<30)
	     		printf("The next day of %d.06.%d is %d.06.%d",day,year,(day+1),year);	
		 }
		 if(month==7)  //month==7
		 {
	     	if(day==31)
	     		printf("The next day of %d.07.%d is 01.08.%d",day,year,year);
	     	if(day<31)
	     		printf("The next day of %d.07.%d is %d.07.%d",day,year,(day+1),year);
		 }
		 if(month==8)  //month==8
		 {
	     	if(day==31)
	     		printf("The next day of %d.08.%d is 01.09.%d",day,year,year);
	     	if(day<31)
	     		printf("The next day of %d.08.%d is %d.08.%d",day,year,(day+1),year);
		 }
		 if(month==9) //month==9
		 {
		 	if(day==31)
	     		printf("This is not a valid date!");
	     	if(day==30)
	     		printf("The next day of %d.09.%d is 01.10.%d",day,year,year);
	     	if(day<30)
	     		printf("The next day of %d.09.%d is %d.09.%d",day,year,(day+1),year);	
		}
		if(month==10)  //month==10
		 {
	     	if(day==31)
	     		printf("The next day of %d.%d.%d is 01.%d.%d",day,month,year,(month+1),year);
	     	if(day<31)
	     		printf("The next day of %d.%d.%d is %d.%d.%d",day,month,year,(day+1),month,year);
		 }
		 if(month==11) //month==11
		 {
		 	if(day==31)
	     		printf("This is not a valid date!");
	     	if(day==30)
	     		printf("The next day of %d.%d.%d is 01.%d.%d",day,month,year,(month+1),year);
	     	if(day<30)
	     		printf("The next day of %d.%d.%d is %d.%d.%d",day,month,year,(day+1),month,year);
		}
		if(month==12)  //month==12
		 {
	     	if(day==31)
	     		printf("The next day of %d.%d.%d is 01.01.%d",day,month,year,(year+1));
	     	if(day<31)
	     		printf("The next day of %d.%d.%d is %d.%d.%d",day,month,year,(day+1),month,year);
		 }
	}		
		else
		{
			printf("This is not a valid date!");
		}
}
	return 0;
}
	
	
	

