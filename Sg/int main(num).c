#include <stdio.h>
int main()
{

/*int a;
printf("Add meg a számot: ");

scanf("%d", &a);

if ( a % 2 == 0)
{
   printf("A megadott szám páros");
}
else 
{
   printf("A megadott szám páratlan");
}

printf(a % 2 == 0 ? "A megadott szám páros" : "A megadott szám páratlan");
int a,b;
printf("Add meg az A számot: ");
scanf("%d", &a);
printf("Add meg a B számot: ");
scanf("%d", &b);

if (a<b)
{
   printf("Növekvő sorrend: %d %d",a,b);
}
else 
{
   printf("Növekvő sorrend: %d %d",b,a);
}
return 0;

int a;
printf("Add meg az A számot: ");

scanf("%d", &a);

if (a > 9 && a < 100)
{
   printf("A megadott szám kétjegyű");
}
else 
{
   printf("A megadott szám háromjegyű");
}
int b;
printf("Add meg a B számot: ");

scanf("%d", &b);
if (b<=9 || b >=100)
{
   printf("A megadott szám nem kétjegyű");
} 
else
{
   printf("A megadott szám kétjegyű");
}



return 0;


int a;
printf("Add meg az A számot: ");

scanf("%d", &a);

if (a < 10) 
{
   printf("A megadott szám nem egyjegyű!");
}
 else if (a < 100)
 {
   printf("A megadott szám kétjegyű!");
 }
else
{
   printf("A megadott szám három vagy több jegyű!");
}
return 0;

int a;
printf("Add meg az A számot: ");
scanf("%d", &a);

switch (a)
{
case 1:
printf("A megadott szám az egyes!");
   break;
   case 2:
printf("A megadott szám a kettes!");
   break;
   case 3:
printf("A megadott szám a hármas!");
   break;
   case 4:
printf("A megadott szám a négyes!");
   break;
   case 5:
printf("A megadott szám az ötös!");
   break;

default:
printf("A megadott szám nem 1 és 5 közötti szám!");
   break;
}
 
int a;
printf("Adj meg egy számot: ");
scanf("%d", &a);

switch (a)
{
case 5:
printf("O");
case 4:
printf("O");
case 3:
printf("O");
case 2:
printf("O");
case 1:
printf("O");
  
   
   
   
}
return 0;

int nap, ho, sz=0;
    printf("Add meg a honapot:\n"); scanf("%d", &ho);
    printf("Add meg a napot:\n"); scanf("%d", &nap);
    switch (ho)
    {
        case 2 : sz = 31; break;
        case 3 : sz = 59; break;
        case 4 : sz = 90; break;
        case 5 : sz = 120; break;
        case 6 : sz = 151; break;
        case 7 : sz = 181; break;
        case 8 : sz = 212; break;
        case 9 : sz = 243; break;
        case 10 : sz = 273; break;
        case 11 : sz = 304; break;
        case 12 : sz = 334;
    }
    sz = sz + nap; printf("Ez az ev %d. napja.",sz);
    return 0;

    int i;
    for ( i = 0; i <= 20; i += 2)
    {
      printf("%d ", i);
    }

    return 0;
    

    printf("Add meg az 'O' betűk számát! : ");
    int bekert;
    scanf("%d", &bekert);

    for ( int i = 0; i < bekert; i++)
    {
      printf("O ");
    }
      
     printf("Add meg az 'O' betűk számát! : ");
    int bekert;
    scanf("%d", &bekert);

    for ( int i = 0; i < bekert; i++)
    {
      if (i % 10 == 0)
      {
         printf("O ");
      }
      else{
      printf("o ");
      }
    }

    int i,n;
    float o=0, a;

    for ( i = 1; i <= 5; i++)
    {
      printf("Adj meg egy számot az össze adáshoz! : ");
      scanf("%d", &n);
      o += n;
    }
    a = o/5;
    printf("A be írt számok összege: %f \n",o);
    //printf("A be írt számok átlaga: %d \n",o/5);
    printf("A be írt számok átlaga: %f \n",a);
    

    int i,szam,osszeg =0;
    printf("Adj meg egy számot! : ");
    scanf("%d", &szam);

    for ( i = 1; i <= szam; i++)
    {
      osszeg+=i;
    }
    printf("Az összes szám összege 1-tol %d-ig, %d\n",szam, osszeg);
    
   
    int i, jelenlegiErtek, paratlenOsszeg = 0;
    int n;

    printf("Adja meg az 'n'-t (a sorozat értékeinek a számát) : ");
    scanf("%d", &n);

    for ( i = 1; i <= n; i++)
    {
      printf("Adjon meg egy erteket! : ");
      scanf("%d", &jelenlegiErtek);
      if (jelenlegiErtek % 2 != 0)
      {
         paratlenOsszeg += jelenlegiErtek;
      }
      
    }
    printf("Páratlan számok összege: %d \n",paratlenOsszeg);
    

    int i, j;

    for (i = 1; i <= 10; i++) 
    {
        for (j = 1; j <= 10; j++) 
        {
            printf("%d*%d=%-4d ", i, j, i * j);
        }
        printf("\n");
    }

    return 0;
   
 int i,j;
  int n;
  printf("Add meg az n-t! : ");
  scanf("%d", &n);
  for ( i = 1; i <= n; i++)
  {
   for ( j = 1; j <=i ; j++)
   {
      printf("%d ", j);
   }
   printf("\n");
   
  }

  int i,j;
  int n;
  printf("Add meg az n-t! : ");
  scanf("%d", &n);
  for ( i = 1; i <= n; i++)
  {
   for ( j = 1; j <=i ; j++)
   {
      printf("%d ", i);
   }
   printf("\n");
   
  }

   int i,j;
  int n;
  printf("Add meg az n-t! : ");
  scanf("%d", &n);
  for ( i = 1; i <= n; i++)
  {
   for ( j = 1; j <=i ; j++)
   {
      printf("O");
   }
   printf("\n");
   
  }
  
 int i = 1;
 while (i<=12)
 {
   printf("%d,",i);
   i++;
}

int j =1;
do
{
   printf("%d-",j);
   j++;
} while (j<=10);

int i = 0;
int n;
printf("Add meg az n-t! : ");
scanf("%d", &n);
while (i <= n)
{
   printf("O,");
   i++;
}

int i = 0;
int n;
printf("Add meg az n-t! : ");
scanf("%d", &n);
do
{
   printf("O,");
   i++;
} while (i <= n);


//printf("Add meg az n-t! : ");
//scanf("%d", &n);
int n;
do
{
   printf("Add meg az n-t! : ");
scanf("%d", &n);
} while (n != 0);
printf("Program vége!");


int n;
int sz = 0;
do
{
   printf("Add meg az n-t! : ");
scanf("%d", &n);
if (n != 0 && n % 2 == 0)
{
   sz++;
}

} while (n != 0);
printf("Párosok száma: %d", sz);

int n;
printf("Add meg az n-t! : ");
scanf("%d", &n);
int seged = 2;
while (n != 0)
{
   if (seged % 2 == 0)
   {
      printf("%d, ",seged);
      seged+=2;
   }
   n--;
}

//do-while
int ár;
int összeg = 0;
do
{
   printf("Adj meg egx árat-t! : ");
   scanf("%d", &ár);
   összeg+=ár;

} while (ár != 0);
printf("Teljes ár = %d", összeg);

//while
int ár;
int összeg = 0;
printf("Adj meg egy árat-t! : ");
scanf("%d", &ár);

while (ár != 0)
{
    összeg+=ár;
   printf("Adj meg egy árat-t! : ");
   scanf("%d", &ár);
  
}
printf("Teljes ár = %d", összeg);

int bekert;
int seged = 1;
int osszeg = 0;
printf("Adj meg egy számot! : ");
   scanf("%d", &bekert);
while (bekert >= seged)
{
   osszeg+=bekert;
   bekert--;
}
printf("Az összes szám összege %d-tol %d-ig, %d", seged,bekert,osszeg);



int i,j;
for ( i = 1; i <=10; i++)
{
   for ( j = 0; j <= 10; j++)
   {
      printf("%2d*%2d=%2d ",j,i,i*j);
   }
   printf("\n");
   
}
*/
int i,j;
i = 1;
while (i <=10)
{
   j=1;
   while (j<=10)
   {
      printf("%2d*%2d=%2d ",j,i,i*j);
      j++;
   }
   printf("\n");
   i++;
   
}




}
