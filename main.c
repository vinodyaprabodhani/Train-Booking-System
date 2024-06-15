#include <stdio.h>
#include <stdlib.h>

float ticketPrice;
float total;

int main()
{

    frontPage();
    lastpage();
}



void frontPage(){
    printf("\t\t\t\t     --------------------------------\n");
    printf("\t\t\t\t\t   TRAIN BOOKING SYSTEM\n");
    printf("\t\t\t\t\t---\t\t\       ---\n");
    printf("\t\t\t\t\t\   COLOMBO MAIN STATION\n");
    printf("\t\t\t\t     --------------------------------\n\n\n");
    printf("\t\t\t\t\t\Welcome To The System !!!!\n\n\n\n");



    printf("\t\t\t _____________________________________\n");
    printf("\t\t\t| RAILWAY STATION LINE| STATION CODE |\n");
    printf("\t\t\t| -----------------------------------|\n");
    printf("\t\t\t| Main Line           |      M       |\n");
    printf("\t\t\t| Kelani Line         |      K       |\n");
    printf("\t\t\t| Puththalam Line     |      P       |\n");
    printf("\t\t\t| Beach Side Line     |      B       |\n");
    printf("\t\t\t|____________________________________|\n\n");

    char line;
    printf("Enter line you want to go :");
    scanf(" %c",&line);
    switch(line){

case 'M':
     mainLine();
    break;
case 'K':
    kelaniLine();
    break;
case 'P':
    Puththalam();
    break;
case 'B':
    beachLine();
    break;
default:
    printf("Enter the correct character of line \n");

    }


 }

 void mainLine(){
     system("cls");
int mDestination;
    printf("\t\t\t _____________________________________________\n");
    printf("\t\t\t|  No    |Colombo to Badulla  | DISTANCE     |\n");
    printf("\t\t\t| -------------------------------------------|\n");
    printf("\t\t\t|  1     |      Maradana      |       2km    |\n");
    printf("\t\t\t|  2     |      Ragama        |      15km    |\n");
    printf("\t\t\t|  3     |      Polgahawela   |      74km    |\n");
    printf("\t\t\t|  4     |      Rambukkana    |      84km    |\n");
    printf("\t\t\t|  5     |      Peradeniya    |     115km    |\n");
    printf("\t\t\t|  6     |      Hatton        |     188km    |\n");
    printf("\t\t\t|  7     |      Nanu oya      |     207km    |\n");
    printf("\t\t\t|  8     |      Ella          |     198km    |\n");
    printf("\t\t\t|____________________________________________|\n\n");


printf("Enter the destination you want to go? ");
scanf("%d", &mDestination);

switch(mDestination){

case 1:
  Maradana();
  break;
case 2:
  Ragama();
  break;
case 3:
  Polgahawela();
  break;
case 4:
  Rambukkana();
  break;
case 5:
  Peradeniya ();
  break;
case 6:
  Hatton();
  break;
case 7:
  Nanu_oya();
  break;
case 8:
  Ella();
  break;


}


 }
 void kelaniLine(){
     system("cls");
int kDestination;
    printf("\t\t\t _________________________________________________\n");
    printf("\t\t\t|  No    |Colombo to Awissawella  |    DISTANCE  |\n");
    printf("\t\t\t| -----------------------------------------------|\n");
    printf("\t\t\t|  1     |      Maradana          |       2km    |\n");
    printf("\t\t\t|  2     |      Narahenpita       |       8km    |\n");
    printf("\t\t\t|  3     |      Nugegoda          |      11km    |\n");
    printf("\t\t\t|  4     |      Maharagama        |      16km    |\n");
    printf("\t\t\t|  5     |      Pannipitiya       |      19km    |\n");
    printf("\t\t\t|  6     |      Kottawa           |      21km    |\n");
    printf("\t\t\t|  7     |      Homagama          |      27km    |\n");
    printf("\t\t\t|  8     |      Meegoda           |      29km    |\n");
    printf("\t\t\t|  9     |      Padukka           |      37km    |\n");
    printf("\t\t\t| 10     |      Awissawella       |      61km    |\n");
    printf("\t\t\t|________________________________________________|\n\n");



printf("Enter the destination you want to go? ");
scanf("%d", &kDestination);

switch(kDestination){

case 1:
  Maradana();
  break;
case 2:
  Naranhenpita ();
  break;
case 3:
  Nugegoda ();
  break;
case 4:
  Maharagama ();
  break;
case 5:
  Pannipitiya ();
  break;
case 6:
  Kottawa();
  break;
case 7:
  Homagama();
  break;
case 8:
  Meegoda ();
  break;
case 9:
  Padukka();
  break;
case 10:
  Awissawella();
  break;

}


 }

 void Puththalam(){
     system("cls");
int pDestination;
    printf("\t\t\t _____________________________________________\n");
    printf("\t\t\t|  No    |Colombo to Puththalm|   DISTANCE   |\n");
    printf("\t\t\t| -------------------------------------------|\n");
    printf("\t\t\t|  1     |      Maradana      |       2km    |\n");
    printf("\t\t\t|  2     |      Ragama        |      15km    |\n");
    printf("\t\t\t|  3     |      ja-ela        |      74km    |\n");
    printf("\t\t\t|  4     |      Seeduwa       |      28km    |\n");
    printf("\t\t\t|  5     |      Katunayaka    |      32km    |\n");
    printf("\t\t\t|  6     |      Negombo       |      37km    |\n");
    printf("\t\t\t|  7     |      Chilaw        |      80km    |\n");
    printf("\t\t\t|  8     |      Noornagar     |     100km    |\n");
    printf("\t\t\t|  9     |      Puththalam    |     135km    |\n");
    printf("\t\t\t|____________________________________________|\n\n");


printf("Enter the destination you want to go? ");
scanf("%d", &pDestination);

switch(pDestination){

case 1:
  Maradana ();
  break;
case 2:
  Ragama ();
  break;
case 3:
  ja_ela();
  break;
case 4:
  seeduwa();
  break;
case 5:
  Katunayaka();
  break;
case 6:
  Negombo();
  break;
case 7:
  chilaw ();
  break;
case 8:
  noornagar  ();
  break;


}
 }
