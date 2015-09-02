/* 
 * Solution to SPOJ Classical Problems
 * by Subrata Dutta
 * 
 * University Institute of Technology, Burdwan University
 * Dept. of Information Technology
 * https://github.com/subrataduttauit
 * https://in.linkedin.com/in/subrataduttauit
 */


#include <cstdio>
#include <algorithm>

using namespace std;

long long f(long long x, long long n){
    return (x - 1) * x / 2 + (n - x) * (n - x + 1) / 2 - ((n - x) / 2) * ((n - x + 1) / 2);
}

int main(){
    int T;
    long long N;
    
    scanf("%d",&T);
    
    while(T--){
        scanf("%lld",&N);
        
        printf("%lld\n",min(f((N + 2) / 3,N),f((N + 4) / 3,N)));
    }
    
    return 0;
}
