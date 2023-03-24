#include <stdio.h>

int main() {
  
 int appleQuantity;
 double applePrice = 1.49;
 double appleReview;
 int appleReviewDisplay;
 const char appleLocation = 'F';
 int dayOfWeek = 0;
 int old_total;
 int new_review;


 appleQuantity = 23;
 appleReview = 82.5;
 appleReviewDisplay = appleReview;
 new_review = 52;
 old_total= 823;
 appleReview = old_total / 9;
 dayOfWeek = dayOfWeek %= 7;
 appleReview = (old_total + new_review)/10;


 if(dayOfWeek % 7 == 3 || appleQuantity < 10)
 {
  printf("Sale on apples today, today only they are: $%.2f\n", applePrice * .9);
 }
 
 printf("An apple costs: $%.2f, there are %d in inventory found in section: %c and your customers gave it an average review of %d%%!", applePrice, appleQuantity, appleLocation, appleReviewDisplay);

}