void beachLine(){
     system("cls");
int bDestination;
    printf("\t\t\t _____________________________________________\n");
    printf("\t\t\t|  No    |Colombo to beachside|   DISTANCE   |\n");
    printf("\t\t\t| -------------------------------------------|\n");
    printf("\t\t\t|  1     |      Dehiwala      |      10km    |\n");
    printf("\t\t\t|  2     |      Rathmalana    |      16km    |\n");
    printf("\t\t\t|  3     |      Moratuwa      |      19km    |\n");
    printf("\t\t\t|  4     |      Panadura      |      26km    |\n");
    printf("\t\t\t|  5     |      Kaluthara     |      41km    |\n");
    printf("\t\t\t|  6     |      Beruwala      |      54km    |\n");
    printf("\t\t\t|  7     |      Aluthgama     |      60km    |\n");
    printf("\t\t\t|  8     |      Ambalangoda   |      83km    |\n");
    printf("\t\t\t|  9     |      Hikkaduwa     |      96km    |\n");
    printf("\t\t\t| 10     |      Galle         |     126km    |\n");
    printf("\t\t\t|____________________________________________|\n\n");


printf("Enter the destination you want to go? ");
scanf("%d", &bDestination);

switch(bDestination){

case 1:
  Dehiwala();
  break;
case 2:
  Rathmalana ();
  break;
case 3:
  Moratuwa();
  break;
case 4:
  Panadura ();
  break;
case 5:
  Kaluthara();
  break;
case 6:
  Beruwala ();
  break;
case 7:
  Aluthgama();
  break;
case 8:
  Ambalangoda();
  break;
case 9:
  Hikkaduwa();
  break;
case 10:
  Galle();

}
 }


 void Maradana(){
     system("cls");
int quantity;int clz;
printf("Colombo to Maradana \n");
printf("Distance - 2KM\n");
printf("\t\t\t-------------------\n");
printf("\t\t\t  Ticket Price\n");
printf("\t\t\t| 1st | 2nd | 3rd |\n");
printf("\t\t\t| 40  | 30  | 20  |\n");
printf("\t\t\t-------------------\n");

printf("Enter the class :");
scanf("%d",&clz);
printf("Enter the quantity: ");
scanf("%d",&quantity);

switch(clz){
case 1:
    ticketPrice=40;
    total = ticketPrice * quantity;
    printf("Number of tickets %d \n" , quantity);
    printf("Total Ticket price %.2f \n\n\n\n",total);
    break;

case 2:
    ticketPrice=30;
    total = ticketPrice * quantity;
    printf("Number of tickets %d \n" , quantity);
    printf("Total Ticket price %.2f \n\n\n\n",total);
    break;

case 3:
    ticketPrice=20;
    total = ticketPrice * quantity;
    printf("Number of tickets %d \n" , quantity);
    printf("Total Ticket price %.2f \n\n\n\n",total);
    break;
}
 }

 void Ragama(){
     system("cls");
int quantity;int clz;
printf("Colombo to Ragama \n");
printf("Distance - 15KM\n");
printf("\t\t\t-------------------\n");
printf("\t\t\t  Ticket Price\n");
printf("\t\t\t| 1st | 2nd | 3rd |\n");
printf("\t\t\t| 40  | 30  | 20  |\n");
printf("\t\t\t-------------------\n");

printf("Enter the class :");
scanf("%d",&clz);
printf("Enter the quantity: ");
scanf("%d",&quantity);

switch(clz){
case 1:
    ticketPrice=40;
    total = ticketPrice * quantity;
    printf("Number of tickets %d \n" , quantity);
    printf("Total Ticket price %.2f \n\n\n\n",total);
    break;

case 2:
    ticketPrice=30;
    total = ticketPrice * quantity;
    printf("Number of tickets %d \n" , quantity);
    printf("Total Ticket price %.2f \n\n\n\n",total);
    break;

case 3:
    ticketPrice=20;
    total = ticketPrice * quantity;
    printf("Number of tickets %d \n" , quantity);
    printf("Total Ticket price %.2f \n\n\n\n",total);
    break;
}

 }
 void  Polgahawela(){
     system("cls");
int quantity;int clz;
printf("Colombo to  Polgahawela\n");
printf("Distance - 74KM\n");
printf("\t\t\t-------------------\n");
printf("\t\t\t    Ticket Price\n");
printf("\t\t\t| 1st | 2nd | 3rd |\n");
printf("\t\t\t| 40  | 30  | 20  |\n");
printf("\t\t\t-------------------\n");

printf("Enter the class :");
scanf("%d",&clz);
printf("Enter the quantity: ");
scanf("%d",&quantity);

switch(clz){
case 1:
    ticketPrice=40;
    total = ticketPrice * quantity;
    printf("Number of tickets %d \n" , quantity);
    printf("Total Ticket price %.2f \n\n\n\n",total);
    break;

case 2:
    ticketPrice=30;
    total = ticketPrice * quantity;
    printf("Number of tickets %d \n" , quantity);
    printf("Total Ticket price %.2f \n\n\n\n",total);
    break;

case 3:
    ticketPrice=20;
    total = ticketPrice * quantity;
    printf("Number of tickets %d \n" , quantity);
    printf("Total Ticket price %.2f \n\n\n\n",total);
    break;
}

 }
 void Rambukkana  (){
     system("cls");
int quantity;int clz;
printf("Colombo to Rambukkana   \n");
printf("Distance - 84KM\n");
printf("\t\t\t-------------------\n");
printf("\t\t\t   Ticket Price\n");
printf("\t\t\t| 1st | 2nd | 3rd |\n");
printf("\t\t\t| 40  | 30  | 20  |\n");
printf("\t\t\t-------------------\n");

printf("Enter the class :");
scanf("%d",&clz);
printf("Enter the quantity: ");
scanf("%d",&quantity);

switch(clz){
case 1:
    ticketPrice=40;
    total = ticketPrice * quantity;
    printf("Number of tickets %d \n" , quantity);
    printf("Total Ticket price %.2f \n\n\n\n",total);
    break;

case 2:
    ticketPrice=30;
    total = ticketPrice * quantity;
    printf("Number of tickets %d \n" , quantity);
    printf("Total Ticket price %.2f \n\n\n\n",total);
    break;

case 3:
    ticketPrice=20;
    total = ticketPrice * quantity;
    printf("Number of tickets %d \n" , quantity);
    printf("Total Ticket price %.2f \n\n\n\n",total);
    break;
}

 }
  void Peradeniya(){
     system("cls");
int quantity;int clz;
printf("Colombo to Peradeniya\n");
printf("Distance - 115KM\n");
printf("\t\t\t-------------------\n");
printf("\t\t\t  Ticket Price\n");
printf("\t\t\t| 1st | 2nd | 3rd |\n");
printf("\t\t\t| 40  | 30  | 20  |\n");
printf("\t\t\t-------------------\n");

printf("Enter the class :");
scanf("%d",&clz);
printf("Enter the quantity: ");
scanf("%d",&quantity);

switch(clz){
case 1:
    ticketPrice=40;
    total = ticketPrice * quantity;
    printf("Number of tickets %d \n" , quantity);
    printf("Total Ticket price %.2f \n\n\n\n",total);
    break;

case 2:
    ticketPrice=30;
    total = ticketPrice * quantity;
    printf("Number of tickets %d \n" , quantity);
    printf("Total Ticket price %.2f \n\n\n\n",total);
    break;

case 3:
    ticketPrice=20;
    total = ticketPrice * quantity;
    printf("Number of tickets %d \n" , quantity);
    printf("Total Ticket price %.2f \n\n\n\n",total);
    break;
}

 }

 void  Hatton    (){
     system("cls");
int quantity;int clz;
printf("Colombo to  Hatton      \n");
printf("Distance - 188KM\n");
printf("\t\t\t-------------------\n");
printf("\t\t\t    Ticket Price\n");
printf("\t\t\t| 1st | 2nd | 3rd |\n");
printf("\t\t\t| 40  | 30  | 20  |\n");
printf("\t\t\t-------------------\n");

printf("Enter the class :");
scanf("%d",&clz);
printf("Enter the quantity: ");
scanf("%d",&quantity);

switch(clz){
case 1:
    ticketPrice=40;
    total = ticketPrice * quantity;
    printf("Number of tickets %d \n" , quantity);
    printf("Total Ticket price %.2f \n\n\n\n",total);
    break;

case 2:
    ticketPrice=30;
    total = ticketPrice * quantity;
    printf("Number of tickets %d \n" , quantity);
    printf("Total Ticket price %.2f \n\n\n\n",total);
    break;

case 3:
    ticketPrice=20;
    total = ticketPrice * quantity;
    printf("Number of tickets %d \n" , quantity);
    printf("Total Ticket price %.2f \n\n\n\n",total);
    break;
}

 }
