#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


void one(int c)
{
    switch(c)
    {
        case 1:
        printf("One");
        break;
        case 2:
        printf("Two");
        break;
        case 3:
        printf("Three");
        break;
        case 4:
        printf("Four");
        break;
        case 5:
        printf("Five");
        break;
        case 6:
        printf("Six");
        break;
        case 7:
        printf("Seven");
        break;
        case 8:
        printf("Eight");
        break;
        case 9:
        printf("Nine");
        break;
        case 0:
        printf("Zero");
        break;
    }
}

void two(int c)
{
    switch(c)
    {
    	case 10:
    	printf("Ten");
		break;
        case 11:
        printf("Eleven");
        break;
        case 12:
        printf("Twelve");
        break;
        case 13:
        printf("Thirteen");
        break;
        case 14:
        printf("Fourteen");
        break;
        case 15:
        printf("Fifteen");
        break;
        case 16:
        printf("Sixteen");
        break;
        case 17:
        printf("Seventeen");
        break;
        case 18:
        printf("Eighteen");
        break;
        case 19:
        printf("Nineteen");
        break;
        case 20:
        printf("Twenty");
        break;
        case 30:
        printf("Thirty");
        break;
        case 40:
        printf("Fourty");
        break;
        case 50:
        printf("Fifty");
        break;
        case 60:
        printf("Sixty");
        break;
        case 70:
        printf("Seventy");
        break;
        case 80:
        printf("Eighty");
        break;
        case 90:
        printf("Ninety");
        break;
    }
}

void twoone(int c, int i)
{
	if(c>20)
	{
	i = (c / 10) * 10;
	c = c % 10;
	two(i);
	printf(" ");
	one(c);
    }
}

void three(int c)
{
	c = c /10;
	c = c /10;
	c = c % 10;
	one(c);

}

void threeone(int c, int i, int k)
{
	    k = c % 10;
		c = c / 10;
	    i = (c % 10) * 10;
	    two(i);
	    printf(" ");
	    one(k);
}

void four(int c)
{
	
	while(c>9)
	{
		c = c / 10;
	}
	one(c);
}

void fourone(int i, int c)
{
	
	c = c / 10;
	c = c / 10;
	i = c % 10;
	one(i);
}

void fourtwo(int i, int c, int k)
{
	i = c % 10;
	c = c / 10;
	k = (c % 10) * 10;
	two(k);
	printf(" ");
	one(i);
}

void five(int c, int i, int d)
{
	while(c>9)
	{
		c = c / 10;
		i=c;
	}
//	if(i==1)
//	{
//		while(d>19)
//		{
//			d = d / 10;
//		}
//		two(d);
//        printf("%d", d);
//	}
//	else
//	{
//	    c = c * 10;
//	    two(c);
//    }
}

void fiveone(int c)
{
	while(c>99)
	{
		c = c / 10;
	}
	    c = c % 10;
	one(c);
}

void fivetwo(int c)
{
	while(c>999)
	{
		c = c / 10;
	}
	    c = c % 10;
	one(c);
}

void fivethree(int c)
{
	while(c>9999)
	{
		c = c / 10;
	}
	    c = c % 10;
	    c = c * 10;
	two(c);
}

void fivefour(int c)
{
	c = c % 10;
	one(c);
}

void main()
{
    int a,b,c,d,e,f,g,h,i,j,k,l ;
    printf("Enter a number (0 - 10000): ");
    scanf("%d",&a);
    c=d=a;
    while(d!=0)
    {
       d = d/10;
       b++;
    }
      printf("\nDigits to words = ");
    if(b==1)
    {
	one(c);
    }
    if(b==2)
    { 
	  twoone(c, i) ;
    }
    if(b==3)
    {
    	if(c==100)
    	{
    		printf("Hundred");
		}
		else{
     three(c);
    printf(" Hundred and ");
      threeone(c, i, k);
  }
	}
	if(b==4)
	{
		if(a==1000)
		{
			printf("One Thousand");
		}
		else{
		four(c);
	   printf(" thousand ");
	    fourone(i, c);	
	   printf(" Hundred and ");
	    fourtwo(i, c, k);
	}
	}
	if(b==5)
	{
		five(c,i,d);
		printf(" ");
		fiveone(c);
		printf(" thousand ");
		fivetwo(c);
		printf(" Hundred and ");
		fivethree(c);
		printf(" ");
		fivefour(c);
	}
	printf("\n\n\n\n\n\n\n");
}
