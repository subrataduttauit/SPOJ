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

using namespace std;

int main(){
    int T,n;
    
    scanf("%d",&T);
    
    while(T--){
        scanf("%d",&n);
        
        int ans = 0;
        
        for(int i = 2;i <= n;++i)
            ans = (ans + n + 1 - i) % i;
        
        printf("%d\n",ans + 1);
    }
    
    return 0;
}
