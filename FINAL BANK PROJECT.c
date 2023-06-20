#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<process.h>
struct uptodate
{
	int day;
	int month;
	int year;
};
int main()
{
struct Bank
{
	int AccountOpening;
	int Accountnumber;
	int withdrawl;
	int deposit;
	int AadharNumber;
	int uptodate;
	char Address[20];
	char name[20],c;
}Bank[8];
struct Bank B;
struct uptodate Todaysdate;
FILE *fp;
int AccountOpening;
int Accountnumber;
int withdrawl;
int AadharNumber;
char Address;
int deposit;
int n;
int uptodate;
int ch;
while(1)
{
	printf("\t\t\t\tMENU\n");
	printf("\n1. Enter person name who is opening a new account in Bank.\n");
	printf("2. Enter how much money you withdrawl from your account.\n");
	printf("3. Enter how much money you deposit your account.\n");
	printf("4. Enter today's Date.\n");
	printf("5. To EXIT.");
	printf("\n ENTER YOUR CHOICE:->");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
		fp=fopen("Bank.txt","w");
		while(1)
		{
			printf("ENTER ACCOUNT HOLDER NAME:->");
			scanf("%S",&B.name);
			fflush(stdin);
			printf("ENTER AADHAR NUMBER OF THIS PERSON:->");
			scanf("%d",&B.AadharNumber);
			fflush(stdin);
			printf("ENTER ADDRESS OF THIS PERSON:->");
			scanf("%s",&B.Address);
			fflush(stdin);
			while(fread(&B,sizeof(B),1,fp))
			fflush(stdin);
			printf("\n Your Account is opened,Thank You for choosing ABC Bank.");
			printf("\nEnter money you deposit from your account:->");
			scanf("%d",&B.deposit);
			fflush(stdin);
			printf("\nWISH TO CONTINUE?(Y/N)");
			scanf("%c",&ch);
			if(ch=='n' || ch=='N')
			break;
		fclose(fp);
		break;
		case 2:
			fp=fopen("Bank.txt","w");
			printf("ENTER ACCOUNT HOLDER NAME :->");
			scanf("%s",&B.name);
			fflush(stdin);
			printf("ENTER ACCOUNT NUMBER OF THIS PERSON :->");
			scanf("%d",&B.Accountnumber);
			fflush(stdin);
			printf("ENTER HOW MUCH MONEY WITHDRAWL FROM YOUR ACCOUNT :->");
			scanf("%d",&B.withdrawl);
			fflush(stdin);
			printf("\n Your Withdrawl is successful.");
			while(fread(&B,sizeof(B),1,fp))
			fflush(stdin);
			printf("\nWISH TO CONTINUE?(Y/N)");
			scanf("%c",&ch);
			if(ch=='n' || ch=='N')
			break;
		fclose(fp);
		break;
		case 3:
			fp=fopen("Bank.txt","w");
			printf("ENTER ACCOUNT HOLDER NAME :->");
			scanf("%s",&B.name);
			fflush(stdin);
			printf("ENTER ACCOUNT NUMBER OF THIS PERSON:->");
			scanf("%d",&B.Accountnumber);
			fflush(stdin);
			printf("ENTER DEPOSIT MONEY FROM YOUR ACCOUNT:->");
			scanf("%d",&B.deposit);
			fflush(stdin);
			printf("\n Your Deposit is successful.");
			printf("\nWISH TO CONTINUE?(Y/N)");
			scanf("%c",&ch);
			if(ch=='n' || ch=='N')
			break;
		fclose(fp);
		break;
		case 4:
			fp=fopen("Bank.txt","w");
			printf("ENTER ACCOUNT HOLDER NAME :->");
			scanf("%s",&B.name);
			fflush(stdin);
			printf("ENTER ACCOUNT NUMBER OF THIS PERSON :->");
			scanf("%d",&B.Accountnumber);
			fflush(stdin);
			printf("Today's Date (dd-mm-yyyy):      \n");
			scanf("%d%d%d", &Todaysdate.day, &Todaysdate.month, &Todaysdate.year);
			fflush(stdin);
			printf("\n Your Account is up to dated.");
			printf("\nWISH TO CONTINUE?(Y/N)");
			scanf("%c",&ch);
			if(ch=='n' || ch=='N')
			break;
		fclose(fp);
		break;
		case 5:
			exit(0);
			}
			}
			}
			return 0;
			}
					


		
