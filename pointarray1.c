#include<stdio.h>
int main()
{
    int arr[]={34,78,54,21,89};
    printf("%u\n",arr);
     printf("%u\n",&arr[0]);
      printf("%u\n",&arr[1]);
       printf("%u\n",arr[2]);
        printf("%u\n",2[arr]);
         printf("%u\n",arr+2);
          printf("%u\n",*(arr+2));
           printf("%u\n",*(2+arr));
           printf("%u\n",arr[-1]);
           int *ptr=arr;
            printf("%u\n",ptr[2]); 
            printf("%u\n",2[ptr]);
             printf("%u\n",*(ptr+2));
              printf("%u\n",*(2+ptr));
              ptr=&arr[3];
               printf("%u\n",ptr[-1]);
}