#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{ 
   int t,k = 1;
   scanf("%d",&t);
   
   while(t--)
   {
       int t1,t2,f,a;
       scanf("%d %d %d %d",&t1,&t2,&f,&a);       
       
       int score[3];
       for(int i = 0; i < 3; i++)scanf("%d",&score[i]);
       sort(score,score+3);
       
       int grades;
       grades = t1+t2+f+a+((score[2] + score[1])/2);
       
       if(grades >= 90)printf("Case %d: A\n",k);
       else if(grades >= 80 && grades < 90)printf("Case %d: B\n",k);
       else if(grades >= 70 && grades < 80)printf("Case %d: C\n",k);
       else if(grades >= 60 && grades < 70)printf("Case %d: D\n",k);
       else
         printf("Case %d: F\n",k);
         
         
        k++; 
   }
   return 0;    
}