void Nanu_oya(){
     system("cls");
int quantity;int clz;
printf("Colombo to Nanu oya  \n");
printf("Distance - 207KM\n");
printf("\t\t\t-------------------\n");
printf("\t\t\t   Ticket Price\n");
printf("\t\t\t| 1st | 2nd | 3rd |\n");
printf("\t\t\t| 40  | 30  | 20  |\n");
printf("\t\t\t-------------------\n");

printf("Enter the class :");
scanf("%d",&clz);
printf("Enter the quantity: ");
scanf("%d",&quantity);

switch(clz){
case 1:
    ticketPrice=40;
    total = ticketPrice * quantity;
    printf("Number of tickets %d \n" , quantity);
    printf("Total Ticket price %.2f \n\n\n\n",total);
    break;

case 2:
    ticketPrice=30;
    total = ticketPrice * quantity;
    printf("Number of tickets %d \n" , quantity);
    printf("Total Ticket price %.2f \n\n\n\n",total);
    break;

case 3:
    ticketPrice=20;
    total = ticketPrice * quantity;
    printf("Number of tickets %d \n" , quantity);
    printf("Total Ticket price %.2f \n\n\n\n",total);
    break;
}

 }
void  Ella (){
     system("cls");
int quantity;int clz;
printf("Colombo to  Ella  \n");
printf("Distance - 198KM\n");
printf("\t\t\t-------------------\n");
printf("\t\t\t    Ticket Price\n");
printf("\t\t\t| 1st | 2nd | 3rd |\n");
printf("\t\t\t| 40  | 30  | 20  |\n");
printf("\t\t\t-------------------\n");

printf("Enter the class :");
scanf("%d",&clz);
printf("Enter the quantity: ");
scanf("%d",&quantity);

switch(clz){
case 1:
    ticketPrice=40;
    total = ticketPrice * quantity;
    printf("Number of tickets %d \n" , quantity);
    printf("Total Ticket price %.2f \n\n\n\n",total);
    break;

case 2:
    ticketPrice=30;
    total = ticketPrice * quantity;
    printf("Number of tickets %d \n" , quantity);
    printf("Total Ticket price %.2f \n\n\n\n",total);
    break;

case 3:
    ticketPrice=20;
    total = ticketPrice * quantity;
    printf("Number of tickets %d \n" , quantity);
    printf("Total Ticket price %.2f \n\n\n\n",total);
    break;
}

 }


 void   Naranhenpita     (){
     system("cls");
int quantity;int clz;
printf("Colombo to  Naranhenpita  \n");
printf("Distance - 8KM\n");
printf("\t\t\t-------------------\n");
printf("\t\t\t    Ticket Price\n");
printf("\t\t\t| 1st | 2nd | 3rd |\n");
printf("\t\t\t| 40  | 30  | 20  |\n");
printf("\t\t\t-------------------\n");

printf("Enter the class :");
scanf("%d",&clz);
printf("Enter the quantity: ");
scanf("%d",&quantity);

switch(clz){
case 1:
    ticketPrice=40;
    total = ticketPrice * quantity;
    printf("Number of tickets %d \n" , quantity);
    printf("Total Ticket price %.2f \n\n\n\n",total);
    break;

case 2:
    ticketPrice=30;
    total = ticketPrice * quantity;
    printf("Number of tickets %d \n" , quantity);
    printf("Total Ticket price %.2f \n\n\n\n",total);
    break;

case 3:
    ticketPrice=20;
    total = ticketPrice * quantity;
    printf("Number of tickets %d \n" , quantity);
    printf("Total Ticket price %.2f \n\n\n\n",total);
    break;
}

 }

