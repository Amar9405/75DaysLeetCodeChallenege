class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {

     unordered_set<string> mpp;

     for(string mails : emails){
         string cleanEmail="";
        for(char ch : mails){
             
             if( ch == '+' || ch =='@' ) break;

             if(ch == '.') continue;


             cleanEmail+=ch;
         }

         cleanEmail+=mails.substr(mails.find('@'));

         mpp.insert(cleanEmail);

     }

      int size= mpp.size();

      return size;

        
    }
};