public class buy_and_sell_Stock {
    public int maxProfit(int[] prices) {
        int N=prices.length;
        int[] suffix_max = new int[N];
        suffix_max[N-1]=prices[N-1];
        for(int i=N-2;i>=0;i--)
        {
            suffix_max[i]=Math.max(prices[i],suffix_max[i+1]);
        }
        int profit=0;
        for(int j=0;j<N-1;j++)
        {
            int buy=prices[j];
            int sell=suffix_max[j+1];
            int current_profit=sell-buy;
            if(current_profit>profit)
            profit=current_profit;
        }
        return profit;
    }
}
