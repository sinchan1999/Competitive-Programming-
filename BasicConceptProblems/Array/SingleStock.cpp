#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

    int maxProfit(vector<int>& prices) {
        int maxProfit=0;
        int minPrices=prices[0]; 
        int profit;
        for(int i=0;i<prices.size();i++)
        {
            minPrices = std::min(prices[i], minPrices);

            profit=prices[i]-minPrices;
            
            maxProfit =std::max(profit,maxProfit);
          
        }
        
        return maxProfit;        
    }
    int main(){
        int n;
        vector<int> prices;           
        while(cin>>n)
        {
            prices.push_back(n);
        }
        int k=maxProfit(prices);
        cout<<  k;
        
        return 0;
    }
    
    
