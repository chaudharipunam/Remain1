#include<stdio.h>
int main(){
  int n,p=1;
  printf("Number is: ");
  scanf("%d",&n);
  for(int i=1; i<=n; i++){
    for(int j=1; j<=n; j++){
      if(j<=n-i){
        printf(" ");
      }
      else{
        printf("%d",p);
        p++;
      }
    }
    p-=2;
    for(int k=1; k<i; k++){
      printf("%d",p);
      p--;
    }
    printf("\n");
    p+=2;
  }
  return 0;
}


/*
#include <stdio.h>
int main(){
   int n;
   scanf("%d",&n);
   for(int i=1; i<=n; i++){
     for(int j=1; j<=n; j++){
       if(j<=n-i){
         printf(" ");
       }
       else{
         printf("*");
       }
     }
     for(int k=1; k<i; k++){
       printf("*");
     }
     printf("\n");
   }
   for(int i=1; i<=n; i++){
     for(int j=1; j<=n; j++){
       if(j<=i){
         printf(" ");
       }
       else{
         printf("*");
       }
     }
     for(int k=1; k<n-i; k++){
       printf("*");
     }
     printf("\n");
   }
}


#include <stdio.h>
int main(){
   int n,p,s=0;
   scanf("%d",&n);
   int a[n],s_a[n];
   printf("position: ");
   scanf("%d",&p);
   for(int i=0; i<n; i++){
     scanf("%d",&a[i]);
   }
   for(; p<n; p++){
       if(p<=n-1){
         s_a[s]=a[p];
       }
       else{
         p=0;
         s_a[s]=a[p];
       }
   }
   for(int k=0; k<n; k++){
      printf("%d",s_a[k]);
   }
   return 0;
}
*/




      







