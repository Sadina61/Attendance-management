#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include <unistd.h>

struct atten
{
	int hour,min,sec,day,mon,year,pin;
};
struct student
{
	char name[50],address[50];
	int roll,pin;
};
void t(int *y,int *m,int *d,int *h,int *min,int *s)
{
	
	time_t current_time = time(NULL);

    // Convert the time to a struct tm for more detailed information
    struct tm* time_info = localtime(&current_time);

    // Extract individual components
    *y= time_info->tm_year + 1900; // Year is offset by 1900
    *m= time_info->tm_mon + 1;    // Month ranges from 0 to 11, so add 1
    *d= time_info->tm_mday;
    *h= time_info->tm_hour;
    *min = time_info->tm_min;
    *s= time_info->tm_sec;

}
void heading1()
{
	system("cls");
	printf("**********************************************************\n");
    printf("*                                                        *\n");
    printf("*                BCT CD ATTENDANCE SYSTEM                *\n");
    printf("*                                                        *\n");
    printf("**********************************************************\n");
    printf("##########################################################\n");
    printf("################        MAIN MENU           ##############\n");
    printf("##########################################################\n");
}
void heading2()
{
	system("cls");
	printf("**********************************************************\n");
    printf("*                                                        *\n");
    printf("*                BCT CD ATTENDANCE SYSTEM                *\n");
    printf("*                                                        *\n");
    printf("**********************************************************\n");
    printf("##########################################################\n");
    printf("################        ADMIN LOGIN         ##############\n");
    printf("##########################################################\n");
}
void heading3()
{
	system("cls");
	printf("**********************************************************\n");
    printf("*                                                        *\n");
    printf("*                BCT CD ATTENDANCE SYSTEM :)))               *\n");
    printf("*                                                        *\n");
    printf("**********************************************************\n");
    printf("##########################################################\n");
    printf("################       ATTENDENCE ENTRY     ##############\n");
    printf("##########################################################\n");
}
void heading4()
{
	system("cls");
	printf("**********************************************************\n");
    printf("*                                                        *\n");
    printf("*                BCT CD ATTENDANCE SYSTEM                *\n");
    printf("*                                                        *\n");
    printf("**********************************************************\n");
    printf("##########################################################\n");
    printf("################           ADMIN            ##############\n");
    printf("##########################################################\n");
}
/*void test()
{
	struct student s[100];
	
	int i;
	FILE *f;
	f=fopen("Details\\detail.bin","rb");
	fread(&s,sizeof(struct student),100,f);
	for(i=0;i<100;i++)
	{
		if(s[i].pin==7990)
		{
			for(int j=0;j<3;j++)
			printf("%d\n",s[i].d[j].min);
			break;
		}
	}
	
	
}*/
void att()
{
	FILE *f,*fp;
	struct student s[100];
	struct atten a;
	int pin,i=0;
	heading3();
	printf("\nEnter your Pin Code:");
	scanf("%d",&pin);
	f=fopen("Details\\detail.bin","rb");
	fread(&s,sizeof(struct student),100,f);
	fclose(f);
	for(i=0;i<100;i++)
	{
		if(pin==s[i].pin)
		{
    		t(&a.year,&a.mon,&a.day,&a.hour,&a.min,&a.sec);
    		a.pin=s[i].pin;
    		fp=fopen("Details\\atten.bin","a+b");
    		fwrite(&a,sizeof(struct atten),1,fp);
    		fclose(fp);
			printf("\n\t\t!!THANK YOU!!\n\n\t%s you are present Today on %d:%d:%d\n",s[i].name,a.hour,a.min,a.sec);
			sleep(3);
			return;
		}
	}
	printf("\n\t\tSORRY!!\n\tStudent Data Not Found\n");
	sleep(2);
	return;
	
		
}
void addstudent()
{
	struct student p,p1[100];
	FILE *fp;
	int i;
	heading4();
	printf("\n\n\t\tADD STUDENT\n\n");
	printf("Enter Student's Name:");
	fflush(stdin);
	gets(p.name);
	printf("Enter Roll:");
	scanf("%d",&p.roll);
	printf("Enter Address:");
	fflush(stdin);
	gets(p.address);
	printf("Enter Unique Pin:");
	scanf("%d",&p.pin);
	fp=fopen("Details\\detail.bin","a+b");
	fread(&p1,sizeof(struct student),100,fp);
	for(i=0;i<100;i++)
	{
		if((p.roll==p1[i].roll)||(p.pin==p1[i].pin))
		{
			printf("\n\n\t\t!!Student details already exist!!\n");
			sleep(2);
			return;
		}
	}
	fwrite(&p,sizeof(struct student),1,fp);
	fclose(fp);
	printf("\n\n\tDetails of %s is Added Successfully\n\n",p.name);
	sleep(2);
	/*fp=fopen("Details\\detail.bin","rb");
	fread(&p1,sizeof(struct student),1,fp);
	printf("%s\n%d",p1.name,p1.pin);
	fclose(fp);*/
	
}
void viewattendence()
{
	FILE *f;
	struct atten a[1000];
	struct student s[100];
	int i,r,p,j=1;
	heading4();
	printf("\n\nEnter the roll of Student:");
	scanf("%d",&r);
	printf("\n\n\t\tATTENDENCE DETAILS Of:\n\n");
	f=fopen("Details\\atten.bin","rb");
	fread(&a,sizeof(struct atten),1000,f);
	fclose(f);
	f=fopen("Details\\detail.bin","rb");
	fread(&s,sizeof(struct student),100,f);
	fclose(f);
	for(i=0;i<100;i++)
	{
		if(s[i].roll==r)
		{
			printf("Name: %s\nRoll no.: %d\nAddress: %s\n\n",s[i].name,s[i].roll,s[i].address);
			p=s[i].pin;
			goto s1;
		}
	}
	printf("\n\n\t\t!!!!STUDENT DETAILS NOT FOUND!!!!\n");
	sleep(2);
	return;
s1:	printf("\n\t\tATTENDENCE DETAILS\n\n\n\n");
	printf("\nSN.\t\tPresent Date time\n");
	printf("___________________________________\n\n");
	for(i=0;i<1000;i++)
	{
		if(a[i].pin==p)
		{
			printf("%d\t\t%d/%d/%d  %d:%d:%d\n",j,a[i].year,a[i].mon,a[i].day,a[i].hour,a[i].min,a[i].sec);
			j++;
		}
	}
	printf("\n\nEnter any key to exit:");
	getch();
	
	
	
	
}
void changepassword()
{
	FILE *fp;
	char passc[50],opass[50];
	fp=fopen("Details\\pass.bin","rb");
	fread(opass,sizeof(opass),1,fp);
	fclose(fp);
	heading4();
	printf("\n\n\t\tCHANGE PASSWORD\n\n");
	printf("\nEnter Old Password:");
	fflush(stdin);
	gets(passc);
	if(strcmp(passc,opass)==0)
	{
		printf("Enter New Password:");
		fflush(stdin);
		gets(passc);
		fp=fopen("Details\\pass.bin","wb");
		fwrite(passc,sizeof(passc),1,fp);
		fclose(fp);
		printf("\n\tPASSWORD SUCCESSFULLY CHANGED\n\n");
		sleep(2);
	}
	else
	{
		printf("\n\t!!Incorrect Password!!\n\tReturning Back Please Wait......\n");
		sleep(2);
		return;
	}
	
}
void syslog()
{
	FILE *f;
	char pass[50],username[50],passc[50];
	int ch1;
	f=fopen("Details\\pass.bin","rb");
	fread(pass,sizeof(pass),1,f);
	fclose(f);
	heading2();
	printf("\nEnter Login Username:");
	fflush(stdin);
	gets(username);
	fflush(stdin);
	printf("\nEnter Password:");
	gets(passc);
	if(strcmp(username,"pulchowk")==0&&strcmp(pass,passc)==0)
	{
		printf("\n\t\tSYSTEM LOGGED IN SUCCESSFULLY\n\t\tPlease Wait....\n\n");
		sleep(2);
	s2:	heading4();
		printf("Please Select Option\n\n");
		printf("1).Add Student\n2).View Attendence Details\n3).Change Password\n4).Log Out\n\n");
		printf("Enter Your Choice:");
		scanf("%d",&ch1);
		switch(ch1)
		{
			case 1:
				addstudent();
				goto s2;
				break;
			case 2:
				viewattendence();
				goto s2;
				break;
			case 3:
				changepassword();
				goto s2;
				break;
			case 4:
				printf("\n\n\t\tLOGGING OUT\n\t\tPLEASE WAIT......\n\n");
				sleep(2);
				return;
				break;
			default:
				printf("\n!!Select Proper Option!!\n\n");
				sleep(2);
				goto s2;
		}
		
	}
	else
	{
		printf("\n\t\t!!!!Incorrect Username or Password!!!!!\n\t\tReturning Back  Please Wait......\n");
		sleep(2);
		return;
	}
	
	
}
int main()
{
	int ch;
s2:	heading1();
	printf("\n\tWELCOME TO BCT CD ATTENDENCE SYSTEM\t\n");
	printf("\nPlease Select the options:\n");
	printf("1).Attendence Entry\n2).Admin Login\n\n");
	printf("Enter your Choice:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			att();
			goto s2;
			break;
		case 2:
			syslog();
			goto s2;
			break;
	//	case 3:
		//	test();
		//	break;
		default:
			printf("\n!!Select proper Option!!\n");
			sleep(2); //in #include <unistd.h> header file
		//	system("cls");  
			goto s2;
			
	}
	getch();
}

