#include<stdio.h>
#include<ctype.h>
#include<string.h>
char stack[50];
char postfix[50];
char infix[50];
int top=-1;
int j=0;
char pop() {
    	char a;
    	a=stack[top];
    	top--;
    	return a;
    }
    //----------------------------------
void push(char symbol)
     {
    	top++;
    	stack[top]=symbol;
    }

  int prcd(char symbol) // returns the value that helps in the precedence 
    {
    	switch(symbol)
         {
    		case '+':
    		case '-':
    		        return 2;
    		        break;
    		case '*':
    		case '/':
    		        return 4;
    		        break;
    		case '$':
    		case '^':
    		        return 6;
    		        break;
            case '(':
            case ')':
                return 1;
                break;
    	}
    }
//-------------------------------------------------
int isOperator(char symbol) 
    {
    	switch(symbol) {
    		case '+':
    		        case '-':
    		        case '*':
    		        case '/':
    		        case '^':
    		        case '$':
    		        case '&':
    		        case '(':
    		        case ')':
    		        return 1;
    		break;
    		default:
    		        return 0;
    		// returns 0 if the symbol is other than given above
    	}
    }

void infixtopostfix(char infix[50],char postfix[50])
{
    int i;
    char symbol;
    for(int i=0;i<strlen(infix);i++)
    {
        symbol=infix[i];
        if(isOperator(symbol)==0)
        {
            postfix[j]=symbol;
            j++;
        }
        else
        {
            if(symbol=='(')
            {
               push(symbol);
            }
            else if(symbol==')')
            {
                while(stack[top]!='(')
                {
                    postfix[j]=pop();
                    j++;
                }
                pop();
            }
            else
            {
                if(prcd(stack[top])>=prcd(symbol))
                {
                    postfix[j]=pop();
                    j++;
                    push(symbol);
                }
                else
                {
                    push(symbol);
                }
                
                
            }
            
        }
        
    }
    while(stack[top]!=-1)
    {
        char c=pop();
        if(c!='(')
        {
             postfix[j]=c;
             j++;
        }
    }
    printf("\npostfix expression:");
    printf("%s",postfix);

}
int main()
{
  printf("Enter infix expression:");
  scanf("%s",infix);
  infixtopostfix(infix,postfix);
}