void Nugegoda       (){
     system("cls");
int quantity;int clz;
printf("Colombo to Nugegoda   \n");
printf("Distance - 11KM\n");
printf("\t\t\t-------------------\n");
printf("\t\t\t   Ticket Price\n");
printf("\t\t\t| 1st | 2nd | 3rd |\n");
printf("\t\t\t| 40  | 30  | 20  |\n");
printf("\t\t\t-------------------\n");

printf("Enter the class :");
scanf("%d",&clz);
printf("Enter the quantity: ");
scanf("%d",&quantity);

switch(clz){
case 1:
    ticketPrice=40;
    total = ticketPrice * quantity;
    printf("Number of tickets %d \n" , quantity);
    printf("Total Ticket price %.2f \n\n\n\n",total);
    break;

case 2:
    ticketPrice=30;
    total = ticketPrice * quantity;
    printf("Number of tickets %d \n" , quantity);
    printf("Total Ticket price %.2f \n\n\n\n",total);
    break;

case 3:
    ticketPrice=20;
    total = ticketPrice * quantity;
    printf("Number of tickets %d \n" , quantity);
    printf("Total Ticket price %.2f \n\n\n\n",total);
    break;
}

 }
void  Maharagama      (){
     system("cls");
int quantity;int clz;
printf("Colombo to Maharagama  \n");
printf("Distance - 16KM\n");
printf("\t\t\t-------------------\n");
printf("\t\t\t    Ticket Price\n");
printf("\t\t\t| 1st | 2nd | 3rd |\n");
printf("\t\t\t| 40  | 30  | 20  |\n");
printf("\t\t\t-------------------\n");

printf("Enter the class :");
scanf("%d",&clz);
printf("Enter the quantity: ");
scanf("%d",&quantity);

switch(clz){
case 1:
    ticketPrice=40;
    total = ticketPrice * quantity;
    printf("Number of tickets %d \n" , quantity);
    printf("Total Ticket price %.2f \n\n\n\n",total);
    break;

case 2:
    ticketPrice=30;
    total = ticketPrice * quantity;
    printf("Number of tickets %d \n" , quantity);
    printf("Total Ticket price %.2f \n\n\n\n",total);
    break;

case 3:
    ticketPrice=20;
    total = ticketPrice * quantity;
    printf("Number of tickets %d \n" , quantity);
    printf("Total Ticket price %.2f \n\n\n\n",total);
    break;
}

 }

 void  Pannipitiya     (){
     system("cls");
int quantity;int clz;
printf("Colombo to Pannipitiya  \n");
printf("Distance - 19KM\n");
printf("\t\t\t-------------------\n");
printf("\t\t\t    Ticket Price\n");
printf("\t\t\t| 1st | 2nd | 3rd |\n");
printf("\t\t\t| 40  | 30  | 20  |\n");
printf("\t\t\t-------------------\n");

printf("Enter the class :");
scanf("%d",&clz);
printf("Enter the quantity: ");
scanf("%d",&quantity);

switch(clz){
case 1:
    ticketPrice=40;
    total = ticketPrice * quantity;
    printf("Number of tickets %d \n" , quantity);
    printf("Total Ticket price %.2f \n\n\n\n",total);
    break;

case 2:
    ticketPrice=30;
    total = ticketPrice * quantity;
    printf("Number of tickets %d \n" , quantity);
    printf("Total Ticket price %.2f \n\n\n\n",total);
    break;

case 3:
    ticketPrice=20;
    total = ticketPrice * quantity;
    printf("Number of tickets %d \n" , quantity);
    printf("Total Ticket price %.2f \n\n\n\n",total);
    break;
}

 }
 void Kottawa (){
     system("cls");
int quantity;int clz;
printf("Colombo to Kottawa \n");
printf("Distance - 21KM\n");
printf("\t\t\t-------------------\n");
printf("\t\t\t   Ticket Price\n");
printf("\t\t\t| 1st | 2nd | 3rd |\n");
printf("\t\t\t| 40  | 30  | 20  |\n");
printf("\t\t\t-------------------\n");

printf("Enter the class :");
scanf("%d",&clz);
printf("Enter the quantity: ");
scanf("%d",&quantity);

switch(clz){
case 1:
    ticketPrice=40;
    total = ticketPrice * quantity;
    printf("Number of tickets %d \n" , quantity);
    printf("Total Ticket price %.2f \n\n\n\n",total);
    break;

case 2:
    ticketPrice=30;
    total = ticketPrice * quantity;
    printf("Number of tickets %d \n" , quantity);
    printf("Total Ticket price %.2f \n\n\n\n",total);
    break;

case 3:
    ticketPrice=20;
    total = ticketPrice * quantity;
    printf("Number of tickets %d \n" , quantity);
    printf("Total Ticket price %.2f \n\n\n\n",total);
    break;
}
 }

 void Homagama (){
     system("cls");
int quantity;int clz;
printf("Colombo to Homagama \n");
printf("Distance - 27KM\n");
printf("\t\t\t-------------------\n");
printf("\t\t\t    Ticket Price\n");
printf("\t\t\t| 1st | 2nd | 3rd |\n");
printf("\t\t\t| 40  | 30  | 20  |\n");
printf("\t\t\t-------------------\n");

printf("Enter the class :");
scanf("%d",&clz);
printf("Enter the quantity: ");
scanf("%d",&quantity);

switch(clz){
case 1:
    ticketPrice=40;
    total = ticketPrice * quantity;
    printf("Number of tickets %d \n" , quantity);
    printf("Total Ticket price %.2f \n\n\n\n",total);
    break;

case 2:
    ticketPrice=30;
    total = ticketPrice * quantity;
    printf("Number of tickets %d \n" , quantity);
    printf("Total Ticket price %.2f \n\n\n\n",total);
    break;

case 3:
    ticketPrice=20;
    total = ticketPrice * quantity;
    printf("Number of tickets %d \n" , quantity);
    printf("Total Ticket price %.2f \n\n\n\n",total);
    break;
}

 }
 void Meegoda (){
     system("cls");
int quantity;int clz;
printf("Colombo to Meegoda \n");
printf("Distance - 29KM\n");
printf("\t\t\t-------------------\n");
printf("\t\t\t    Ticket Price\n");
printf("\t\t\t| 1st | 2nd | 3rd |\n");
printf("\t\t\t| 40  | 30  | 20  |\n");
printf("\t\t\t-------------------\n");

printf("Enter the class :");
scanf("%d",&clz);
printf("Enter the quantity: ");
scanf("%d",&quantity);

switch(clz){
case 1:
    ticketPrice=40;
    total = ticketPrice * quantity;
    printf("Number of tickets %d \n" , quantity);
    printf("Total Ticket price %.2f \n\n\n\n",total);
    break;

case 2:
    ticketPrice=30;
    total = ticketPrice * quantity;
    printf("Number of tickets %d \n" , quantity);
    printf("Total Ticket price %.2f \n\n\n\n",total);
    break;

case 3:
    ticketPrice=20;
    total = ticketPrice * quantity;
    printf("Number of tickets %d \n" , quantity);
    printf("Total Ticket price %.2f \n\n\n\n",total);
    break;
}

 }
 void  Padukka      (){
     system("cls");
int quantity;int clz;
printf("Colombo to Padukka   \n");
printf("Distance - 37KM\n");
printf("\t\t\t-------------------\n");
printf("\t\t\t   Ticket Price\n");
printf("\t\t\t| 1st | 2nd | 3rd |\n");
printf("\t\t\t| 40  | 30  | 20  |\n");
printf("\t\t\t-------------------\n");

printf("Enter the class :");
scanf("%d",&clz);
printf("Enter the quantity: ");
scanf("%d",&quantity);

switch(clz){
case 1:
    ticketPrice=40;
    total = ticketPrice * quantity;
    printf("Number of tickets %d \n" , quantity);
    printf("Total Ticket price %.2f \n\n\n\n",total);
    break;

case 2:
    ticketPrice=30;
    total = ticketPrice * quantity;
    printf("Number of tickets %d \n" , quantity);
    printf("Total Ticket price %.2f \n\n\n\n",total);
    break;

case 3:
    ticketPrice=20;
    total = ticketPrice * quantity;
    printf("Number of tickets %d \n" , quantity);
    printf("Total Ticket price %.2f \n\n\n\n",total);
    break;
}

 }
