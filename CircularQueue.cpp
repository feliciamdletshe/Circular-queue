/*
PSEUDOCODE
	
AUTHOR: SF MDLETSHE

START

   FUNCTION to perform time decrement operation 
      IF q priority is equal to zero
         left operand to right operand time
      ELSE 
         q priority is equal to one
         left operand to right operand	
      END IF
         
    END FUNCTION
    
    FUNCTIOM to enqueue process at end of array (Queue)
       process enqueue back
    END FUNCTION
    
    FUNCTION dequeue 
       perform dequeue operation
       for loop
          for(int j=0;j< i-1; j++)
    END FUNCTION
    
    FUNCTION main
       DISPLAY number of process
       INPUT number of process
       for loop
       for(i=0;i< no_pro; i++)
	   DISPLAY  process number (1000 - 2000)
	   
	   IF queue of process
	      DISPLAY priority of process
		END IF 
		
	WHILE (count<i)
	   IF(q[count].ttl>0)
	      decrement time count
	   END IF 
	      IF ([count.ttl>0)
		     DISPLAY enQueue process
		  ELSE
		     DISPLAY completed process number
			 DISPLAY completed process   
    END FUNCTION  

END


*/

#include<iostream> // Preprocesser directive that allows input and output streams
#include<string> // to allow use of string libraries 
using namespace std; // declares the use of name spaces

//TASK#2 CIRCULAR QUEUE WITH PRIORITY

int i = 0; // initialise
//structure process
struct Process{
	int number; // initialize number
	int ttl; // intialize tiny template library
	int priority; // initialize priority
};

//function to perform time decrement operation
int decrementTime(Process q){
	int time = q.ttl;
	if (q.priority == 0)
		time -= 2;
	else if (q.priority==1)
		time -= 1;
	return time;
}
//function to enqueue process at end of array (Queue)
Process* enqueueBack(Process q[]){
	Process temp = q[0];
	q[0] = q[i - 1];
	q[i - 1] = temp;
	return q;
}
//function to perform dequeue operation
void dequeue(Process q[]){
	for (int j = 0; j < i-1; j++){
		q[j] = q[j + 1];
	}
	i--;

}
//main driver function
int main(){
	
	int no_pro;
	int number;
	cout << "Enter Number of Process: "; // display number of process
	cin >> no_pro;
	//Queue Of Processes
	Process *q = new Process[no_pro];
	for (i = 0; i < no_pro; i++){
		cout << "\nEnter Process Number (in range 1000 to 2000): "; // display process number
		cin >> q[i].number; // accept the input
		if (q[i].number == 0)
			break;
		cout << "\nEnter process "<<q[i].number<<" time (in range 1 to 25):"; // display 
		cin >> q[i].ttl; // accept the input
		cout << "\nEnter Priortiy of Process (in range 0 to 1): "; // display priortiy of process
		cin >> q[i].priority; // accept the input
	}
	int count = 0; // initialize count
	while (count<i){
		if (q[count].ttl>0){
			if (q[count].priority==0)
			q[count].ttl = decrementTime(q[count]);
			else
				q[count].ttl = decrementTime(q[count]);
			if (q[count].ttl > 0){
				cout << "\nEnQueue Process " << q[0].number << " at back"; // display the enqueue process
				q = enqueueBack(q);
			}
			else
			{
				cout << "\nCompleted Process  Number: " << q[0].number; // display completed process number 
				dequeue(q);
			}
		}
	}
	cout << "\nAll Process Completed!!" << endl; // display all completed process
}
