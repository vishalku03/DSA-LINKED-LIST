class BrowserHistory
{
public:
     list<string> history;
     list<string>::iterator it;
     BrowserHistory(string homepage)
     {
          history.push_back(homepage);
          it = history.begin();
     }

     void visit(string url)
     {
          auto del = it;
          del++;
          history.erase(del, history.end());
          history.push_back(url);
          it++;
     }

     string back(int steps)
     {
          while (it != history.begin() && steps--)
          {
               it--;
          }
          return *it;
     }

     string forward(int steps)
     {
          while (it != (--history.end()) && steps--)
          {
               it++;
          }
          return *it;
     }
};

// LEETCODE PROBLEM - 1472