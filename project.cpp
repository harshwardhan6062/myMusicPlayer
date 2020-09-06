#include<stdio.h>
#include<Windows.h>
#include"MMSystem.h"
#include<string>
#include<stdlib.h>
#include<dos.h>
#include<conio.h>
void print(char s[500])
{
	for(int i=0;i<strlen(s);i++)
	{
		printf("%c",s[i]);
		Sleep(80);
	}
}
void welcome()
{
	char s[100]="\t\t\t\t\tWELCOME!!!....TO THE CHAT BOT";
	printf(s);
	Sleep(2000);
	for(int i=1;i<=strlen(s);i++)
	{
		for(int j=1;j<=i;j++)
			printf("\b");
		for(int j=1;j<=i;j++)
			printf(" ");
		Sleep(150);
	}
}

void printAham(char s[500])
{
	for(int i=0;i<5;i++)
	{
		printf("%c",s[i]);
		Sleep(450);
	}
	for(int i=5;i<strlen(s);i++)
	{
		printf("%c",s[i]);
		Sleep(250);
	}
}
											
void hindi()
{
	system("cls");
	PlaySound(TEXT("aham.wav"),NULL,SND_FILENAME|SND_ASYNC);
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t");
	printAham("AHAM BRAHMAASAMI\n");
	system("cls");
	PlaySound(TEXT("bot.wav"),NULL,SND_FILENAME|SND_LOOP|SND_ASYNC);
	Sleep(5000);
	
	print("\nBHAGWAAN MAIN MAANTE HO KYA SARDAARJI??\n\t\t\t\t\t\t\t\t");
	char ch[100];
	scanf("%[^\n]s",ch);
	while((getchar()!='\n'));
	int flag = 0;
	if(!strcmpi(ch,"NAHI"))
	    {
	        print("KABHI KABHI LAGTA HAI APUN\nHI BHAGWAAN HAI....\n");
	        Sleep(2000);
	        print("\n\n");
	        print("AB PEHCHANA SARDAARJI ??\n\t\t\t\t\t\t\t\t");
	        flag = 1;
	    }
	    
	    else if(!strcmpi(ch,"HAAN"))
	        print("\nSAAABASH\n");
	
	if(flag == 1)
	{
		scanf("%[^\n]s",ch);
	    while((getchar()!='\n'));
	    if(!strcmpi(ch,"HAAN"))
	        print("SAAABASH\n");
	
	}
	    
	int count=0;
	for(;;){
		if(count>5){
				print("SARDAARJI...AB APUN KA TIME KHATM\n");
				return ;
		}
		print("\nKYA MANGTA HAI TEREKO??\n");
		printf("\n\t\t\t\t\t\t\t\t");
		scanf("%[^\n]s",ch);
		while((getchar()!='\n'));
		
		if(!strcmpi(ch,"GAITONDE GIRLFRIEND MILEGI?")){
		print("\nAUKKAT....");
		Sleep(2000);
		print("\nAUKAAT HAI TERA !!?");
		printf("\n\t\t\t\t\t\t\t\t");
		scanf("%[^\n]s",ch);
		while((getchar()!='\n'));
		
		print("\nSAABASH");
		count++;
		}
		
		else if(!strcmpi(ch,"GAITONDE 9 CGPA MILEGI KYA?")){
		count++;
		print("\nSARDAARJI , KABHI KABHI TO LAGTA HAI \n APUNICH BHAGWAAN HAI\n");
		Sleep(2000);
		print("PAR 9 CGPA KA SUKH APUN KI \nZINDAGI MAIN BHI NAHI THA\n");
		}
		
		else if(!strcmpi(ch,"GAITONDE TIME KITNA HUA?")){
		count++;
		print("TIME TO SARDAARJI AB AAPKA HARAAM HONE\nWAALA HAI");
		Sleep(2000);
		print("25 DIN HAI APKE PAAS!!\nBACHHA SAKTE HO TO BACHHA LO..\n");
		printf("\n%s ",__TIME__);
		print("\n");
		}
		else if(!strcmpi(ch,"GAITONDE MATHS 1 KA KYA KAROON?"))
		{
		print("\nSARVASHAKTI SHALI SARVASHAKTIMAAN SABKA EK MAATRA BHAGWAAN !!\n");
		print("H K DAAS\n");
		
		char q[100];
		
		printf("\n\t\t\t\t\t\t\t\t");
		scanf("%s",q);
		fflush(stdin);
		count++;	
		print("\nHK DAAS WO GUCHHI HAI JISKO AGAR\nAAPNE PEE LI TO AAP SAARE DARD BHOOL JAAOGE\n");
		}
		
		else if(!strcmpi(ch,"GAITONDE EK PERSONAL SAWAAL PUCCHUN?"))
		{
		print("\nPUCHOO SARDAARJI!!!\n\t\t\t\t\t\t\t\t");
		char ans[100];
		scanf("%[^\n]s",ans);
		while((getchar()!='\n'));
		
		if(!strcmpi(ans,"KUKU KA JAADU KAHAN GAYA?"))
		{
			print("GALTI KAR RAHE HO SARDAARJI.....");
			return;
		}
		}
		
		else if(!strcmpi(ch,"CHUP KAR GAITONDE"))	
		{
			print("\nGALAT KAR RHE HO SARDAARJI....\n");
			return;
		}
		
		else
			print("KUCH BHI MAT BOLLO SARDAARJI\n NHI TO BUNTY KO AAP JAANTE HO..\n");
		
	}
}
void english()
{
	system("cls");
	PlaySound(TEXT("bot2.wav"),NULL,SND_FILENAME|SND_LOOP|SND_ASYNC);
	print("\nGOODEVENING SIR......\nWHAT WOULD YOU LIKE TO KNOW .....\n");
	char ch[100];
	int count=0;
	do{
		if(count>6)
	{
			while(!_kbhit())
				print("\nBATTERY LOW!!!\n");
			exit(0);
		}
		
		printf("\n\t\t\t\t\t\t\t\t");
		scanf("%[^\n]s",ch);
		while((getchar()!='\n'));
		if(!strcmpi(ch,"WHO DO YOU THINK IS THE STRONGEST AVENGER?")){
			print("\nIT IS A CONTROVERSIAL QUESTION SIR\nSOME THINK IT IS CAPTAIN MARVEL BUT \nI THINK IT IS Mr. Stark!!\nWHAT DO YOU THINK SIR...");
			printf("\n\t\t\t\t\t\t\t\t");
			scanf("%[^\n]s",ch);
			while((getchar()!='\n'));
			print("\nNICE CHOICE SIR...\n");
			count++;
		}
		else
		if(!strcmpi(ch,"JARVIS WHAT IS THE WEATHER CONDITIONS IN MANIT?")){
			count++;
			print("\nTEMP:\t25°C\nHUMIDITY:\t100%\nWIND SPEED\t15kmph\nANYTHING ELSE SIR!!\n");
		}
		else
		if(!strcmpi(ch,"I AM BORED"))
		{
			count++;
			print("\nSO WHAT DO YOU WANT ME TO DO?\n");
			scanf("%[^\n]s",ch);
			while((getchar()!='\n'));
			print("SORRY SIR THIS I CAN'T DO\n");
		}
		else
		if(!strcmpi(ch,"CAN I GET 9 CGPA?"))
		{
			print("SIR, CHANCE OF YOU GETTING 9 CGPA IS 0.0001%.\n\t\t\t\t\t\t\t\t");
			scanf("%[^\n]s",ch);
			while((getchar()!='\n'));
			print("SIR THAT'S RUDE!!\n");
			Sleep(2000);
			print("ASK ME SOMETHING ELSE\n");
			count++;
		}
		else
		if(!strcmpi(ch,"CAN I GET A GIRLFRIEND?"))
		{
			print("SIR NOW I THINNK YOU SHOULD GO\nFOR 9 CGPA ONLY BECAUSE");
			print("\nCHANCES OF YOU GETTING A GIRLFRIEND \nIS EVEN LESSER THAN YOU GETTING 9 CGPA\n");
			count++;
		}
		else
		if(!strcmpi(ch,"CAN YOU TELL ME THE TIME JARVIS?")){
			count++;
			printf("\n%s ",__TIME__);
			print("ALSO YOUR WORKSHOP ENDS IN 02:15:48\n");
		}
		else
		if(!strcmpi(ch,"jarvis"))
			print("\nYES SIR... I AM THERE...\n");
		else
		if(!strcmpi(ch,"shutdown jarvis"))
			exit(0);
		else
			print("\n SORRY SIR!! THIS QUESTION IS\nUNAUTHORIZED.PLEASE ASK SOMETHING ELSE..\n");
	}while(count<7);
}

int main()
{
	PlaySound(TEXT("1s.wav"),NULL,SND_FILENAME|SND_ASYNC);
	welcome();
	printf("\n\n\n\n\n");
	print("\t\t\t\t\tCHOOSE ANY OF THE TWO OPTIONS GIVEN BELOW\n\t\t\t\t\t1 FOR ENGLISH\n\t\t\t\t\t2 FOR HINDI\n\t\t\t\t\t");
	int choice;
	scanf("%d",&choice);	
	fflush(stdin);
	mciSendString("pause MY_SND", NULL, 0, NULL);
	switch(choice){
		case 1: 
				english();
				break;
		case 2:
				hindi();
				break;
		default:
			printf("\nYOU ARE AN IDIOT...AND IF YOU ARE NOT TRY AGAIN\n");
			break;
	}
	return 0;
}