void Awissawella(){
     system("cls");
int quantity;int clz;
printf("Colombo to Awissawella   \n");
printf("Distance - 61KM  \n");
printf("-------------------\n");
printf("\t\t\t    Ticket Price\n");
printf("\t\t\t| 1st | 2nd | 3rd |\n");
printf("\t\t\t| 40  | 30  | 20  |\n");
printf("\t\t\t-------------------\n");

printf("Enter the class :");
scanf("%d",&clz);
printf("Enter the quantity: ");
scanf("%d",&quantity);

switch(clz){
case 1:
    ticketPrice=40;
    total = ticketPrice * quantity;
    printf("Number of tickets %d \n" , quantity);
    printf("Total Ticket price %.2f \n\n\n\n",total);
    break;

case 2:
    ticketPrice=30;
    total = ticketPrice * quantity;
    printf("Number of tickets %d \n" , quantity);
    printf("Total Ticket price %.2f \n\n\n\n",total);
    break;

case 3:
    ticketPrice=20;
    total = ticketPrice * quantity;
    printf("Number of tickets %d \n" , quantity);
    printf("Total Ticket price %.2f \n\n\n\n",total);
    break;
}

 }
 void ja_ela(){
     system("cls");
int quantity;int clz;
printf("Colombo to  ja-ela \n");
printf("Distance - 74KM\n");
printf("\t\t\t-------------------\n");
printf("\t\t\t    Ticket Price\n");
printf("\t\t\t| 1st | 2nd | 3rd |\n");
printf("\t\t\t| 40  | 30  | 20  |\n");
printf("\t\t\t-------------------\n");

printf("Enter the class :");
scanf("%d",&clz);
printf("Enter the quantity: ");
scanf("%d",&quantity);

switch(clz){
case 1:
    ticketPrice=40;
    total = ticketPrice * quantity;
    printf("Number of tickets %d \n" , quantity);
    printf("Total Ticket price %.2f \n\n\n\n",total);
    break;

case 2:
    ticketPrice=30;
    total = ticketPrice * quantity;
    printf("Number of tickets %d \n" , quantity);
    printf("Total Ticket price %.2f \n\n\n\n",total);
    break;

case 3:
    ticketPrice=20;
    total = ticketPrice * quantity;
    printf("Number of tickets %d \n" , quantity);
    printf("Total Ticket price %.2f \n\n\n\n",total);
    break;
}

 }

