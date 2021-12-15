#include <stdio.h>
int main()
{
	int marks;
	printf("Enter marks:");
	scanf("%d",&marks);
	if(marks>84&&marks<=100)
	 {
	   printf("Grade A");
}
	 else if(marks<85&&marks>69)
{

	   printf("Grade B");
}
	 else if(marks<70&&marks>54)
{

	   printf("Grade C");
}
	 else if(marks<55&&marks>39)
{
	   printf("Grade D");
}
	  else if(marks<40)
	   printf("Grade E");    
	
return 0;
}

