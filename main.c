#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#define p printf
#define g gotoxy
#define s sleep

/**< DEVELOPER: GhostPoltergeist */

COORD co = {0,0};
void gotoxy(int x, int y)
{
 co.X=x;
 co.Y=y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),co );
}

int main()
{
system("COLOR 70");
p("                                                                                                                \n");
p("     |HAVE A GOOD DAY: %s|   |JAPANESE DRINKS VENDING MACHINE|                                                  \n",__TIME__);
p("     ________________________________________________________________________________________________________   \n");
p("       _    _                                                  _   _                                            \n");
p("       |   /                       /    ,                      /  /|                   /      ,                 \n");
p("     --|--/------__-----__-----__-/----------__-----__--------/| /-|-----__-----__----/__----------__-----__-   \n");
p("       | /     /___)  /   )  /   /    /    /   )  /   )      / |/  |   / _ )  /   '  /   )  /    /   )  /___)   \n");
p("     __|/_____(___ __/___/__(___/____/____/___/__(___/______/__/___|__(___(__(___ __/___/__/____/___/__(___ _   \n");
p("                                                    /                                                           \n");
p("                                                (_ /                                                            \n");

p("\n");

/**< VARIABLE DECLARATIONS FOR THE VALUE OF A SPECIFIC PRODUCT */

float ttl;
char drinks;
int ini;
int quan;
int cash;
int fruitjuice, cocacola, fanta, drpepper, minutemaid, aquarius, pocarisweat, georgia, lohas, milktea, rootbeer, gatorade, sunkist, mountaindew, lipton, royal, pepsi, redbull, ooiocha, swissmiss;

/**< PRICE OF A PRODUCTS /INTEGERS/ */

cocacola = 20;
fanta = 23;
drpepper = 25;
minutemaid = 30;
aquarius = 20;
pocarisweat = 35;
georgia = 27;
lohas = 28;
milktea = 34;
rootbeer = 15;
gatorade = 40;
sunkist = 20;
mountaindew = 16;
lipton = 18;
royal = 15;
pepsi = 15;
redbull = 30;
ooiocha = 17;
swissmiss = 28;
fruitjuice = 24;

p(" [VM]>> HELLO, PLEASE SPECIFY YOUR DRINKS, CHOOSE YOUR DRINKS BELOW\n");

/**< VARIABLE DECLARATION */

/**< SWITCH FUNCTIONS >> FOR THE OUTPUT OF VENDING MACHINE SYSTEM */

p("\n\n");
p(" [AVAIL. BEVERAGES]>[INDICATE YOUR DRINKS BY NUMBER] \n [A]CocaCola, [B]Fanta, [C]Dr. Pepper, [D]MinuteMaid, [E]Aquarius, [F]PocariSweat, [G]Georgia, \n [H]Lohas, [I]Milktea, [J]RootBeer, [K]gatorade, [L]swissmiss, \n [M]FruitJuice, [N]sunkist, [O]mountaindew, [P]lipton, [Q]royal, [R]pepsi, [S]redbull, [T]ooiocha \n\n >>: ", &drinks);
scanf("%s", &drinks);
switch(drinks)
{
 case 'A':
 p(" [VM]>>You Purchase CocaCola<<\n");
 s(2);
 p(" [$]Quantity>>: ");
 scanf("%d", &quan);
 s(2);
 p(" [VM]>> PROCESSING <<\n");
 s(1);
 p(" [$]Indicate your Cash>>: ");
 scanf("%d", &cash);
 ini = (quan * cocacola);
 ttl = (cash - ini);
 p("\n");
 p(" [VM]Your Change Is>>: %.2f", ttl);
 p("\n");
 break;

 case 'B':
 p(" [VM]>>You Purchase Fanta<<\n");
 s(2);
 p(" [$]Quantity>>: ");
 scanf("%d", &quan);
 s(2);
 p(" [VM]>> PROCESSING <<\n");
 s(1);
 p(" [$]Indicate your Cash>>: ");
 scanf("%d", &cash);
 ini = (quan * fanta);
 ttl = (cash - ini);
 p("\n");
 p(" [VM]Your Change Is>>: %.2f", ttl);
 p("\n");
 break;

  case 'C':
 p(" [VM]>>You Purchase Dr.Pepper<<\n");
 s(2);
 p(" [$]Quantity>>: ");
 scanf("%d", &quan);
 s(2);
 p(" [VM]>> PROCESSING <<\n");
 s(1);
 p(" [$]Indicate your Cash>>: ");
 scanf("%d", &cash);
 ini = (quan * drpepper);
 ttl = (cash - ini);
 p("\n");
 p(" [VM]Your Change Is>>: %.2f", ttl);
 p("\n");
 break;

   case 'D':
 p(" [VM]>>You Purchase MinuteMaid<<\n");
 s(2);
 p(" [$]Quantity>>: ");
 scanf("%d", &quan);
 s(2);
 p(" [VM]>> PROCESSING <<\n");
 s(1);
 p(" [$]Indicate your Cash>>: ");
 scanf("%d", &cash);
 ini = (quan * minutemaid);
 ttl = (cash - ini);
 p("\n");
 p(" [VM]Your Change Is>>: %.2f", ttl);
 p("\n");
 break;

   case 'E':
 p(" [VM]>>You Purchase Aquarias<<\n");
 s(2);
 p(" [$]Quantity>>: ");
 scanf("%d", &quan);
 s(2);
 p(" [VM]>> PROCESSING <<\n");
 s(1);
 p(" [$]Indicate your Cash>>: ");
 scanf("%d", &cash);
 ini = (quan * aquarius);
 ttl = (cash - ini);
 p("\n");
 p(" [VM]Your Change Is>>: %.2f", ttl);
 p("\n");
 break;

   case 'F':
 p(" [VM]>>You Purchase PocariSweat<<\n");
 s(2);
 p(" [$]Quantity>>: ");
 scanf("%d", &quan);
 s(2);
 p(" [VM]>> PROCESSING <<\n");
 s(1);
 p(" [$]Indicate your Cash>>: ");
 scanf("%d", &cash);
 ini = (quan * pocarisweat);
 ttl = (cash - ini);
 p("\n");
 p(" [VM]Your Change Is>>: %.2f", ttl);
 p("\n");
 break;

   case 'G':
 p(" [VM]>>You Purchase Georgia<<\n");
 s(2);
 p(" [$]Quantity>>: ");
 scanf("%d", &quan);
 s(2);
 p(" [VM]>> PROCESSING <<\n");
 s(1);
 p(" [$]Indicate your Cash>>: ");
 scanf("%d", &cash);
 ini = (quan * georgia);
 ttl = (cash - ini);
 p("\n");
 p(" [VM]Your Change Is>>: %.2f", ttl);
 p("\n");
 break;

   case 'H':
 p(" [VM]>>You Purchase Lohas<<\n");
 s(2);
 p(" [$]Quantity>>: ");
 scanf("%d", &quan);
 s(2);
 p(" [VM]>> PROCESSING <<\n");
 s(1);
 p(" [$]Indicate your Cash>>: ");
 scanf("%d", &cash);
 ini = (quan * lohas);
 ttl = (cash - ini);
 p("\n");
 p(" [VM]Your Change Is>>: %.2f", ttl);
 p("\n");
 break;

    case 'I':
 p(" [VM]>>You Purchase Lohas<<\n");
 s(2);
 p(" [$]Quantity>>: ");
 scanf("%d", &quan);
 s(2);
 p(" [VM]>> PROCESSING <<\n");
 s(1);
 p(" [$]Indicate your Cash>>: ");
 scanf("%d", &cash);
 ini = (quan * milktea);
 ttl = (cash - ini);
 p("\n");
 p(" [VM]Your Change Is>>: %.2f", ttl);
 p("\n");
 break;

    case 'J':
 p(" [VM]>>You Purchase Lohas<<\n");
 s(2);
 p(" [$]Quantity>>: ");
 scanf("%d", &quan);
 s(2);
 p(" [VM]>> PROCESSING <<\n");
 s(1);
 p(" [$]Indicate your Cash>>: ");
 scanf("%d", &cash);
 ini = (quan * rootbeer);
 ttl = (cash - ini);
 p("\n");
 p(" [VM]Your Change Is>>: %.2f", ttl);
 p("\n");
 break;

    case 'K':
 p(" [VM]>>You Purchase Gatorade<<\n");
 s(2);
 p(" [$]Quantity>>: ");
 scanf("%d", &quan);
 s(2);
 p(" [VM]>> PROCESSING <<\n");
 s(1);
 p(" [$]Indicate your Cash>>: ");
 scanf("%d", &cash);
 ini = (quan * gatorade);
 ttl = (cash - ini);
 p("\n");
 p(" [VM]Your Change Is>>: %.2f", ttl);
 p("\n");
 break;

    case 'L':
 p(" [VM]>>You Purchase SwissMiss<<\n");
 s(2);
 p(" [$]Quantity>>: ");
 scanf("%d", &quan);
 s(2);
 p(" [VM]>> PROCESSING <<\n");
 s(1);
 p(" [$]Indicate your Cash>>: ");
 scanf("%d", &cash);
 ini = (quan * swissmiss);
 ttl = (cash - ini);
 p("\n");
 p(" [VM]Your Change Is>>: %.2f", ttl);
 p("\n");
 break;

    case 'M':
 p(" [VM]>>You Purchase FruitJuice<<\n");
 s(2);
 p(" [$]Quantity>>: ");
 scanf("%d", &quan);
 s(2);
 p(" [VM]>> PROCESSING <<\n");
 s(1);
 p(" [$]Indicate your Cash>>: ");
 scanf("%d", &cash);
 ini = (quan * fruitjuice);
 ttl = (cash - ini);
 p("\n");
 p(" [VM]Your Change Is>>: %.2f", ttl);
 p("\n");
 break;

    case 'N':
 p(" [VM]>>You Purchase Sunkist<<\n");
 s(2);
 p(" [$]Quantity>>: ");
 scanf("%d", &quan);
 s(2);
 p(" [VM]>> PROCESSING <<\n");
 s(1);
 p(" [$]Indicate your Cash>>: ");
 scanf("%d", &cash);
 ini = (quan * sunkist);
 ttl = (cash - ini);
 p("\n");
 p(" [VM]Your Change Is>>: %.2f", ttl);
 p("\n");
 break;

    case 'O':
 p(" [VM]>>You Purchase MountainDew<<\n");
 s(2);
 p(" [$]Quantity>>: ");
 scanf("%d", &quan);
 s(2);
 p(" [VM]>> PROCESSING <<\n");
 s(1);
 p(" [$]Indicate your Cash>>: ");
 scanf("%d", &cash);
 ini = (quan * mountaindew);
 ttl = (cash - ini);
 p("\n");
 p(" [VM]Your Change Is>>: %.2f", ttl);
 p("\n");
 break;

    case 'P':
 p(" [VM]>>You Purchase Lipton<<\n");
 s(2);
 p(" [$]Quantity>>: ");
 scanf("%d", &quan);
 s(2);
 p(" [VM]>> PROCESSING <<\n");
 s(1);
 p(" [$]Indicate your Cash>>: ");
 scanf("%d", &cash);
 ini = (quan * lipton);
 ttl = (cash - ini);
 p("\n");
 p(" [VM]Your Change Is>>: %.2f", ttl);
 p("\n");
 break;

    case 'Q':
 p(" [VM]>>You Purchase Royal<<\n");
 s(2);
 p(" [$]Quantity>>: ");
 scanf("%d", &quan);
 s(2);
 p(" [VM]>> PROCESSING <<\n");
 s(1);
 p(" [$]Indicate your Cash>>: ");
 scanf("%d", &cash);
 ini = (quan * royal);
 ttl = (cash - ini);
 p("\n");
 p(" [VM]Your Change Is>>: %.2f", ttl);
 p("\n");
 break;

    case 'R':
 p(" [VM]>>You Purchase Pepsi<<\n");
 s(2);
 p(" [$]Quantity>>: ");
 scanf("%d", &quan);
 s(2);
 p(" [VM]>> PROCESSING <<\n");
 s(1);
 p(" [$]Indicate your Cash>>: ");
 scanf("%d", &cash);
 ini = (quan * pepsi);
 ttl = (cash - ini);
 p("\n");
 p(" [VM]Your Change Is>>: %.2f", ttl);
 p("\n");
 break;

    case 'S':
 p(" [VM]>>You Purchase RedBull<<\n");
 s(2);
 p(" [$]Quantity>>: ");
 scanf("%d", &quan);
 s(2);
 p(" [VM]>> PROCESSING <<\n");
 s(1);
 p(" [$]Indicate your Cash>>: ");
 scanf("%d", &cash);
 ini = (quan * redbull);
 ttl = (cash - ini);
 p("\n");
 p(" [VM]Your Change Is>>: %.2f", ttl);
 p("\n");
 break;

    case 'T':
 p(" [VM]>>You Purchase Ooiocha<<\n");
 s(2);
 p(" [$]Quantity>>: ");
 scanf("%d", &quan);
 s(2);
 p(" [VM]>> PROCESSING <<\n");
 s(1);
 p(" [$]Indicate your Cash>>: ");
 scanf("%d", &cash);
 ini = (quan * ooiocha);
 ttl = (cash - ini);
 p("\n");
 p(" [VM]Your Change Is>>: %.2f", ttl);
 p("\n");
 break;

 default:
    p("\n");
    p(" [VM]Please Indicate Your Drinks By Number<<");
    p("\n");

}
}
