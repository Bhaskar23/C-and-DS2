#include<stdio.h>
#include<stdlib.h>
#include<string.h>
double a[50];
struct node
{
    char name[25];
    char acc_type[10];
    double aadhar_no;
    double mobile_no;
    double acc_no;
    float balance;
    struct node *link;
};
typedef struct node NODE;

NODE* memalloc(char name[],char acc_type[],double acc_no,double aadhar_no,double mobile_no,float balance)
{
    NODE *new;
    new=(NODE*)malloc(sizeof(NODE));
    if(new==NULL)
    {
        printf("Memory full\n");
        exit(2);
    }
    new->acc_no=acc_no;
    new->aadhar_no=aadhar_no;
    new->balance=balance;
    new->mobile_no=mobile_no;
    strcpy(new->name,name);
    strcpy(new->acc_type,acc_type);
    new->link=NULL;
    return new;
}
NODE* insertrear(char name[],char acc_type[],double acc_no,double aadhar_no,double mobile_no,float balance,NODE *head)
{
    NODE *temp,*cur;
    temp=memalloc(name,acc_type, acc_no,aadhar_no,mobile_no,balance);
    if(head==NULL)
    {
        head=temp;
        return head;
    }
    cur=head;
      while (cur->link!=NULL)
          cur=cur->link;
    cur->link=temp;
    return head;

}
NODE* deleterear(NODE *head)
{

    NODE *cur,*prev;
    if(head==NULL)
    {
        printf("List is empty\n");
        return head;
    }
    if(head->link==NULL)
    {
        free(head);
        head=NULL;
        return head;
    }
    cur=head;
    prev=NULL;
    while(cur->link!=NULL)
    {
        prev=cur;
        cur=cur->link;
    }
    free(cur);
    prev->link=NULL;
    return head;
}
NODE* delete(int key,NODE *head)
{
    NODE *cur,*prev,*next;
    if(head==NULL)
    {
        printf("List is empty\n");
        return head;
    }
    if(head->link==NULL)
    {
        free(head);
        head=NULL;
        return head;
    }
    cur=head;
    while(cur->acc_no!=key)
    {
        prev=cur;
        cur=cur->link;
        next=cur->link;
    }
    prev->link=next;
    free(cur);
    return head;

}
void display(NODE *head)
{
    NODE *cur;
    if(head==NULL)
    {
        printf("List is empty\n");
        return;
    }
    cur=head;
    printf("List elements are:\n");
    while (cur!=NULL)
    {
        printf("name            :%s\n",cur->name);
        printf("Account type    :%s\n",cur->acc_type);
        printf("Account Number  :%.lf\n",cur->acc_no);
        printf("Aadhar Number   :%.lf\n",cur->aadhar_no);
        printf("Account Balance :%.2f\n",cur->balance);
        printf("Mobile NUmber   :%.lf\n",cur->mobile_no);
        printf("\n");
        cur=cur->link;
    }
    
}
NODE* check_accno(double key,NODE *head)
{
    NODE *cur;
  if(head==NULL)
  {
      return head;
  }
  cur=head;
  while(cur!=NULL)
  {
      if(cur->acc_no==key)
      {
          printf("This account number already exits\n");
          printf("Please enter different Account number next time\n");
          printf("Thank you!\n");
          exit(1);
      }
      cur=cur->link;
  }
  return head;
}
NODE* check_name(char key[],NODE *head)
{
    NODE *cur;
  if(head==NULL)
  {
      return head;
  }
  cur=head;
  while(cur!=NULL)
  {
      if(strcmp(cur->name,key)==0)
      {
          printf("This account name already exits\n");
          printf("Please enter different name... next time\n");
          printf("Thank you!\n");
          exit(1);
      }
      cur=cur->link;
  }
  return head;
}
NODE* check_aadhar(double key,NODE *head)
{
    NODE *cur;
  if(head==NULL)
  {
      return head;
  }
  cur=head;
  while(cur!=NULL)
  {
      if(cur->aadhar_no==key)
      {
          printf("This Aadhar number already exits\n");
          printf("Please enter correct number Next Time\n");
          printf("Thank you!!\n");
          exit(1);
      }
      cur=cur->link;
  }
  return head;
}
NODE* check_mbl(double key,NODE *head)
{
    NODE *cur;
  if(head==NULL)
  {
      return head;
  }
  cur=head;
  while(cur!=NULL)
  {
      if(cur->mobile_no==key)
      {
          printf("This Mobile number already exits\n");
          printf("Please enter correct number Next Time\n");
          printf("Thank you!!\n");
          exit(1);
      }
      cur=cur->link;
  }
  return head;
}
int main()
{
    NODE *head=NULL;
    int ch,cont=0;
    double aadhar_no,mobile_no,acc_no;
    double key;
    float balance;
    char name[25],acc_type[10];
    do
    {
      printf("Enter your choice:\n");
      printf("1.INSERT REAR\t2.DELETE REAR\t3.DELETE\t4.DISPLAY\n");
      scanf("%d",&ch);
      switch(ch)
      {
          case 1:
                  printf("\nName:");
                  scanf("%s",name);
                  head=check_name(name,head);
                  printf("\nAccount type:");
                  scanf("%s",acc_type);
                  printf("\nAccount Number:");
                  scanf("%lf",&acc_no);
                  head=check_accno(acc_no,head);
                  printf("\nAadhar Number:");
                  scanf("%lf",&aadhar_no);
                  head=check_aadhar(aadhar_no,head);
                  printf("\nMobile Number:");
                  scanf("%lf",&mobile_no);
                  head=check_mbl(mobile_no,head);
                  printf("\nBalance amount:");
                  scanf("%f",&balance);
                  head=insertrear(name,acc_type,acc_no,aadhar_no,mobile_no,balance,head);
                  break;
          case 2:
                  head=deleterear(head);
                  break;
          case 3:
                  printf("\nEnter Accno to delete account:");
                  scanf("%lf",&key);
                  head=delete(key,head);
                  break;
          case 4: display(head);
                  break;
            default:printf("wrong choice entered\n");
      }
      printf("press 1 to continue and 0 to exit\n");
      scanf("%d",&cont);
    } while (cont!=0);
    return 0;
    
}
