class Solution {
  public:
    int towerOfHanoi(int n, int from, int to, int aux) {
        // code here
        if(n == 1) {
            //cout << "move disk " << n << " from rod " << from << " to rod "<< to << '\n';
            return 1;
        }
    
        int count = towerOfHanoi(n - 1, from, aux, to);
        //cout << "move disk " << n << "from rod " << from << " to rod "<< to << '\n';
        count++;
        count += towerOfHanoi(n - 1, aux, to, from);
        return count;
    }
};