void seeduwa(){
     system("cls");
int quantity;int clz;
printf("Colombo to seeduwa \n");
printf("Distance - 28KM\n");
printf("\t\t\t-------------------\n");
printf("\t\t\t   Ticket Price\n");
printf("\t\t\t| 1st | 2nd | 3rd |\n");
printf("\t\t\t| 40  | 30  | 20  |\n");
printf("\t\t\t-------------------\n");

printf("Enter the class :");
scanf("%d",&clz);
printf("Enter the quantity: ");
scanf("%d",&quantity);

switch(clz){
case 1:
    ticketPrice=40;
    total = ticketPrice * quantity;
    printf("Number of tickets %d \n" , quantity);
    printf("Total Ticket price %.2f \n",total);
    break;

case 2:
    ticketPrice=30;
    total = ticketPrice * quantity;
    printf("Number of tickets %d \n" , quantity);
    printf("Total Ticket price %.2f \n",total);
    break;

case 3:
    ticketPrice=20;
    total = ticketPrice * quantity;
    printf("Number of tickets %d \n" , quantity);
    printf("Total Ticket price %.2f \n\n\n\n",total);
    break;
}

 }
void  Negombo    (){
     system("cls");
int quantity;int clz;
printf("Colombo to Negombo \n");
printf("Distance - 37KM\n");
printf("\t\t\t-------------------\n");
printf("\t\t\t    Ticket Price\n");
printf("\t\t\t| 1st | 2nd | 3rd |\n");
printf("\t\t\t| 40  | 30  | 20  |\n");
printf("\t\t\t-------------------\n");

printf("Enter the class :");
scanf("%d",&clz);
printf("Enter the quantity: ");
scanf("%d",&quantity);

switch(clz){
case 1:
    ticketPrice=40;
    total = ticketPrice * quantity;
    printf("Number of tickets %d \n" , quantity);
    printf("Total Ticket price %.2f \n\n\n\n",total);
    break;

case 2:
    ticketPrice=30;
    total = ticketPrice * quantity;
    printf("Number of tickets %d \n" , quantity);
    printf("Total Ticket price %.2f \n\n\n\n",total);
    break;

case 3:
    ticketPrice=20;
    total = ticketPrice * quantity;
    printf("Number of tickets %d \n" , quantity);
    printf("Total Ticket price %.2f \n\n\n\n",total);
    break;
}

 }

 void  Katunayaka    (){
     system("cls");
int quantity;int clz;
printf("Colombo to Katunayaka  \n");
printf("Distance - 32KM\n");
printf("\t\t\t-------------------\n");
printf("\t\t\t   Ticket Price\n");
printf("\t\t\t| 1st | 2nd | 3rd |\n");
printf("\t\t\t| 40  | 30  | 20  |\n");
printf("\t\t\t-------------------\n");

printf("Enter the class :");
scanf("%d",&clz);
printf("Enter the quantity: ");
scanf("%d",&quantity);

switch(clz){
case 1:
    ticketPrice=40;
    total = ticketPrice * quantity;
    printf("Number of tickets %d \n" , quantity);
    printf("Total Ticket price %.2f \n\n\n\n",total);
    break;

case 2:
    ticketPrice=30;
    total = ticketPrice * quantity;
    printf("Number of tickets %d \n" , quantity);
    printf("Total Ticket price %.2f \n\n\n\n",total);
    break;

case 3:
    ticketPrice=20;
    total = ticketPrice * quantity;
    printf("Number of tickets %d \n" , quantity);
    printf("Total Ticket price %.2f \n\n\n\n",total);
    break;
}

 }
 void chilaw (){
     system("cls");
int quantity;int clz;
printf("Colombo to Chilaw  \n");
printf("Distance - 80KM\n");
printf("\t\t\t-------------------\n");
printf("\t\t\t   Ticket Price\n");
printf("\t\t\t| 1st | 2nd | 3rd |\n");
printf("\t\t\t| 40  | 30  | 20  |\n");
printf("\t\t\t-------------------\n");

printf("Enter the class :");
scanf("%d",&clz);
printf("Enter the quantity: ");
scanf("%d",&quantity);

switch(clz){
case 1:
    ticketPrice=40;
    total = ticketPrice * quantity;
    printf("Number of tickets %d \n" , quantity);
    printf("Total Ticket price %.2f \n\n\n\n",total);
    break;

case 2:
    ticketPrice=30;
    total = ticketPrice * quantity;
    printf("Number of tickets %d \n" , quantity);
    printf("Total Ticket price %.2f \n\n\n\n",total);
    break;

case 3:
    ticketPrice=20;
    total = ticketPrice * quantity;
    printf("Number of tickets %d \n" , quantity);
    printf("Total Ticket price %.2f \n\n\n\n",total);
    break;
}

 }

 void noornagar (){
     system("cls");
int quantity;int clz;
printf("Colombo to Noornagar \n");
printf("Distance - 100KM\n");
printf("\t\t\t-------------------\n");
printf("\t\t\t   Ticket Price\n");
printf("\t\t\t| 1st | 2nd | 3rd |\n");
printf("\t\t\t| 40  | 30  | 20  |\n");
printf("\t\t\t-------------------\n");

printf("Enter the class :");
scanf("%d",&clz);
printf("Enter the quantity: ");
scanf("%d",&quantity);

switch(clz){
case 1:
    ticketPrice=40;
    total = ticketPrice * quantity;
    printf("Number of tickets %d \n" , quantity);
    printf("Total Ticket price %.2f \n\n\n\n",total);
    break;

case 2:
    ticketPrice=30;
    total = ticketPrice * quantity;
    printf("Number of tickets %d \n" , quantity);
    printf("Total Ticket price %.2f \n\n\n\n",total);
    break;

case 3:
    ticketPrice=20;
    total = ticketPrice * quantity;
    printf("Number of tickets %d \n" , quantity);
    printf("Total Ticket price %.2f \n\n\n\n",total);
    break;
}

 }
 void Dehiwala (){
     system("cls");
int quantity;int clz;
printf("Colombo to Dehiwala\n");
printf("Distance - 10KM\n");
printf("\t\t\t-------------------\n");
printf("\t\t\t   Ticket Price\n");
printf("\t\t\t| 1st | 2nd | 3rd |\n");
printf("\t\t\t| 40  | 30  | 20  |\n");
printf("\t\t\t-------------------\n");

printf("Enter the class :");
scanf("%d",&clz);
printf("Enter the quantity: ");
scanf("%d",&quantity);

switch(clz){
case 1:
    ticketPrice=40;
    total = ticketPrice * quantity;
    printf("Number of tickets %d \n" , quantity);
    printf("Total Ticket price %.2f \n\n\n\n",total);
    break;

case 2:
    ticketPrice=30;
    total = ticketPrice * quantity;
    printf("Number of tickets %d \n" , quantity);
    printf("Total Ticket price %.2f \n\n\n\n",total);
    break;

case 3:
    ticketPrice=20;
    total = ticketPrice * quantity;
    printf("Number of tickets %d \n" , quantity);
    printf("Total Ticket price %.2f \n\n\n\n",total);
    break;
}

 }
 void  Rathmalana   (){
     system("cls");
int quantity;int clz;
printf("Colombo to Rathmalana   \n");
printf("Distance - 16KM\n");
printf("\t\t\t-------------------\n");
printf("\t\t\t   Ticket Price\n");
printf("\t\t\t| 1st | 2nd | 3rd |\n");
printf("\t\t\t| 40  | 30  | 20  |\n");
printf("\t\t\t-------------------\n");

printf("Enter the class :");
scanf("%d",&clz);
printf("Enter the quantity: ");
scanf("%d",&quantity);

switch(clz){
case 1:
    ticketPrice=40;
    total = ticketPrice * quantity;
    printf("Number of tickets %d \n" , quantity);
    printf("Total Ticket price %.2f \n\n\n\n",total);
    break;

case 2:
    ticketPrice=30;
    total = ticketPrice * quantity;
    printf("Number of tickets %d \n" , quantity);
    printf("Total Ticket price %.2f \n\n\n\n",total);
    break;

case 3:
    ticketPrice=20;
    total = ticketPrice * quantity;
    printf("Number of tickets %d \n" , quantity);
    printf("Total Ticket price %.2f \n\n\n\n",total);
    break;
}

 }
