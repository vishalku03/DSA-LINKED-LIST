class Solution
{
public:
     ListNode *removeNodes(ListNode *head)
     {

          if (!head || !head->next)
               return head;

          ListNode *newnode = removeNodes(head->next);
          if (newnode->val > head->val)
               return newnode;

          head->next = newnode;

          return head;
     }
};

// leetcode - 2487
// using recursion