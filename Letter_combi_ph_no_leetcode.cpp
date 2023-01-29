class Solution {
  private:
  void solve(string digits,string output,vector<string>&ans,int index)

  {   string mapp[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
      if(digits.size()==0) return;
      if(index>digits.size()-1)
      {
          ans.push_back(output);
          return ;
      }
    int num=int(digits[index]) - int('0') ;
    string val=mapp[num];

    for(int i=0; i<val.size();i++)
    {    output.push_back(val[i]);
         solve(digits,output,ans,index+1);
         output.pop_back();
           
    }

  }

public:
    vector<string> letterCombinations(string digits) {

        string output="";
        vector<string> ans;
        int index=0;
        solve(digits,output,ans,index);
        return ans;
    }
};
