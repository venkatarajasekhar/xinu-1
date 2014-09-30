/*
 * @file xsh_prodcons.c
 * @provides prodcons
 */
/* For Xinu OS for Assignment 3 of P536
 * Peter Zhang (yz79)
 * Eriya Terada (eterada)
 *
 * Sept 30, 2014
 */


#include <prodcons.h>
int n;  
shellcmd xsh_prodcons(int argc, char *argv[]) 
{       
  //Argument verifications and validations         

  int count = 2000;  //local varible to hold count  
  if(argc > 2){
    fprintf(stderr,"Usage:\nprodcons <count: int>\n");
    return SYSERR;
  }
  else if(argc==2)  
  {											
    count	= atoi(args[1]);
  }  
  //create	the	process	produer	and	consumer	and	put	them	in	ready	queue.
  //Look	at	the	definations	of	function	create	and	resume	in	exinu/system	
  //folder	for	
  // reference.													
  
  //create semaphores:
  producer=semcreate(0);
  consumer=semcreate(0);
  mutex=semcreate(0);

  resume(	create(producer,	1024,	20,	"producer",	1,	count)	);							
  resume(	create(consumer,	1024,	20,	"consumer",	1,	count)	);															
}	
