#include <cstdio>
#include <iostream>
#include <cstring>


using namespace std;

int main()
{   
   double d,p,o,dep,val,res;
   while(scanf("%lf %lf %lf %lf",&d,&p,&o,&dep))
   {                
       if(d < 0)break;
       val = o+p;
       int temp = dep , n , ans = 0 , x = 1 , temp1 = d;
       
       double m[temp1],k;
       memset(m,0,sizeof(m));
       for(int i=0; i <temp; i++)
       {
           scanf("%d %lf" ,&n,&k);
           m[n] = k;
       }
       for(int i=0; i <temp1; i++)
       {
          if(m[i] == 0)m[i] = m[i-1];        
       }
       //for(int i=0; i <13; i++)printf("%d %lf\n",i,m[i]);
       
       //val *= (1-m[0]);
       
       //cout << o << " " << val << endl;
       res = o/d;
       val = val * (1-m[0]);
       while(o > val)
       {
          //o -= p;
          //if(o < val)break;
          ans++;
          o -= (res);
          val *= (1-m[x]);
          //cout  << o << " " <<  val << endl;
          x++;        
       }
       
       if(ans == 1)
          cout << ans << " " << "month" << endl;
       else 
          cout << ans << " " << "months" << endl;
       
       //cout << o << " " << val <<  " " << x-1  << endl;
   }
   return 0;    
}
