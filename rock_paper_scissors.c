#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

void main()
{
  int a,b;
  int playerscore=0;
  int computerscore=0;
  char name[20];
srand(time(NULL));

printf("\t\t\t\t\t   |---WELLCOME TO mY GAME---|\n");
printf("\t\t\t\t\t\t--ENTER YOU NAME--\n\t\t\t\t\t");
gets(name);


for(int i=0; i<3;i++){
printf("\n enter 0 for rock \n enter 1 for paper\n enter 0 for seisor\n");
scanf("%d",&a);

printf("player no 2:");
printf("entered %d ", rand()%3);

b=rand()%2;

if (a=0 && b==0) {

   printf("\n\t\t\t\t\t\tits is a tie");
   computerscore = computerscore+1;

playerscore= playerscore+1;
}
else if (a=0&&  b==1) {
   printf("\n\t\t\t\t\t\tplayer no. 2 won");
 computerscore =computerscore+1;
}
else if (a=0 && b==2) {
   printf("\n\t\t\t\t\t\tplayer no. 1 won");

playerscore=playerscore+1;

}


else if (a=1 && b==0) {
   printf("\n\t\t\t\t\t\tyou won");

playerscore=playerscore+1;
}

else if (a=1&&  b==1) {
   printf("\n\t\t\t\t\t\tits a tie");
computerscore =computerscore+1;
playerscore=playerscore+1;
}

else if (a=1 && b==2) {
   printf("\n\t\t\t\t\t\tplayer no.2  won");
 computerscore =computerscore+1;
}


else if (a=2 && b==0) {
   printf("\n\t\t\t\t\t\tplayer no. 2 won");
 computerscore =computerscore+1;
}


else if (a=2&&  b==1) {
   printf("\n\t\t\t\t\t\tyou won");

playerscore=playerscore+1;
}

else if (a=2 && b==2) {
   printf("\n\t\t\t\t\t\tit is a tie");
   computerscore = computerscore+1;

playerscore=playerscore+1;
}


}



printf("\n\t\t\t\tyour score is: %d\n",playerscore);
printf("\t\t\t\tcomputers score is: %d\n",computerscore);
if (playerscore> computerscore) {
   printf("\t\t\t\t|-------YOU WON THE GAME------|");
}

else if (playerscore==computerscore) {
   printf("\t\t\t\t|-------NO ONE WON THE GAME-------");
}
else{printf("\t\t\t\\t|-------PUTER WON THE GAME-------|");}

}