/*
 @file: pthreads_1.cpp
 
 @author: student Sarah Welty, swelty2@uncc.edu

 
 @description: A program that demonstrates processes.
 
 @course: ITSC 3146
 @assignment: in-class activity [n]
 */

#include <pthread.h>
#include <iostream>

using namespace std;

const char* my_messages[4] = {"English: Hello!", "French: Bonjour!", "Spanish: Hola", "German: Guten Tag! " };

void *printMessage(void *index)
{
   int index_val = *((int*) &index);
  
   cout << my_messages[index_val]<< endl;
   
   return 0;
}


int main()
{

   pthread_t id;
   int rc;
   int ac;
   int bc;
   int cc;
   
  
       
    rc = pthread_create(&id, NULL, printMessage,(int*) 0);
    ac = pthread_create(&id, NULL, printMessage,(int*)  1);
    bc = pthread_create(&id, NULL, printMessage, (int*) 2);
    cc = pthread_create(&id, NULL, printMessage, (int*) 3);
    


   if (rc){
      cout << "ERROR; return code from pthread_create() is " << rc << endl;
      return -1;
   }
   
   pthread_exit(0);
}
