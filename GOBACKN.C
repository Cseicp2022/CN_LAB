#include<stdio.h> 
int main() 
{ 
int npackets,sent=0,ack,i,no_of_packets; 
printf("\n enter the no of packets="); 
scanf("%d",&no_of_packets); 
npackets = no_of_packets; 
while(1) 
{ 
} 
return 0; 
} 
for(i=0;i<npackets;i++) 
{ 
printf("Frame %d has been transmitted.\n",sent); 
sent++; 
if(sent >= npackets) 
break; 
} 
printf("\nPlease enter the last Acknowledgement received :"); 
scanf("%d",&ack); 
if(ack >= npackets) 
break; 
else 
sent = ack;
}
return 0;
}