void Moratuwa (){
     system("cls");
int quantity;int clz;
printf("Colombo to Moratuwa\n");
printf("Distance - 19KM\n");
printf("\t\t\t-------------------\n");
printf("\t\t\t   Ticket Price\n");
printf("\t\t\t| 1st | 2nd | 3rd |\n");
printf("\t\t\t| 40  | 30  | 20  |\n");
printf("\t\t\t-------------------\n");

printf("Enter the class :");
scanf("%d",&clz);
printf("Enter the quantity: ");
scanf("%d",&quantity);

switch(clz){
case 1:
    ticketPrice=40;
    total = ticketPrice * quantity;
    printf("Number of tickets %d \n" , quantity);
    printf("Total Ticket price %.2f \n\n\n\n",total);
    break;

case 2:
    ticketPrice=30;
    total = ticketPrice * quantity;
    printf("Number of tickets %d \n" , quantity);
    printf("Total Ticket price %.2f \n\n\n\n",total);
    break;

case 3:
    ticketPrice=20;
    total = ticketPrice * quantity;
    printf("Number of tickets %d \n" , quantity);
    printf("Total Ticket price %.2f \n\n\n\n",total);
    break;
}
 }
 void Panadura    (){
     system("cls");
int quantity;int clz;
printf("Colombo to Panadura \n");
printf("Distance - 26KM\n");
printf("\t\t\t-------------------\n");
printf("\t\t\t   Ticket Price\n");
printf("\t\t\t| 1st | 2nd | 3rd |\n");
printf("\t\t\t| 40  | 30  | 20  |\n");
printf("\t\t\t-------------------\n");

printf("Enter the class :");
scanf("%d",&clz);
printf("Enter the quantity: ");
scanf("%d",&quantity);

switch(clz){
case 1:
    ticketPrice=40;
    total = ticketPrice * quantity;
    printf("Number of tickets %d \n" , quantity);
    printf("Total Ticket price %.2f \n\n\n\n",total);
    break;

case 2:
    ticketPrice=30;
    total = ticketPrice * quantity;
    printf("Number of tickets %d \n" , quantity);
    printf("Total Ticket price %.2f \n\n\n\n",total);
    break;

case 3:
    ticketPrice=20;
    total = ticketPrice * quantity;
    printf("Number of tickets %d \n" , quantity);
    printf("Total Ticket price %.2f \n\n\n\n",total);
    break;
}
 }
 void Kaluthara (){
     system("cls");
int quantity;int clz;
printf("Colombo to Kaluthara  \n");
printf("Distance - 41KM\n");
printf("\t\t\t-------------------\n");
printf("\t\t\t   Ticket Price\n");
printf("\t\t\t| 1st | 2nd | 3rd |\n");
printf("\t\t\t| 40  | 30  | 20  |\n");
printf("\t\t\t-------------------\n");

printf("Enter the class :");
scanf("%d",&clz);
printf("Enter the quantity: ");
scanf("%d",&quantity);

switch(clz){
case 1:
    ticketPrice=40;
    total = ticketPrice * quantity;
    printf("Number of tickets %d \n" , quantity);
    printf("Total Ticket price %.2f \n\n\n\n",total);
    break;

case 2:
    ticketPrice=30;
    total = ticketPrice * quantity;
    printf("Number of tickets %d \n" , quantity);
    printf("Total Ticket price %.2f \n\n\n\n",total);
    break;

case 3:
    ticketPrice=20;
    total = ticketPrice * quantity;
    printf("Number of tickets %d \n" , quantity);
    printf("Total Ticket price %.2f \n\n\n\n",total);
    break;
}
 }

 void Beruwala (){
     system("cls");
int quantity;int clz;
printf("Colombo to Beruwala \n");
printf("Distance - 54KM\n");
printf("\t\t\t-------------------\n");
printf("\t\t\t   Ticket Price\n");
printf("\t\t\t| 1st | 2nd | 3rd |\n");
printf("\t\t\t| 40  | 30  | 20  |\n");
printf("\t\t\t-------------------\n");

printf("Enter the class :");
scanf("%d",&clz);
printf("Enter the quantity: ");
scanf("%d",&quantity);

switch(clz){
case 1:
    ticketPrice=40;
    total = ticketPrice * quantity;
    printf("Number of tickets %d \n" , quantity);
    printf("Total Ticket price %.2f \n\n\n\n",total);
    break;

case 2:
    ticketPrice=30;
    total = ticketPrice * quantity;
    printf("Number of tickets %d \n" , quantity);
    printf("Total Ticket price %.2f \n\n\n\n",total);
    break;

case 3:
    ticketPrice=20;
    total = ticketPrice * quantity;
    printf("Number of tickets %d \n" , quantity);
    printf("Total Ticket price %.2f \n\n\n\n",total);
    break;
}
 }
 void Aluthgama(){
     system("cls");
int quantity;int clz;
printf("Colombo to Aluthgama\n");
printf("Distance - 60KM\n");
printf("\t\t\t-------------------\n");
printf("\t\t\t   Ticket Price\n");
printf("\t\t\t| 1st | 2nd | 3rd |\n");
printf("\t\t\t| 40  | 30  | 20  |\n");
printf("\t\t\t-------------------\n");

printf("Enter the class :");
scanf("%d",&clz);
printf("Enter the quantity: ");
scanf("%d",&quantity);

switch(clz){
case 1:
    ticketPrice=40;
    total = ticketPrice * quantity;
    printf("Number of tickets %d \n" , quantity);
    printf("Total Ticket price %.2f \n\n\n\n",total);
    break;

case 2:
    ticketPrice=30;
    total = ticketPrice * quantity;
    printf("Number of tickets %d \n" , quantity);
    printf("Total Ticket price %.2f \n\n\n\n",total);
    break;

case 3:
    ticketPrice=20;
    total = ticketPrice * quantity;
    printf("Number of tickets %d \n" , quantity);
    printf("Total Ticket price %.2f \n\n\n\n",total);
    break;
}
 }
 void  Ambalangoda  (){
     system("cls");
int quantity;int clz;
printf("Colombo to Ambalangoda   \n");
printf("Distance - 83KM\n");
printf("\t\t\t-------------------\n");
printf("\t\t\t   Ticket Price\n");
printf("\t\t\t| 1st | 2nd | 3rd |\n");
printf("\t\t\t| 40  | 30  | 20  |\n");
printf("\t\t\t-------------------\n");

printf("Enter the class :");
scanf("%d",&clz);
printf("Enter the quantity: ");
scanf("%d",&quantity);

switch(clz){
case 1:
    ticketPrice=40;
    total = ticketPrice * quantity;
    printf("Number of tickets %d \n" , quantity);
    printf("Total Ticket price %.2f \n\n\n\n",total);
    break;

case 2:
    ticketPrice=30;
    total = ticketPrice * quantity;
    printf("Number of tickets %d \n" , quantity);
    printf("Total Ticket price %.2f \n\n\n\n",total);
    break;

case 3:
    ticketPrice=20;
    total = ticketPrice * quantity;
    printf("Number of tickets %d \n" , quantity);
    printf("Total Ticket price %.2f \n\n\n\n",total);
    break;
}
 }
