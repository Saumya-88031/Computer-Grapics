#include<iostream.h> 
#include<conio.h> 
#include<graphics.h> 
#include<dos.h> 
struct edge{
int x1,y1,x2,y2,flag:
};
void main({ int gd=DETECT.gm,n,i,j,k; edge ed[10], temped;
float dx,dy, m[10],x_int[10], inter_x[10]; int x[10],y[10],ymax=0,ymin=480,yy, temp;
initgraph(&gd,&gm,"C:\TURBOc3\BGI"); 
cout<<"Enter the no. of vertices of the polygon:"; 
cin>>N;
cout<<"nEnter the vertices :- n";
 for(i=0;i<n;i++){ 
cout<<"P"<<i+1<<":";
cin>>x[i]>>y[il; 
if(y[i]>ymax)
ymax=y[i]; 
if(y[]<ymin)
ymin=y[il;
ed[i].x1=x[i];
ed[i].y1=yli];
}
for(i=0;i<n-1;i++){
ed[i].x2=ed[i+1]x1; 
ed[i].y2=ed[i+1].y1;
ed[i].flag=0;
}
ed[i].x2-ed[0].x1;
ed[i].y2=ed[0],y1; 
ed[i].fag=0; 
for(i=0;i<n;i++){
if(ed[i].y1< ed[i].y2){
 temp=ed[i].x1;
 ed[i].x1=ed[i].x2;
 ed[i].x2=temp;
 temp=ed[i].y1;
 ed[i].y1=ed[i].y2;
ed[i].y2=temp;
}
}
for(i-0;i<n;i++){
line(ed[i].x1, ed[i].y1,ed[i].x2,ed[i].y2);
}
for(i=0;i<n-1;i++){
for(j=0;j<n-1;j++){
if(ed[j].y1<ed[j+1].y1){
 temped=ed[j]: ed[j]=ed[j+1]; ed[j+1]=temped;
}
if(ed[j].y1==ed[j+1].y1){
if(ed[j].y2<ed[j+1].y2){ temped=edi];: ed[j]=ed[j+1]; ed[j+1]=temped;
}
if(ed[j].y2==ed[j+1].y2){
if(ed[j].x1<ed[j+1].x1){ temped=ed[j];
 ed[j]=ed[j+1];
 ed[j+1]=temped;
}
}
}
}
for(i=0;i<n;i++){ 
dx=ed[i].x2-ed[i].x 1;
dy=ed[i].y2-ed[i].y1;
if(dy==0{ m[i]=0;
}
else { m[i]=dx/dy;
} 
inter_x[i]-ed[i].x1;
}
yy=ymax; while(yy>ymin){ for(i=0;i<n;i++){ if(yy>ed[i]. y2 && yy<=ed[[].y1 ){
ed[i].flag=1;
}
else{ ed[].flag=0;
}
}
j=0; 
for(i=0;i<n;i++){
 if(ed[i].flag==1){
if(yy==ed[i].y1){
x_int[j]==ed[i].x1;
 j++;
}
if(ed[i-1].y1==yy && ed[i-1].y1<yy) { x_int[i]=ed[i].x1;
j++;
}
if(ed[i+1].y1==yy && ed[i+1].y1<yy){ x_int[i]=ed[i].x1;
 j++;
}
}
else { x_int[j]=inter_x[i]+(-m[i]); inter_x[i]=x_int[j];
j++;
}
}
}
for(i=0;i<j:i++){
 for(k=0;k<j-1;k++ ){
 if(x_int[k]>x int[k+1])X temp=(int)x int[k]; x_int[kļ=x_int|k+1];
x_ int[k+1]=temp;
}
}
}
 for(i=0;i<j;i=i+2){
 line((int)x_ int[i].yy.(int)x_ int[i+1],yy):
}
yy--;
}
getch():
}
