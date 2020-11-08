#include<stdio.h>
int main(void)
{int month,day,year,week,x,y;
 printf("Enter date (mm/dd/yy):");
 scanf("%d /%d /%d",&month,&day,&year);
 
 printf("Dated this %d", day);
 switch (day) {
 	case 1: case 21 :case 31:
 		printf("st");break;
 	case 2: case 22:
 		printf("nd");break;
 	case 3: case 23:
 	    printf ("rd"); break;
 	default:printf("th"); break;
 	
 	}
 	printf(" day of");
    switch(month) {
    case 1: printf(" January");break;
    case 2: printf(" February"); break;
    case 3: printf(" March");break;
    case 4: printf(" April");break;
    case 5: printf(" May") ; break;
    case 6: printf(" June"); break;
    case 7: printf(" July"); break;
    case 8: printf(" August"); break;
    case 9: printf(" September");break;
    case 10: printf(" Ocober");break;
    case 11: printf(" November");break;
    case 12: printf(" December");break;
	} 
	printf(",20%.2d.\n", year);
	if (month>2)
     {
	 y=year/4;
	 x=(13*(month+1))/5;
     week=(-35+year+y+x+day-1)%7;
     switch(week) {
    case 1: printf(" 星期一");break;
    case 2: printf(" 星期二"); break;
    case 3: printf(" 星期三");break;
    case 4: printf(" 星期四");break;
    case 5: printf(" 星期五") ; break;
    case 6: printf(" 星期六"); break;
    case 7: printf(" 星期日"); break;
	case 0: printf("星期日");break;}
    }
    else
    
	  if (year>0)
      {
      --year;
	  month+=12	;
	  y=year/4;
	 x=(13*(month+1))/5;
	 week=(-35+year+y+x+day-1)%7;
	 switch(week) {
    case 1: printf(" 星期一");break;
    case 2: printf(" 星期二"); break;
    case 3: printf(" 星期三");break;
    case 4: printf(" 星期四");break;
    case 5: printf(" 星期五") ; break;
    case 6: printf(" 星期六"); break;
    case 7: printf(" 星期日"); break;
	case 0: printf("星期日");break;}
    }

    
	else 
	{
	year=99;
	month+=12;
	y=year/4;
	 x=(13*(month+1))/5;
	 week=(-34+year+y+x+day-1)%7;
	 switch(week) {
    case 1: printf(" 星期一");break;
    case 2: printf(" 星期二"); break;
    case 3: printf(" 星期三");break;
    case 4: printf(" 星期四");break;
    case 5: printf(" 星期五") ; break;
    case 6: printf(" 星期六"); break;
    case 7: printf(" 星期日"); break;
    case 0: printf("星期日");break; 
    return 0;}
}
}
