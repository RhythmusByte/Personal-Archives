/* 
Author - RhythmusByte
Date - 09/08/2023 (DD/MM/YYYY)
Time - 15:45 (Indian Time)
*/

/* Investment Problem */

/* Defining values of PERIOD & PRINCIPAL */

#define PERIOD 2010
#define PRINCIPAL 5000.00

main()
{

  /* Declaration Statement*/ 
  /* Declared variables */
  
    int year;
    float amount,value,inrate;

/* Assignment Statements */
/* Assigned values for variables */
  
    amount = PRINCIPAL;
    inrate = 0.11;
    year = 2000;

  /* Computation Statement */
  /* Using While Loop */
  
    while(year <= PERIOD)
    {
    	printf("%2d  %8.2f\n",year,amount);
        
        value = amount + inrate * amount;
        year = year + 1;
        amount = value;
        
    }  

  /* While Loop Ends*/
  
}    
