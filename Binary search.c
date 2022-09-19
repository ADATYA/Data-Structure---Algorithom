#include <stdio.h>

int main()
{
   int a[]={2,4,6,7,8,9,23};
   int item = 7;
   
   int left,right,middle;
   left = 0;
   right= 6;
   
   while(left <= right)
   {
       middle=(left+right)/2;
       if(a[middle]==item){
       printf("Item is founded in index : %d\n",middle);
       return 0;
   }else if(a[middle] < item){
       left = middle + 1;
   }else{
       right = middle - 1;
   }

   }
    printf("Item is not found");
    return 0;
}
