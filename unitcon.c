UNIT CONVERTER PROGRAM
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
#define MAX 1000
void decTobin ();		//To Convert decimal to binary
void decTooct ();		//To Convert decimal to octal
void decTohex ();		//To covert decimal to Hexadecimal
void binTodec ();		//to Convert binary to decimal
void binTooct ();		//to convert binary to octal
void binTohex ();		//to convert binary to Hexadecimal
void octTodec ();		//to convert octal to decimal
void octTobin ();		//to convert octal to binary
void octTohex ();		//to convert octal to Hexadecimal
void hexTodec ();		//to covert Hexadecimal to decimal
void hexTobin ();		//to covert Hexadecimal to binary
void hexTooct ();		//to Convert Hexadecimal to octal
void main ()
{
  char category;
  int numChoice;
  int tempChoice;
  int currencyChoice;
  int massChoice;
  int lengthChoice;
  float userinputK;		//User inputed Kelvin
  int userinputF;		// User inputted Fahreinheit;
  int userinputC;		// User inputted Celsius;
  int userinputUSDtoEuro;	// User inputted for USD to EURO;
  int userinputINRtoUSD;	// User inputted for INR to USD;
  int userinputINRtoEuro;	// User inputted for INR to EURO;
  int userinputKg;		// User inputted for Kg;
  int userinputGrams;		// User inputted for Grams;
  int userinputPounds;		// User inputted for pounds
  int userinputcm;		// User inputted for Centimeter;
  int userinputfoot;		// User inputted for Foots;
  int userinputinch;		//User inputed for Inches;
  int userinputdm;		//User inputeed for Decimeter;
  int userinputmm;		//User inputted for Milli meter;
  int fahrenheitToCelcius;	// variable that stores the converted F->C;
  int celciusToFahrenheit;	// variable that stores the converted C->F;
  float kelvinTocelcius;	// variable that stores the converted K->C
  float kelvinTofahrenit;	// variable that stores the converted K->F
  float celciusTokelvin;	// variable that stores the converted C->K
  float fahrenheitTokelvin;	// variable that stores the converted F->K
  float USDtoEURO;		// varaible that stores the converted USD->EURO;
  float INRtoUSD;		// stores the converted INR->USD;
  float INRtoEURO;		// stores the converted INR->EURO;
  float KgToGrams;		// stores the converted Kg->Grams;
  float GramsToKg;		// stores the converted Grams->Kg;
  float KgToPounds;		// stores the converted Kg->Pounds;
  float cmTofoot;		// stores the converted cm->foot;
  float footTocm;		// stores the converted foot->cm;
  float inchTofoot;		// stores the converted inch->foot;
  float mmTodm;			// stores the converted mm->dm;
  float mmTocm;			// stores the converted mm->cm;
  printf ("*********Welcome to Unit Converter!*********\n");
  printf ("Here is a list of conversion to choose from: \n");
  printf("\nTemperature(T),\nCurrency(C),\nMass(M),\nLength(L),\nNumber system conversion(N),\nSpeed conversion(S),\nTime conversion (I)");
  printf ("\nPlease enter the letter you want to convert :  ");
  scanf ("%c", &category);
  if (category == 'T')
    {
      printf ("********Welcome to Temperature Converter!***********\n");
      printf ("Here is a list of conversions to choose from: \n");
      printf ("Enter 1 for Fahrenheit to Celsius. \n");
      printf ("Enter 2 for Celsius to Fahrenheit. \n");
      printf ("Enter 3 for Celsius to Kelvin.\n");
      printf ("Enter 4 for Fahreinheit to Kevin.\n");
      printf ("Enter 5 for Kelvin to Celsius.\n");
      printf ("Enter 6 for Kelvin to Fahrenheit.\n");
      printf ("Please enter your choice:\n");
      scanf ("%d", &tempChoice);
      if (tempChoice == 1)
	{
	  printf ("Please enter the Fahrenheit degree: \n");
	  scanf ("%d", &userinputF);
	  fahrenheitToCelcius = ((userinputF - 32) * (5.0 / 9.0));
	  printf ("Celcius: %d", fahrenheitToCelcius);
	}
      else if (tempChoice == 2)
	{
	  printf ("Please enter the Celcius degree: \n");
	  scanf ("%d", &userinputC);
	  celciusToFahrenheit = ((9.0 / 5.0) * userinputC + 32);
	  printf ("Fahrenheit: %d", celciusToFahrenheit);
	}
      else if (tempChoice == 3)
	{
	  printf ("Please Enter the Celcius:\n");
	  scanf ("%d", &userinputC);
	  celciusTokelvin = userinputC + 273.15;
	  printf ("Kelvin = %f", celciusTokelvin);
	}
      else if (tempChoice == 4)
	{
	  printf ("Please enter Fahrenheit:\n");
	  scanf ("%d", &userinputF);
	  fahrenheitTokelvin = (userinputF - 32) * 5 / 9 + 273.15;
	  printf ("Kelvin = %f", fahrenheitTokelvin);
	}
      else if (tempChoice == 5)
	{
	  printf ("Please enter kelvin :");
	  scanf ("%f", &userinputK);
	  kelvinTocelcius = userinputK - 273.15;
   printf ("Celcius = %f", kelvinTocelcius);
	}
      else if (tempChoice == 6)
	{
	  printf ("Please enter kelvin:\n");
	  scanf ("%f", &userinputK);
	  kelvinTofahrenit = (userinputK - 273.15) * 9 / 5 + 32;
     printf ("Kelvin = %f", kelvinTofahrenit);
	}
      else
	{
	  printf ("Please enter the correct choice. \n");
	}
    }
  else if (category == 'C')
    {
      printf ("*********Welcome to Currency Converter!************ \n");
      printf ("Here is a list of conversions to choose from: \n");
      printf ("Enter 1 for USD to Euro. \n");
      printf ("Enter 2 for INR to USD. \n");
      printf ("Enter 3 for INR to Euro. \n");
      scanf ("%d", &currencyChoice);
      if (currencyChoice == 1)
	{
	  printf ("Please enter the USD amount: \n");
	  scanf ("%d", &userinputUSDtoEuro);
      USDtoEURO = userinputUSDtoEuro * 0.94;
	  printf ("Euro: %.2f", USDtoEURO);	// %.2f = rounds the float to only 2 decimal places;
	}
      else if (currencyChoice == 2)
	{
	  printf ("Please enter the INR amount: \n");
	  scanf ("%d", &userinputINRtoUSD);
	  INRtoUSD = userinputINRtoUSD * 0.012;
	  printf ("USD: %.2f", INRtoUSD);
	}
      else if (currencyChoice == 3)
	{
	  printf ("Please enter the INR amount: \n");
	  scanf ("%d", &userinputINRtoEuro);
	  INRtoEURO = userinputINRtoEuro * 0.011;
	  printf ("Euro: %.2f", INRtoEURO);
	}
      else
	{
	  printf ("Please enter correct choice. \n");
	}
    }
  else if (category == 'M')
    {
      printf ("*********Welcome to Mass Converter!*********** \n");
      printf ("Here is a list of conversions to choose from: \n");
      printf ("Enter 1 for Kg to Grams. \n");
      printf ("Enter 2 for Grams to Kg. \n");
      printf ("Enter 3 for Kg to Pounds. \n");
      scanf ("%d", &massChoice);
      if (massChoice == 1)
	{
	  printf ("Please enter the Kg amount: \n");
	  scanf ("%d", &userinputKg);
	  KgToGrams = userinputKg * 1000;
      printf ("Grams: %.2f", KgToGrams);
	}
      else if (massChoice == 2)
	{
	  printf ("Please enter the grams amount: \n");
	  scanf ("%d", &userinputGrams);
	  GramsToKg = userinputGrams * 0.001;
	  printf ("Kg: %.2f", GramsToKg);
	}
      else if (massChoice == 3)
	{
	  printf ("Please enter the Kg amount: \n");
	  scanf ("%d", &userinputKg);
	  KgToPounds = userinputKg * 2.205;
	  printf ("Pounds: %.2f", KgToPounds);
	}
      else
	{
	  printf ("Please enter the correct choice. \n");
	}
    }
  else if (category == 'L')
    {
      printf ("**********Welcome to Length Converter!********* \n");
      printf ("Here is a list of conversions to choose from: \n");
      printf ("Enter 1 for cm to foot. \n");
      printf ("Enter 2 for foot to cm. \n");
      printf ("Enter 3 for inch to foot. \n");
      printf ("Enter 4 for mm to dm. \n");
      printf ("Enter 5 for mm to cm. \n");
      scanf ("%d", &lengthChoice);
      if (lengthChoice == 1)
	{
	  printf ("Please enter the cm measure: \n");
	  scanf ("%d", &userinputcm);
	  cmTofoot = userinputcm * 0.0328084;
	  printf ("foot: %.2f", cmTofoot);	// %.2f = rounds the float to only 2 decimal places;
	}
      else if (lengthChoice == 2)
	{
	  printf ("Please enter the foot measure: \n");
	  scanf ("%d", &userinputfoot);
	  footTocm = userinputfoot * 30.48000097536;
	  printf ("cm: %.2f", footTocm);
	}
      else if (lengthChoice == 3)
	{
      printf ("Please enter the inch measure: \n");
	  scanf ("%d", &userinputinch);
	  inchTofoot = userinputinch * 0.083333336;
	  printf ("foot: %.2f", inchTofoot);
	}
      else if (lengthChoice == 4)
	{
	  printf ("Please enter the mm measure: \n");
	  scanf ("%d", &userinputmm);   
	  mmTodm = userinputmm * 0.01;
	  printf ("dm: %.2f", mmTodm);
	}
      else if (lengthChoice == 5)
	{
	  printf ("Please enter the mm measure: \n");
	  scanf ("%d", &userinputmm);
	  mmTocm = userinputmm * 0.1;
	  printf ("mm: %.2f", mmTocm);
	}
    }
  else if (category == 'N')
    {
      printf("**********WELCOME TO NUMBER SYSTEM CONVERSION*********");
      printf ("\n Enter 2 for Decimal to octal number conversion.");
      printf ("\n Enter 3 for Decimal to Hexadecimal Number conversion.");
      printf (" \nEnter 4 for Binary to Decimal number conversion.");
      printf ("\n Enter 5 for Binary to octal number coversion.");
      printf ("\n Enter 6 for Binary to Hexadecimal Number conversion.");
      printf ("\n Enter 7 for octal to Binary Number conversion.");
      printf ("\n Enter 8 for octal to Decimal Number conversion.");
      printf ("\n Enter 9 for octal to Hexadecimal Number coversion.");
      printf ("\n Enter 10 for Hexadecimal to Decimal Number conversion.");
      printf ("\n Enter 11 for Hexadecimal to Binary number conversion.");
      printf ("\n Enter 12 for Hexadecimal to octal number conversion");
      printf ("\nPLEASE ENTER YOUR CHOICE :     ");
      scanf ("%d", &numChoice);
      switch (numChoice)
	{

	case 1 :decTobin (); break;

	case 2 :decTooct (); break;

	case 3: decTohex (); break;

	case 4:binTodec (); break;

	case 5:binTooct (); break;

	case 6:binTohex (); break;

	case 7: octTobin (); break;

	case 8:octTodec (); break;

	case 9:octTohex (); break;

	case 10:hexTodec (); break;

	case 11:hexTobin (); break;

	case 12 :hexTooct (); break;

	default: printf ("Please enter correct option ");
	         break;
	}
    }
    else if(category=='S')
    {
    int speedChoice;
   printf("\n******* WELCOME TO SPEED UNIT CONVERTER********\n");
   printf("Enter\n1)m/s to km/s\n2)km/s to m/s\n3)km/h to m/s\n4)m/s to km/h");
   printf(" \n Enter the Speed unit converter choise");
   scanf("%d",&speedChoice);
   switch(speedChoice)
   {
    case 1:
    {
     float ms;
     printf("Enter m/s\n");
     scanf("%f",&ms);
     printf("%f m/s = %f km/s\n",ms,(ms*0.001));
     break;
    }
    case 2:
    {
     float kms;
     printf("Enter km/s\n");
     scanf("%f",&kms);
     printf("%f km/s = %f m/s\n",kms,(kms*1000));
     break;
    }
    case 3:
    {
     float kmh;
     printf("Enter km/h\n");
     scanf("%f",&kmh);
     printf("%f km/h = %f m/s\n",kmh,(kmh*0.277777778));
     break;
    }
    case 4:
    {
     float ms;
     printf("Enter m/s\n");
     scanf("%f",&ms);
     printf("%f m/s = %f km/h\n",ms,(ms*3.6));
     break;
    }
    default:
    {
     printf("Enter Valid Speed Conversion Choice\n");
     break;
    }
   }
   }
   else if( category=='I'){
int m,s,h;
int choice;
printf("***WELCOME TO OUR TIME CONVERSION ****");
printf("\n--------------------------------------\n");
printf(" ENTER THE HOURS\n ");
scanf(" %d",&h);
printf(" ENTER THE MINUTE\n");
scanf(" %d",&m);
printf(" ENTER THE SECOND\n");
scanf(" %d",&s);
printf(" PRESS 1: FOR CONVERT HOURS TO MINUTE\n");
printf("\n");
printf("PRESS 2: FOR CONVERT HOURS TO SECOND\n");
printf("\n");
printf("PRESS 3: FOR CONVERT MINUTE TO HOURS\n");
printf("\n");
printf(" PRESS 4: FOR CONVERT MINUTE YO SECOND\n");
printf("\n");
printf("PRESS 5: FOR CONVERT SECOND TO HOURS\n");
printf("\n");
printf("PRESS 6: FOR CONVERT SECOND TO MINUTE\n");
printf("\n");
printf("ENTER YOUR CHOICE\n");
scanf("%d",& choice);

switch (choice)
{
case 1:  printf("convert hours to minute = %d \n",(h*60));
            break;
case 2: printf("convert hours to second =%d\n",(h*3600));
            break;
case 3: printf("convert minute to hours=%d\n",(m/60));   
            break;
case 4: printf("convert minute to second=%d\n",(m*60));
             break; 
 case 5: printf(" convert second to hours=%d\n",(s/3600));
             break;
case 6: printf(" convert second to minute=%d\n ",(s/60));   
             break;
  default: printf(" invalid input\n");     
                
        }
        }       
        
  else
    {
      printf ("Please enter correct choice. \n");
    }
}
void decTobin ()
{
  int num, i, a[10];
  printf ("Enter the decimal number:");
  scanf ("%d", &num);
  for (i = 0; num > 0; i++)
    {
      a[i] = num % 2;
      num = num / 2;
    }
  printf ("Binary equivalent is: \n");
  for (i = i - 1; i >= 0; i--)
    {
      printf ("%d", a[i]);
    }
}
void decTooct ()
{
  int num;
  printf ("\nEnter decimal Number:");
  scanf ("%d", &num);
  printf ("Octal equivalent is %o", num);
}
void decTohex ()
{
  int num;
  printf ("\nEnter the decimal Number:");
  scanf ("%d", &num);
  printf ("Hexadecimal equivalent is %x", num);
}

