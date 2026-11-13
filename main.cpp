#include <iostream>
using namespace std;

//Global variables for use:

void fizzbuzz(int number);
int user_selected_limit = 0;

int main() 
{
   cout << "Hello user! Please select a whole number to loop too. if the number is divisble by 3 then I will say Fizz, if by 5 then I will say Buzz, if both I will say Fizzbuzz" << endl;
   cin >> ::user_selected_limit;

   for (int i = 1; i <= ::user_selected_limit; i++) {
   
   fizzbuzz(i); }
   
   return 0;

}
void fizzbuzz(int number) 
{

    if (number % 3 == 0 && number % 5 == 0) {
        cout << "Fizzbuzz" << endl;
    }
    else if (number % 3 == 0) {
        cout << "Fizz" << endl;
    }
    else if (number % 5 == 0) {
        cout << "Buzz" << endl;
    }
    else {
        cout << number << endl;
    }
    
}
