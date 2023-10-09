#include <stdio.h>

//This program finds the super digit of any number.

int sum1 , sum2;  //Global variables.

void f(int n ,int k){

int temp = n;	

 //This loop finds the sum of digits of the given n.
	while(n>0){
	   
	 int digit= n% 10;
	   sum1+=digit; 
	   n /= 10; 
	}  
	
	
	n=temp;
	
	if(k>1)    
	   f(n,k-1);   //Recursive statement.It is used due to repetition factor.
	 
	else{    //Base case
	
    //These loops finds the super digit of the number.
	do{
        sum2 =0;
        while(sum1>0){
		  int digit= sum1%10;
		  sum2 += digit;
		  sum1/=10;   }
        
           sum1=sum2;
           
	} while(sum2>9);

  }
}

int main() {

//Local variables.n holds given the number and k holds given the repetiton factor.
 int n ,k;

//Read the number.
  printf("Please enter a number (n=) : ");
  scanf("%d",&n);   

//Read the repetition factor.
  printf("Please enter repetition factor (k=) : ");
  scanf("%d",&k);

        f(n,k);
  
//Some prints. 	  
  printf("Super digit of number " ); 
    
	  while(k>0){
	      
        printf("%d",n);
        k--; 
  }     
      printf(" is %d.",sum2 );      

      return 0;
}

// Bu git çalışması için yapılmış bir yorumdur.
//feat1 branch'i için bir commit yorumu
//feat1 2

