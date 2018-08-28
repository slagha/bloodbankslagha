#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
void main(){
char name[8],adr[10],email[16],bgroup[10],gender;
int age,mobile[10];
int n,x,i,b;
int c;
clrscr();
printf("enter the number of patients whose details are to be filled\n");
scanf("%d",&n);
do{
printf("Choose a number from the following to enter details of the patient\n");
printf("1.Donor name\t2.Address\t3.Email\t4.Blood group\t5.Gender\t6.Age\t7.Mobile\n");
scanf("%d",&x);
switch(x){
case 1: for(i=0;i<8;i++)
	scanf("%c",&name[i]);
	break;
case 2: for(i=0;i<10;i++)
	scanf("%c",&adr[i]);
	break;
case 3: for(i=0;i<16;i++)
	scanf("%c",&email[i]);
	break;
case 4: for(i=0;i<10;i++)
	scanf("%c",&bgroup[i]);
	break;
case 5: printf("enter 1.female\t2.male");
	scanf("%d",&b);
	break;
case 6:scanf("%d",&age);
	break;
case 7:for(i=0;i<10;i++){
	scanf("%d",&mobile[i]);
	}
	break;
}
printf("Do you want to continue(y=1/n=0)\n");
scanf("%d",&c);
printf("\n");
}while(c!=0);
printf("the details are\n");
printf("1.Donor name\t2.Address\t3.Email\t4.Blood group\t5.Gender\t6.Age\t7.Mobile\n");
for(i=0;i<8;i++){
	scanf("%c",name[i]);
	}
	printf("\t");
for(i=0;i<10;i++)   {
	printf("%c",adr[i]);
	}
	printf("\t");
for(i=0;i<16;i++)  {
	scanf("%c",email[i]);
	}
	printf("\t");
for(i=0;i<10;i++)
	printf("%c",bgroup[i]);
	printf("\t");
if(b==1)
printf("female\t");
else
printf("male\t");
for(i=0;i<10;i++){
	printf("%d",mobile[i]);
	}

getch();
}