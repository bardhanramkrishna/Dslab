#include <stdio.h>
int main()
{
int i,n,a[50],num,t=0;
printf("enter the size of an array");
scanf("%d",&n);
printf("enter %d elements",n);
for(i=0;i<=n;i++){
scanf("%d",&a[i]);
}
printf("enter the search no:");
scanf("%d",&num);
for(i=0;i<=n;i++){
if(num==a[i]){
t=1;
break;
}
}
if(t=1){
printf("number index=%d",i+1);
}
else{
printf("not found");
}
return 0;
}    