void Hikkaduwa(){
     system("cls");
int quantity;int clz;
printf("Colombo to Hikkaduwa\n");
printf("Distance - 96KM\n");
printf("\t\t\t-------------------\n");
printf("\t\t\t    Ticket Price\n");
printf("\t\t\t| 1st | 2nd | 3rd |\n");
printf("\t\t\t| 40  | 30  | 20  |\n");
printf("\t\t\t-------------------\n");

printf("Enter the class :");
scanf("%d",&clz);
printf("Enter the quantity: ");
scanf("%d",&quantity);

switch(clz){
case 1:
    ticketPrice=40;
    total = ticketPrice * quantity;
    printf("Number of tickets %d \n" , quantity);
    printf("Total Ticket price %.2f \n\n\n\n",total);
    break;

case 2:
    ticketPrice=30;
    total = ticketPrice * quantity;
    printf("Number of tickets %d \n" , quantity);
    printf("Total Ticket price %.2f \n\n\n\n",total);
    break;

case 3:
    ticketPrice=20;
    total = ticketPrice * quantity;
    printf("Number of tickets %d \n" , quantity);
    printf("Total Ticket price %.2f \n\n\n\n",total);
    break;
}
 }
void Galle(){
     system("cls");
int quantity;int clz;
printf("Colombo to Galle \n");
printf("Distance - 126KM\n");
printf("\t\t\t-------------------\n");
printf("\t\t\t    Ticket Price\n");
printf("\t\t\t| 1st | 2nd | 3rd |\n");
printf("\t\t\t| 40  | 30  | 20  |\n");
printf("\t\t\t-------------------\n");

printf("Enter the class :");
scanf("%d",&clz);
printf("Enter the quantity: ");
scanf("%d",&quantity);

switch(clz){
case 1:
    ticketPrice=40;
    total = ticketPrice * quantity;
    printf("Number of tickets %d \n" , quantity);
    printf("Total Ticket price %.2f \n\n\n\n",total);
    break;

case 2:
    ticketPrice=30;
    total = ticketPrice * quantity;
    printf("Number of tickets %d \n" , quantity);
    printf("Total Ticket price %.2f \n\n\n\n",total);
    break;

case 3:
    ticketPrice=20;
    total = ticketPrice * quantity;
    printf("Number of tickets %d \n" , quantity);
    printf("Total Ticket price %.2f \n\n\n\n",total);
    break;
}
 }
void lastpage(){
    printf("\t\t\t---------------------------------------------------------------------------------\n");
    printf("\t\t\t|                                                                                |\n");
    printf("\t\t\t|                       Hope you enjoyed our service!                            |\n");
    printf("\t\t\t|                                 Thank You!                                     |\n");
    printf("\t\t\t|                                                                                |\n");
    printf("\t\t\t---------------------------------------------------------------------------------\n");
}
