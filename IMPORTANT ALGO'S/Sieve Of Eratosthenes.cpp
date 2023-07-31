//Given a number N, calculate the prime numbers up to N using Sieve of Eratosthenes. 

vector<int> sieveOfEratosthenes(int N) {
        vector<bool> prime(N+1,true);
        vector<int>ans; 
        for(int i=2;i<=N;i++) {
            if(prime[i]){
                ans.push_back(i);
                for(int j=i*i;j<=N;j+=i) // before it was 2*i then we did optimization by obervation
                prime[j]=false;   
            }
        }
        return ans;  
    }
