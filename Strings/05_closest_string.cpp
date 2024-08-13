	// int shortestDistance(vector<string> &s, string word1, string word2)
	// {
	// 	bool isword1=false;
	// 	bool isword2=false;
	// 	int pos_word1;
	// 	int pos_word2;
	// 	int ans=INT_MAX;
	// 	for(int i=0;i<s.size();i++)
	// 	{
	// 	    if(s[i]==word1)
	// 	    {     
	// 	        pos_word1=i;
	// 	        isword1=true;
	// 	        if(isword2==true)
	// 	        {
	// 	          ans=min(ans,abs(pos_word1-pos_word2));  
	// 	        }
	// 	    }
	// 	    if(s[i]==word2)
	// 	    {
	// 	        pos_word2=i;
	// 	        isword2=true;
	// 	        if(isword1==true)
	// 	        {
	// 	            ans=min(ans,abs(pos_word1-pos_word2));
	// 	        }
	// 	    }
	// 	}
	// 	return ans;
	// }