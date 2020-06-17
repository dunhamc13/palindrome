/* Palidrome 
 * @Description: Practicing solving problems with arrays.  Given a string,
 * is it a palidrome?
 *
 * @Assumption: Ignore non alphanumeric and ignore case.
 * @Efficiency: Time = O(n), Space = O(1).
 */
#include <stdexcept>
#include <iostream>
using namespace std;

/* palidrome
 * @Description
 *    Takes a string and sets two pointers.  One at end,
 *    one at beginning.  Converges towards middle.  If
 *    pointers ever don't match - not a palidrome.
 * @Pre: String created and passed to function
 * @Post: string checked and palidrome status passed.
 * @Param: s, a string
*/
bool isPalindrome(string s) {
   //set pointers to both ends of string
   for(int i = 0, j = s.size() - 1; i < j; i++, j--){
      //check if front is not alpha numeric
      while (i < j && !isalnum(s[i]))
         i++;  //not alnum keep going
      while (i < j && !isalnum(s[j]))
         j--; //not alnum keep going
         
      //check if match
      if (i < j && tolower(s[i]) != tolower(s[j]))
      return false;  //not a palidrome
   }//end check string
   return true; //must be true
}//end palidrome


/* main driver
 * @Description
 *    Creates a string and calls palidrome.
 * @Pre: None
 * @Post: String created and palidrome checked
*/
int main () {
   string test = "A man, a plan, a calal: Panama";
   bool palidrome = isPalindrome(test);
   if (palidrome)
      cout << test << " is a palidrome" << endl;
   else
      cout << test << " is not a palidrome" << endl;
   return 0;
}//end main
