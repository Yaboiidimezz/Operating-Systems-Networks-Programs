/*
 @file: pthreads_skeleton.cpp
 
 @author: student name1, student2@uncc.edu
 @author: student name2, student2@uncc.edu
 @author: student name3, student3@uncc.edu
 
 @description: A program that demonstrates processes.
 
 @course: ITSC 3146
 @assignment: in-class activity [n]
 */

#include <pthread.h>
#include <iostream>

using namespace std;

//global array
int array[10];

//countNegatives method
void *countNegatives(void *arg)
{
  
   int count = 0;
   
   for (int i = 0; i < 10; i++) {
     int index_val = array[i];
   
   if(index_val < 0) {
      count++;
   }
   }//end of for loop
         cout << "Total negative numbers: " << count << endl;

   return 0;
}



//average method
void *average(void *arg)
{
     
     int total = 0;
     
     for (int i = 0; i < 10; i++) {
     int temp = array[i];
     
     total = total + temp;
     
     }
     
     double average = ((double)total/10);
     
     cout << "Average: " << average << endl;
   
   return 0;
}



//reverse method
void *reverse(void *arg)
{

     cout << "The numbers in reverse: " << endl;
     
     for (int i = 10; i > 0; i--) {
     int temp =  array[i-1];
      cout << temp << endl;
 
     }
   
   return 0;
}



int main()
{

   pthread_t id;

   int rc;
   int ac;
   int dc;
   int bc;
   
   
   for (int i =0; i <10; i++) {
      cout <<"Enter a number: " << endl;
      cin >> array[i];
      
   }
   
   rc = pthread_create(&id, NULL, countNegatives, NULL);
   
   for (int s = 0; s < 1000; s++);
       
   ac = pthread_create(&id, NULL, average, NULL);
      for (int t = 0; t < 1000; t++);
   
   dc = pthread_create(&id, NULL, reverse, NULL);

   if (rc){
      cout << "ERROR; return code from pthread_create() is " << rc << endl;
      return -1;
   }
   

   // NOTE: Using exit here will immediately end execution of all threads
   pthread_exit(0);
}
