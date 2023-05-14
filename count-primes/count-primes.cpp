class Solution {
public:
    int countPrimes(int n) {
   if(n==0 || n==1) return 0;
		vector<bool> p(n,true);
		for(int i=2;i<n;i++)
		{
			if(p[i]==false) continue;
			for(int j=2*i;j<n;j+=i)
				p[j]=false;
		}
		int cnt=0;
		for(int i=2;i<n;i++)
			if(p[i]) cnt++;
		return cnt;
    }
};