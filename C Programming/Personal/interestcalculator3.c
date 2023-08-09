/*
Date - 09/08/2023 (DD/MM/YYYY)
Time - 16:45 (Indian)
Author - RhythmusByte */

/* Header File */

#include <stdio.h>

main()
{

	/* Declaration Statements & Assigned Values (Assignment Statement) */
    
	int time=2010, year=2000;
	float amount=5000.00, interest=0.11, value;
    
    /* while Loop Starts */
    
    while(year<=time)
    {
    	printf("Year: %d  Amount: %8.3f \n",year,amount);
        	
            value = amount + interest * amount;
            year = year + 1;
            amount = value;
    }
    
    /* while Loop Ends */
}

/* Output */

/*
Year: 2000  Amount: 5000.000
Year: 2001  Amount: 5550.000
Year: 2002  Amount: 6160.500
Year: 2003  Amount: 6838.155
Year: 2004  Amount: 7590.352
Year: 2005  Amount: 8425.290
Year: 2006  Amount: 9352.072
Year: 2007  Amount: 10380.800
Year: 2008  Amount: 11522.688
Year: 2009  Amount: 12790.184
Year: 2010  Amount: 14197.104

[Process completed - press Enter]
*/
