#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;

const int MAXN = 105;
const int MAXM = 105;

int A[MAXN];
int N, M, K;

void resolve(int id){

    printf("Case #%d: %d\n", id, 1);
}

void init(int id){
    scanf("%d", &N);
    
}

int main(){
#ifndef ONLINE_JUDGE
    // freopen("data.in", "r", stdin);
#endif
    int t;
    scanf("%d", &t);
    for(int i=1; i<=t; i++){
        init(i);
        resolve(i);
    }
    return 0;
}