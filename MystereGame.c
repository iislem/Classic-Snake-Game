#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main ()
{
	const int min=1 , max=1000;
	int x,nbr,nombreMystere;
	
	srand ( time (NULL));
	nombreMystere = (rand() % (max-min+1)) + min;
	
	
	 
  do  
{
	printf("Quel est le nombre ? \n");
	scanf("%d",&nbr);
	
		if (nbr>nombreMystere) 
                   printf("c'est plus ! \n");
   else if (nbr<nombreMystere) 
                   printf("c'est moins ! \n");

    
    if (nbr == nombreMystere)	
	printf ("BRAVO !! vous avez trouvez le nombre mystere ! "); 
}
  while (nbr != nombreMystere);
	
   return (0) ; 
   
}
