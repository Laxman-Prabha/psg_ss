#include<iostream>
#include <ctime>
#include<string.h>
using namespace std;
class RainfallRegion {
public:
  string pincode[10];
  float measure[10];
int m[10];
    void captureRain()
  {

        for(int i=0;i<5;i++){
        cout<<"Enter the pincode:";
        cin>>pincode[i];
        cout<<"enter the month(in number):";
        cin>>m[i];
        cout<<"Enter the amount:";
        cin>>measure[i];
        }
  }
   void min1(int m1)
   {
       int min=measure[0];

    for(int i=0;i<5;i++){
    if(m1==m[i]){
        if(measure[i]<min)
        {
            min=measure[i];
        }
    }
    }
    cout<<"\nminimum rainfall in that date:"<<min;


   }
   void max1(int m1)
   {
      int max=measure[0];
    for(int i=0;i<5;i++){
    if(m1==m[i]){
        if(measure[i]>max)
        {
            max=measure[i];
        }
    }
    }
    cout<<"\nMaximum rainfall in that date:"<<max;


   }
   void avg(int m1){
       int sum=0,count=0,avg;
       for(int i=0;i<5;i++)
       {
           if(m1==m[i]){
               sum=sum+measure[i];
               count++;
           }
       }
       avg=sum/count;
       cout<<"\nAverage rainfall is:"<<avg;

   }

};
main(){
RainfallRegion r;
int m;
r.captureRain();
cout<<"\n Enter the month:";
cin>>m;
r.min1(m);
r.max1(m);
r.avg(m);
}
