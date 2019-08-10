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
    NODE *temp,*cur;                               //Creating New account
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
NODE* deleterear(NODE *head)     //deleting account which is in last
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
NODE* delete(int key,NODE *head)      //delete particular account
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
void display(NODE *head)    //display all accounts present
{
    NODE *cur;
    if(head==NULL)
    {
        printf("No accounts exits\n");
        return;
    }
    cur=head;
    printf("list of accounts:\n");
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
NODE* check_accno(double key,NODE *head)    //checking of account number
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
          printf("\nThis account number already exits\n");
          printf("Please enter different Account number next time\n");
          printf("Thank you!\n\n");
          return (NODE*)1;
      }
      cur=cur->link;
  }
  return head;
}
NODE* check_name(char key[],NODE *head) //checking of name
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
          printf("\nThis account name already exits\n");
          printf("Please enter different name... next time\n");
          printf("Thank you!\n\n");
          return (NODE*)1;
      }
      cur=cur->link;
  }
  return head;
}
NODE* check_aadhar(double key,NODE *head) //checking of aadhar number
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
          printf("\nThis Aadhar number already exits\n");
          printf("Please enter correct number Next Time\n");
          printf("Thank you!!\n\n");
         return (NODE*)1;
      }
      cur=cur->link;
  }
  return head;
}
NODE* check_mbl(double key,NODE *head) //checking of mobilenumber
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
          printf("\nThis Mobile number already exits\n");
          printf("Please enter correct number Next Time\n");
          printf("Thank you!!\n\n");
          return (NODE*)1;
      }
      cur=cur->link;
  }
  return head;
}
NODE* update_name(char key[],double y,NODE* head) //update account name
{
    NODE *cur;
    if(head==NULL)
    {
        printf("No accounts exits\n");
        return head;
    }
    cur=head;
    while (cur!=NULL)
    {
        if(cur->acc_no==y)
        {
           strcpy(cur->name,key);
           return head;
        }
        cur=cur->link;
     }
     printf("\nSry!..no account found\n");
    return head;
}
NODE* update_mbl(double y,double mbl,NODE* head)  //update account mobile number
{
    NODE *cur;
    if(head==NULL)
    {
        printf("No accounts exits\n");
        return head;
    }
    cur=head;
    while (cur!=NULL)
    {
        if(cur->acc_no==y)
        {
           cur->mobile_no=mbl;
           return head;
        }
        cur=cur->link;
    }
     printf("Sry!..No account Linked with this mobile Number\n");
  return head;
}
NODE* dispacc1(double y,NODE *head) //display account details using account number
{
    NODE *cur;
    if(head==NULL)
    {
        printf("No account exits\n");
        return head;
    }
    cur=head;
    while(cur!=NULL)
    {
        if(cur->acc_no==y)
        {
            display(cur);
            return head;
        }
        cur=cur->link;
    }
    printf("\nSry!..No accounts found\n");
    return head;
}
NODE* dispacc2(double mbl,NODE *head) //display account details using mobilenumber
{
    NODE *cur;
    if(head==NULL)
    {
        printf("\nNo account exits\n");
        return head;
    }
    cur=head;
    while(cur!=NULL)
    {
        if(cur->mobile_no==mbl)
        {
            display(cur);
            return head;
        }
        cur=cur->link;
    }
    printf("\nSry...No account Linked with this mobile number\n");
    return head;
}

int main()
{
    NODE *head=NULL;
    int ch,cont=0,x;
    double aadhar_no,mobile_no,acc_no;
    double key,y,mbl;
    float balance;
    char name[25],acc_type[10],updname[25];
    label:
    do
    {
      printf("Enter your choice:\n");
      printf("1.CREATE ACCOUNT\n2.DELETE ACCOUNT\n3.DELETE\n4.UPDATE ACC DETAILS\n5.DISPLAY ALL ACCOUNTS\n6.CHECK ACCOUNT DETAILS\n");
      scanf("%d",&ch);
      switch(ch)
      {
          case 1:
                  printf("\nName:");
                  scanf("%s",name);
                  head=check_name(name,head);
                   if(head==(NODE*)1)
                  {
                      goto label;
                  }
                  printf("\nAccount type:");
                  scanf("%s",acc_type);
                  printf("\nAccount Number:");
                  scanf("%lf",&acc_no);
                  head=check_accno(acc_no,head);
                  if(head==(NODE*)1)
                  {
                      goto label;
                  }
                  printf("\nAadhar Number:");
                  scanf("%lf",&aadhar_no);
                  head=check_aadhar(aadhar_no,head);
                   if(head==(NODE*)1)
                  {
                      goto label;
                  }
                  printf("\nMobile Number:");
                  scanf("%lf",&mobile_no);
                  head=check_mbl(mobile_no,head);
                   if(head==(NODE*)1)
                  {
                      goto label;
                  }
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
          case 4:
                  printf("Update account information\n");
                  printf("select option:\n");
                  printf("1.NAME\n2.MOBILENUMBER\n");
                  printf("Enter:");
                  scanf("%d",&x);
                  switch(x)
                  {
                      case 1: printf("Enter account number:");
                              scanf("%lf",&y);
                              printf("Enter name:");
                              scanf("%s",updname);
                              printf("\n");
                              head=update_name(updname,y,head);
                              break;
                      case 2: printf("Enter account number:");
                              scanf("%lf",&y);
                              printf("Enter new mobile number:");
                              scanf("%lf",&mbl);
                              printf("\n");
                              head=update_mbl(y,mbl,head);
                              break;
                  }
                  break;

          case 5: display(head);
                  break;
          case 6: printf("select option\n");
                  printf("1.Account number\n2.Mobile Number\n");
                  printf("Enter:");
                  scanf("%d",&x);
                  switch(x)
                  {
                      case 1:printf("Enter account number:");
                             scanf("%lf",&y);
                             head=dispacc1(y,head);
                             break;
                      case 2:printf("Enter mobile number:");
                             scanf("%lf",&mbl);
                             head=dispacc2(mbl,head);
                             break;
                  }
                  break;
         default:printf("wrong choice entered\n");
      }
      printf("press 1 to continue and 0 to exit\n");
      scanf("%d",&cont);
    } while (cont!=0);
    return 0;
    
}
