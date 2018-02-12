/* Hidden stub code will pass a root argument to the function below. Complete the function to solve the challenge. Hint: you may want to write one or more helper functions.  

The Node struct is defined as follows:
   struct Node {
      int data;
      Node* left;
      Node* right;
   }
*/
#include <climits>
   bool check(Node* root, int min, int max)
   {
       if(root!=NULL)
       {
           if(root->data<=min || root->data >=max)
               return false;
           else
               return check(root->left,min,root->data) && check(root->right, root->data, max);
       }
       else
           return true;
   }
   bool checkBST(Node* root) {
       
      return check(root, 0,INT_MAX);          
                
   }
