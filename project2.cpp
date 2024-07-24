#include<stdio.h>
#include<conio.h>
#include<windows.h>
void gotoxy(short x, short y);    //here we declare the gotoxy function//
int main()
{
	int n,i,*a;
	long long int key,x;
	
 //    gotoxy(col,row);
 printf("enter number of numbers to be searched");
 scanf("%d",&n);
 system("cls");
 a=(int*)malloc(n*(sizeof(int)));
 gotoxy(0,0);
 printf("enter numbers");
 for(i=0;i<n;i++)
 {
 	scanf("%d",&a[i]);
 }
 printf("enter number tobe searched");
 scanf("%d",&key);
 system("cls");
 
 //for(i=0;i<1000000000;i++);
 gotoxy(0,2);
 //system("color 2"); //4 red 2 green 7 white
 for(i=0;i<n;i++)
 {
 	printf("%4d",a[i]);
	}  
  for(i=0;i<n;i++)
  {
  	gotoxy(4*i+3,3);
  	printf("^");
  	if(a[i]==key)
  	{   
        gotoxy(4*(i-1)+3,4);
		printf("                                                                                                                                                                ");	
  	
  	    //clear the before redd 
  	    
  	    gotoxy(4*i+3,4);
  		system("color 2");
  		printf(" check [%d = %d] TRUE  break",a[i],key);
  		break;
  		for(x=0;x<3000000000;x++);
  		
	  }
	else{
		gotoxy(0,4);
		printf("                                                                                                                                                                ");
		//clear thebefore redd
		gotoxy(4*i+3,4);
	
		system("color 4");
		printf(" check [%d = %d] FALSE ",a[i],key);
		for(x=0;x<3000000000;x++);
	}
   gotoxy(4*i+3,3);
   printf(" ");
	
  }
             
 return 0;
}
void gotoxy(short x, short y)       
{
 COORD pos ={x,y};
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
