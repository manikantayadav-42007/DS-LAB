#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
# define size 2
int st[size];

int top=-1;

void push(int item)
{
	top++;
	st[top] =item;
}
   int peek()
   {
   	return st[top];
   }
int pop()
{
	int item;
	item = st[top];
	top--;
	return(item);
}

void display()
{
	int i;
	for (i= top; i >=0; i--)
	printf("\n%d",st[i]);
	
}

int main()
{
	int item,choice;
	char ans;
	printf("\n\tImplementation of stack");
	do  {
	    printf("\nmain menu");
        printf("\n1.push \n2.pop \n3.peak \n4.display \n4.exist");
        printf("\nenter your choice");
	    scanf("%d", &choice);
	    switch(choice) {
		case 1:
			if(top<size-1)
			   {
			   	   printf("\enter the item to be pushed");
				   scanf("%d",&item);
				   push(item);
				}
				else
				    printf("over flow");
				  break;
				   
        case 2:
		     if(top==-1)
			     printf(" underflow");
			 else
			 {
					item = pop();
					printf("\nThe popped element is %d",item);
		   	    }
		   	break;
		case 3:
		     if(top==-1)
		         printf("underflow");
		       else
		        {
		  	        item=peek();
		  	        printf("the top most element is %d",item);
	            }
			break;	  	
		case 4:
		   	display();
		   	      break;
		case 5:
		   	exit(0);
        }
            printf("\ndo you want to continue?");
            ans = getche ();
        } while (ans == 'Y'|| ans == 'Y');
        return 0;
        
    }
