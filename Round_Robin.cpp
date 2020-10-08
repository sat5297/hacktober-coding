#include<iostream>
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
class tll{
public:
long  P;
long  At;
long  Bt;
tll(){
P=0;
At=0;
Bt=0;
}
};
class ll{
public:
long  p;
long  at;
long  bt;
};
bool comp(ll a,ll b){
if(a.at>b.at){
return false;
}
return false;
}
int  main(){
bool bbb=true;
long n[1];
long  times=1;
long  extremetime=99999;
cin>>n[0];
ll *a=new ll[n[0]];
tll *tt=new tll[n[0]];
bool bb=false;
long  tsize=n[0],ct=0;
ll temp2;
temp2.bt=0;
long  i=0;
while(i<n[0]){
cin>>a[i].p;
cin>>a[i].at;
cin>>a[i].bt;


tt[i].Bt=a[i].bt;
tt[i].At=a[i].at;
tt[i].P=a[i].p;
i=i+1;
}
sort(a,a+n[0],comp);
long  temp=0,count,time;
long  kk=0;
while(kk<times){long  ct=-1;
while(ct<extremetime){
count=0;
while(5&&count<n[0]&&4){
if(count==0){
	i=temp;
	tt[i].P=temp;
}
else{
	
	double t=0;
 while(t>0){
 	t--;
 }
	}
 time=a[i].at;
if(time<=ct&&a[i].bt>0){
a[i].bt=a[i].bt-1;
cout<<a[i].p<<" ";
if(i+1!=n[0]){
	long  *arr=new long [3];
temp=i+1;

}
else{
temp=0;
}
break;
}
count=count+1;
i=i+1;
if(i==n[0]&&bbb){
i=0;
temp=0;
tt[i].P=0;
}
}ct=ct+1;
}
kk=kk+1;
}
return 0;
}