void binTodec ()
{
  long long binNum, decNum = 0;
  int i = 0, rem;
  printf ("Enter a binary number: ");
  scanf ("%lld", &binNum);
  while (binNum != 0)
    {
      rem = binNum % 10;
      binNum /= 10;
      decNum += rem * pow (2, i);
      printf ("%lld", decNum);
      i++;
    }
}
void binTooct ()
{
  int binaryNum, octalNum = 0, decimalNum = 0, base = 1, rem;
  printf ("Enter a binary number: ");
  scanf ("%d", &binaryNum);
  // convert binary to decimal
  while (binaryNum > 0)
    {
      rem = binaryNum % 10;
      decimalNum = decimalNum + rem * base;
      base = base * 2;
      binaryNum = binaryNum / 10;
    }
  // convert decimal to octal
  while (decimalNum > 0)
    {
      rem = decimalNum % 8;
      octalNum = octalNum + rem * base;
      base = base * 10;
      decimalNum = decimalNum / 8;
    }
  // print the octal number
  printf ("Octal number: %d\n", octalNum);
}
void binTohex()
{
 long long binnum, hexnum = 0, i = 0, rem;
  printf ("Enter the binary number : ");
  scanf ("%lld", &binnum);
  while (binnum != 0)
    {
      rem = binnum % 10;
      hexnum = hexnum + rem * i;
      i = i * 2;
      binnum = binnum / 10;
    }
  printf ("Equivalent Hexadecimal value : %llx", hexnum);
}

