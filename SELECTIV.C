
#include <stdio.h> 
void main(){ 
int no_of_packets,window_size; 
int p,i=1,a,w,nac,ack; 
printf("\n enter the no of packets="); 
scanf("\n %d",&no_of_packets); 
printf("\n enter the window size="); 
scanf("\n %d",&window_size); 
a=no_of_packets; 
w=window_size; 
printf("Transmitting begins...! No of Packets : %d\n",a); 
while(i<=a){ 
printf("Sending Packets from %d to %d\n",i,w+i-1); 
for(p=i;p<w+i;p++) 
printf("Transmitting Packet %d\n",p); 
nac = i+rand()%w; 
printf("NACK : %d\n",nac); 
printf("Sending Packet : %d\n",nac); 
printf("Ack : %d\n",nac+1); 
printf("Ack : %d\n",i+w); 
i = i + w; 
} 
}
