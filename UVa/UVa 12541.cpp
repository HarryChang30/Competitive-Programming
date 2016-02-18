#include <cstdio>
#include <iostream>
#include <cstring>

using namespace std;

int main()
{  
   int t;
   scanf("%d",&t);  
   
   char names[t][10005];
   int date[t],month[t],year[t];
   
   int youngestYear = 0,youngestMonth = 0,youngestDate = 0;
   char youngestNames[10005];
   
   int oldestYear = 10000,oldestMonth = 10000 , oldestDate = 10000;
   char oldestNames[10005];
   
   for(int i = 0; i < t; i++)
   {
      scanf("%s %d %d %d",names[i],&date[i],&month[i],&year[i]); 
   }

   
   
   for(int i = 0; i < t; i++)
   {
       if(year[i] > youngestYear){
                  youngestYear = year[i];
                  youngestMonth = month[i];
                  youngestDate = date[i]; 
                  strcpy(youngestNames,names[i]);
           
      }else if(year[i] == youngestYear){
          if(month[i] > youngestMonth){
                  youngestYear = year[i];
                  youngestMonth = month[i];
                  youngestDate = date[i]; 
                  strcpy(youngestNames,names[i]);
                      
          }else if(month[i] == youngestMonth){
              if(date[i] > youngestDate){
                  youngestYear = year[i];
                  youngestMonth = month[i];
                  youngestDate = date[i]; 
                  strcpy(youngestNames,names[i]);    
              }      
          }     
      }        
   }
   
   for(int i = 0; i < t; i++)
   {
       if(year[i] < oldestYear){
                  oldestYear = year[i];
                  oldestMonth = month[i];
                  oldestDate = date[i]; 
                  strcpy(oldestNames,names[i]);   
           
      }else if(year[i] == oldestYear){
          if(month[i] < oldestMonth){
                  oldestYear = year[i];
                  oldestMonth = month[i];
                  oldestDate = date[i]; 
                  strcpy(oldestNames,names[i]);   
                      
          }else if(month[i] == oldestMonth){
              if(date[i] < oldestDate){
                  oldestYear = year[i];
                  oldestMonth = month[i];
                  oldestDate = date[i]; 
                  strcpy(oldestNames,names[i]);    
              }      
          }     
      }        
   }
   
   
   
   printf("%s\n",youngestNames);
   printf("%s\n",oldestNames);
   
   return 0;    
}
