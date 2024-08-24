//-------------->  ASSESSMENT  <-----------------
#include<stdio.h>
#include<string.h>
void reverse(char str1[]);
void concatenation();
void palindrom();
void cpystring();
void len_string();
void frequency_string();
void vowels_consonants();
void spaces_digits();
int main()
{
	int choice;
	char str1[1000],str2[1000],ans,Y,N;
	
	start: 

	printf("menu \n");
	printf("1. reverse: \n");
	printf("2. concatenation: \n");
	printf("3. palindrom: \n");
	printf("4. copy_string: \n");
	printf("5. len_string: \n");
	printf("6. frequency_string: \n");
	printf("7. vowels_consonants: \n");
	printf("8. spaces_digits: \n");
	printf("Enter your choice: \n");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			printf("\n Enter the string in str1: ");
	        scanf("%s",&str1);
			reverse(str1);
		break;	
		case 2:
			printf("\n Enter the string in str1: ");
			scanf("%s",&str1);
	        printf("\n Enter the string in str2:  ");
	        scanf("%s",&str2);
			concatenation(str1,str2);
		break;
		case 3:
            printf("\n Enter the string in str1: ");
            scanf("%s",&str1);
			palindrom(str1);
		break;
		case 4:
			printf("\n Enter the string in str1: ");
	        scanf("%s",&str1);
	        printf("\n Enter the string in str2:  ");
	        scanf("%s",&str2);
			cpystring(str1,str2);
        break;
		case 5:
			printf("\n Enter the string in str1: ");
			scanf("%s",&str1);
		    len_string(str1);
		break;
		case 6:
			printf("\n Enter the string in str1: ");
			scanf("%s",&str1);
		    frequency_string(str1);
		break;
		case 7:
			printf("\n Enter the string in str1: ");
			scanf("%s",&str1);
		    vowels_consonants(str1);
		break;
		case 8:
			printf("\n Enter the string in str1: ");
			scanf("%s",&str1);
		    spaces_digits(str1);				
		break;
	}
	printf("\nDo you want continune press 'y' & 'n' =");
	scanf(" %c",&ans);
	if(ans=='y')
	{
		goto start;
	}
	else
	{
		if(ans=='n')
		{
			goto end;
		}
	}
	end:
	return 0;
}
void reverse(char str1[])
{
	strrev(str1);
	printf("\n reverse of string is %s: ",str1);
}
void concatenation(char str1[],char str2[])
{
	printf("\nOregnal string is =%s",str1);
	printf("\nOregnal string is =%s",str2);
	strcat(str1,str2);
	printf("\nThe concation string is =%s",str1);
	printf("\nThe concation string is =%s",str2);	
}
void palindrom(char str1[])
{
	char str2[100];
	int i;
	for(i=0;str1[i]!='\0';i++)
	{
		str2[i]=str1[i];
	}
	strrev(str1);
	int result=strcmp(str1,str2);
	if(result==0)
	{
		printf("\n string is palilndrom");
	}
	else
	{
		printf("\n string is nor palindrom");
	}
}
void cpystring(char str1[],char str2[])
{
	strcpy(str2,str1);
	printf("\nstring = %s",str1);
	printf("\nstring = %s",str2);
}
void len_string(char str1[])
{
	int temp = strlen(str1);
	printf("\n length of string is = %d",temp);
}
void frequency_string(char str1[])
{
	char c;
	int count=0,i;
	for(c>='a';c<='z';c++)
	{
		count=0;
		for(i=0;str1[i]!='\0';i++)
		{
			if(c==str1[i])
			{
				count++;
			}
		}
		if(count>0)
		{
			printf("\n %c Found in  %d Times",c,count);
		}
	}
}
void vowels_consonants(char str1[])
{
	int i,count=0,count1=0;
	printf("\n original string is = %s",str1);
	for(i=0;i<strlen(str1);i++)
	{
		if(str1[i]=='a' || str1[i]=='A' || str1[i]=='e' || str1[i]=='E' || str1[i]=='i' || str1[i]=='I' || str1[i]=='o' || str1[i]=='O' || str1[i]=='u' || str1[i]=='U' )
		{
			count++;
		}
		else
		{
			if((str1[i]>=65 && str1[i]<=90) || (str1[i]>=97 && str1[i]<=122))
			{
				count1++;
			}

		}
	}
	printf("\nTotal number of vowel is %d",count);
	printf("\nTotal number of consonanat is %d",count1);
}
void spaces_digits(char str1[])
{
	int i,count=0;
		for(i=0;str1[i]!='\0';i++)
	{
		if(str1[i]==' ')
		{
			count++;
		}
	}
	printf("\nTotal numbre of space = %d",count);		
}

