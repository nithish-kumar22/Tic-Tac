#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
void main()
{
	system("C:\\Documents\\mkdir TIC_TAC");
	FILE *fp;
	fp = fopen("C:\\Documents\\TIC_TAC\\tic-tac_user.txt","w");
	MessageBox(0,"WELCOME to this game... This game tells about your aim","TIC-TAC",1+64);
	system("cd documents");
	system("cls");
	system("color 5f");
	int a,c,d,e,f;
	int num;
	char passw[10];
	int status;
	char b[100];
	printf("\t\t\t\t\tWELCOME TO THIS GAME!\n");
	system("pause");
	Beep(100,100);
    Beep(200,200);
    Beep(300,300);
    Beep(400,400);
    Beep(500,500);
    Beep(400,600);
    Beep(300,700);
    Beep(500,800);
    Beep(400,700);
    Beep(400,300);
    Beep(300,200);
    Beep(300,300);
    Beep(400,400);
    Beep(500,500);
    Beep(600,600);
    Beep(500,600);
    Beep(800,800);
    Beep(700,700);
    Beep(300,300);
	printf("Enter the game password:");
	gets(passw);
	if(strcmp(passw,"hsaka") == 0)
	{
		Beep(400,500);
		Beep(750,800);
		printf("Password is correct!!\n");
		MessageBox(0,"That is a correct password","Password",1+64);
	}
	else
	{
		Beep(400,500);
		Beep(750,800);
		printf("Incorrect Password~~");
		MessageBox(0,"That is an Incorrect password... Please try again~","Password",1+64);
		exit(0);
	}
	printf("Select 0 to exit and 1 to continue..");
	scanf("%d",&num);
	if(num == 0)
	{
		exit(status);
	}
	if(num == 1)
	{
	printf("This Game Tell about Your Aim!!");
	printf("\nEnter Your Name:");
	gets(b);
	printf("Welcome ");
	puts(b);
	printf("!");
	printf("\n1 = Green \n2 = Red \n3 = Blue \n4 = White");
	printf("\nPlease Select a Colour:");
	scanf("%d",&c);
	switch(c)
	{
	case 1:
	{
		system("color 2f");
		printf("You Selected Green Colour!");
		printf("\n\t1 \n\t\t3 \n\t\t\t5 \n\t\t\t\t7");
		printf("\nPlease Select a Number:");
		scanf("%d",&a);
		if(a == 1)
			printf("Your Future is Robotic Engineer!!");
		if(a == 3)
			printf("Your Future is Civil Engineer~!");                                                                                                                                                                                                                                                                                                                    
		if(a == 5)
			printf("Your Future is Mechanical Engineer``");
		if(a == 7)
			printf("Your Future is Software Engineer!!");
		break;
	}
	case 2:
	{
		system("color 4f");
		printf("You Selected Red Colour!");
		printf("\n\t2 \n\t\t4 \n\t\t\t6 \n\t\t\t\t8");
		printf("\nPlease Select a Number:");
		scanf("%d", &d);
		if(d == 2)
			printf("Your Future is Chief Minister#!");
		if(d == 4)
			printf("Your Future is Prime Minister!!");
		if(d == 6)
			printf("Your Future is president$!");
		if(d == 8)
			printf("Your Future is Collector!!");
		break;

	}
	case 3:
	{
		system("color 1f");
		printf("You Selected Blue Colour!");
		printf("\n\t3 \n\t\t6 \n\t\t\t9 \n\t\t\t\t7");
		printf("\nPlease Select a Number:");
		scanf("%d",&e);
		if(e == 3)
			printf("Your Future is Dcotor$$");
		if(e == 6)
			printf("Your Future is Marine Engineer~~");
		if(e == 9)
			printf("Your Future is Scientist!!");
		if(e == 7)
			printf("Your Future is Professor^^");
		break;

	}
	case 4:
	{
		system("color 7f");
		printf("You Selected White Colour!");
		printf("\n\t1 \n\t\t5 \n\t\t\t8 \n\t\t\t\t3");
		printf("\nPlease Select a Number:");
		scanf("%d",&f);
		if(f == 1)
			printf("Your Future is Indian Police Service!!");
		if(f == 5)
			printf("Your Future is Indian Administrative Service~~");
		if(f == 8)
			printf("Your Future is Police``");
		if(f == 3)
			printf("Your Future is Military$$");
		break;

	}
}
}
	getch();
}