void octTodec()
{
  int n = 0;
  printf ("Enter thr octal number that you want to convert in decimal:\n");
  scanf ("%o", &n);
  printf ("Decimal equivalent is %d", n);
}
void octTobin()
{
  char octalnum[MAX];
  long i = 0;
  printf ("Enter any octal number: ");
  scanf ("%s", octalnum);
  printf ("Equivalent binary value: ");
  while (octalnum[i])
    {
      switch (octalnum[i])
	{
	case '0':printf ("000");
	  break;
	case '1':printf ("001");
	  break;
	case '2': printf ("010");
	  break;
	case '3':printf ("011");
	  break;
	case '4': printf ("100");
	  break;
	case '5':printf ("101");
	  break;
	case '6': printf ("110");
	  break;

	case '7':printf ("111");
	  break;
	default:  printf ("\n Invalid octal digit %c ", octalnum[i]);
      break;
	}
      i++;
    }
}
void octTohex()
{
  int n;
  printf ("Enter octal number:");
  scanf ("%o", &n);
  printf ("The Hexadecimal equivalent is %x", n);
}
void hexTodec()
{
// C program to demonstrate hexadecimal to decimal
// conversion using format specifier
  int n;
  printf ("Enter the Hexadecimal number :");
  scanf ("%x", &n);
  printf ("Decimal number is : %d", n);
}
void hexTobin ()
{
  char binarynum[MAX], hexa[MAX];
  long int i = 0;
  printf ("Enter the value for hexadecimal ");
  scanf ("%s", hexa);
  printf ("\n Equivalent binary value: ");
  while (hexa[i])
    {
      switch (hexa[i])
	{
	case '0': printf ("0000");
	  break;

	case '1': printf ("0001");
	  break;

	case '2': printf ("0010");
	  break;

	case '3': printf ("0011");
	  break;

	case '4': printf ("0100");
	  break;

	case '5': printf ("0101");
	  break;

	case '6': printf ("0110");
	  break;

	case '7': printf ("0111");
	  break;

	case '8': printf ("1000");
	  break;

	case '9': printf ("1001");
	  break;

	case 'A': printf ("1010");
	  break;

	case 'B': printf ("1011");
	  break;

	case 'C': printf ("1100");
	  break;

	case 'D': printf ("1101");
	  break;

	case 'E': printf ("1110");
	  break;

	case 'F': printf ("1111");
	  break;

	case 'a': printf ("1010");
	  break;

	case 'b': printf ("1011");
	  break;

	case 'c': printf ("1100");
	  break;

	case 'd': printf ("1101");
	  break;

	case 'e': printf ("1110");
	  break;

	case 'f': printf ("1111");
	  break;

	default: printf ("\n Invalid hexa digit %c ", hexa[i]);
      break;
	}
      i++;
    }
}
void hexTooct()
{
  int n;
  printf ("Enter the Hexadecimal Number:");
  scanf ("%x", &n);
  printf ("Octal equivalent is %o", n);
}
