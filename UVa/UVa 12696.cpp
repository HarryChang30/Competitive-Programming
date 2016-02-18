#include <cstdio>
#include <iostream>

using namespace std;

bool checkallow(double l , double w , double h)
{
   if(l > 56 && (l+w+h) > 125)return false;
   if(w > 45 && (l+w+h) > 125)return false;
   if(h > 25 && (l+w+h) > 125)return false;
   
   return true;    
}

bool checkweight(double kg)
{
   if(kg <= 7)return true;
   else 
      return false;     
}

int main()
{  
   int t,sum = 0;
   scanf("%d",&t);     
   
   while(t--)
   {
       double l,w,h,kg;
       scanf("%lf %lf %lf %lf",&l,&w,&h,&kg); 
       
       if(checkallow(l,w,h) == true && checkweight(kg) == true){
           printf("1\n");
           sum++;                     
       }
       else 
         printf("0\n");
   }
   
   printf("%d\n",sum);
   

   return 0;    
}
