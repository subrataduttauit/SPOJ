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
    int T,N,p;
    
    scanf("%d",&T);
    
    while(T--){
        scanf("%d %d",&N,&p);
        
        puts(p == 0? "Airborne wins." : "Pagfloyd wins.");
    }
    
    return 0;
}
