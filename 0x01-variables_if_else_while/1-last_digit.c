#include <stdlib.h>                                                                                                                                    
#include <time.h>                                                                                                                                      
#include <stdio.h>                                                                                                                                     
                                                                                                                                                       
/**                                                                                                                                                    
 *  * main - Entry point                                                                                                                                  
 *   *                                                                                                                                                     
 *    * Return: Always 0 (Success/correct)                                                                                                                  
 *     */                                                                                                                                                    
int main(void)                                                                                                                                         
{                                                                                                                                                      
	        int n;                                                                                                                                         
		                                                                                                                                                       
		            srand(time(0));                                                                                                                            
			            n = rand() - RAND_MAX / 2;                                                                                                                     
				                                                                                                                                                           
				            if (n % 10 > 5)                                                                                                                                    
						            {                                                                                                                                              
								                   printf("Last digit of %i is %i and is greater than 5\n",n , n % 10);                                                                                                             
										            }                                                                                                                                              
					                                                                                                                                                           
					            else if (n % )                                                                                                                                
							            {                                                                                                                                              
									                    printf("%i is negative\n", n);                                                                                                         
											            }                                                                                                                                              
						                                                                                                                                                           
						            else                                                                                                                                           
								            {                                                                                                                                              
										                    printf("%i is positive\n", n);                                                                                                         
												            }                                                                                                                                              
							                                                                                                                                                           
							            return (0);                                                                                                                                    
}                
